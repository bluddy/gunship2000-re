#include <idc.idc>

// Batch: auto-analyze, un-hide all functions/chunks, dump segments + listing.
// Usage: idat -A -S<this> -L<log> <exe.i64>
// Writes: <idb minus .i64>.segs.log and <idb>.lst
static main(void)
{
  auto lst, h, ea, f, hidden, total, segs, seg, name, s, e;

  auto_wait();

  // un-hide all functions so gen_file expands their bodies
  ea = get_next_func(0);
  hidden = 0;
  total = 0;
  while (ea != -1 && ea != BADADDR)
  {
    total++;
    f = get_func_attr(ea, FUNCATTR_FLAGS);
    if (f != -1 && (f & FUNC_HIDDEN) != 0)
    {
      hidden++;
      if (set_func_attr(ea, FUNCATTR_FLAGS, f & ~FUNC_HIDDEN) == 0)
        msg("ida_export: FAILED to clear hidden at %x\n", ea);
    }
    ea = get_next_func(ea);
  }
  msg("ida_export: %d functions, %d hidden\n", total, hidden);

  ea = get_next_fchunk(0);
  hidden = 0;
  while (ea != -1 && ea != BADADDR)
  {
    f = get_fchunk_attr(ea, FUNCATTR_FLAGS);
    if (f != -1 && (f & FUNC_HIDDEN) != 0)
    {
      hidden++;
      if (set_fchunk_attr(ea, FUNCATTR_FLAGS, f & ~FUNC_HIDDEN) == 0)
        msg("ida_export: FAILED to clear hidden chunk at %x\n", ea);
    }
    ea = get_next_fchunk(ea);
  }
  msg("ida_export: %d hidden chunks\n", hidden);

  // segments log: <idb path minus ".i64">.segs.log
  segs = get_idb_path();
  if (substr(segs, strlen(segs) - 4, 4) == ".i64")
    segs = substr(segs, 0, strlen(segs) - 4);
  segs = segs + ".segs.log";
  h = fopen(segs, "w");
  if (h == 0)
  {
    msg("ida_export: FAILED to open %s\n", segs);
    qexit(1);
  }
  for (seg = FirstSeg(); seg != BADADDR; seg = NextSeg(seg))
  {
    name = SegName(seg);
    s = GetSegmentAttr(seg, SEGATTR_START);
    e = GetSegmentAttr(seg, SEGATTR_END);
    fprintf(h, "SEG %s start=%08X end=%08X size=%08X\n", name, s, e, e - s);
  }
  fclose(h);
  msg("ida_export: wrote %s\n", segs);

  lst = get_idb_path() + ".lst";
  h = fopen(lst, "w");
  if (h == 0)
  {
    msg("ida_export: FAILED to open %s\n", lst);
    qexit(1);
  }
  gen_file(OFILE_LST, h, 0, BADADDR, 0);
  fclose(h);
  msg("ida_export: wrote %s\n", lst);
  qexit(0);
}
