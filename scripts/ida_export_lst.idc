#include <idc.idc>

// Batch: auto-analyze (with -A), then dump a full IDA listing (.lst)
// for the F-19 / mzretools pipeline (lst2asm.py, lst2ch.py, mzdiff).
static main(void)
{
  auto lst, h;

  auto_wait();
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
