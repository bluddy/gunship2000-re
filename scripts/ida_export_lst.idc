#include <idc.idc>

// Batch: auto-analyze (with -A), then dump a full IDA listing (.lst)
// for the F-19 / mzretools pipeline (lst2asm.py, lst2ch.py, mzdiff).
// Collapsed functions/chunks are expanded first: a hidden function dumps
// as `; [NNN BYTES: COLLAPSED FUNCTION ...]` and its body would be lost.
static main(void)
{
  auto lst, h, ea, f, hidden, total;

  auto_wait();

  // get_next_func(-1) yields the first function; clear FUNC_HIDDEN so the
  // listing dump expands every collapsed function/chunk
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
        msg("ida_export_lst: FAILED to clear hidden at %x\n", ea);
    }
    ea = get_next_func(ea);
  }
  msg("ida_export_lst: %d functions, %d hidden\n", total, hidden);

  // collapsed tail chunks carry FUNC_HIDDEN on the chunk itself
  ea = get_next_fchunk(0);
  hidden = 0;
  while (ea != -1 && ea != BADADDR)
  {
    f = get_fchunk_attr(ea, FUNCATTR_FLAGS);
    if (f != -1 && (f & FUNC_HIDDEN) != 0)
    {
      hidden++;
      if (set_fchunk_attr(ea, FUNCATTR_FLAGS, f & ~FUNC_HIDDEN) == 0)
        msg("ida_export_lst: FAILED to clear hidden chunk at %x\n", ea);
    }
    ea = get_next_fchunk(ea);
  }
  msg("ida_export_lst: %d hidden chunks\n", hidden);

  lst = get_idb_path() + ".lst";
  h = fopen(lst, "w");
  if (h == 0)
  {
    msg("ida_export_lst: FAILED to open %s\n", lst);
    qexit(1);
  }
  gen_file(OFILE_LST, h, 0, BADADDR, 0);
  fclose(h);
  msg("ida_export_lst: wrote %s\n", lst);
  qexit(0);
}
