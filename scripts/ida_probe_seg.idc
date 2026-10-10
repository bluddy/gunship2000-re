#include <idc.idc>

// Definitive segment table via FirstSeg/NextSeg + name/attr cross-check.
static main(void)
{
  auto i, s, ea;

  auto_wait();

  for (i = 0, s = FirstSeg(); s != BADADDR; i++, s = NextSeg(s))
    msg("  [%d] name=%s start=%08X end=%08X\n",
        i, SegName(s), SegStart(s), SegEnd(s));

  ea = LocByName("sub_106F2");
  msg("sub_106F2 EA=%08X name=%s start=%08X off=%04X\n",
      ea, SegName(ea), SegStart(ea), ea - SegStart(ea));

  ea = LocByName("sub_10EB0");
  msg("sub_10EB0 EA=%08X name=%s start=%08X off=%04X\n",
      ea, SegName(ea), SegStart(ea), ea - SegStart(ea));

  qexit(0);
}
