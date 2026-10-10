#include <idc.idc>

// Resolve listing-offset semantics: segment start vs known label EAs.
static main(void)
{
  auto ea, seg, org;

  auto_wait();

  ea = LocByName("sub_106F2");
  msg("sub_106F2 EA=%08X\n", ea);
  if (ea != BADADDR)
  {
    seg = SegName(ea);
    msg("  in segment %s, seg start=%08X, offset in seg=%04X\n",
        seg, SegStart(ea), ea - SegStart(ea));
  }

  ea = LocByName("loc_10C08");
  msg("loc_10C08 EA=%08X\n", ea);
  if (ea != BADADDR)
  {
    seg = SegName(ea);
    msg("  in segment %s, seg start=%08X, offset in seg=%04X\n",
        seg, SegStart(ea), ea - SegStart(ea));
  }

  ea = LocByName("sub_10EB0");
  msg("sub_10EB0 EA=%08X\n", ea);
  if (ea != BADADDR)
  {
    seg = SegName(ea);
    msg("  in segment %s, seg start=%08X, offset in seg=%04X\n",
        seg, SegStart(ea), ea - SegStart(ea));
  }

  // dump raw segment attrs for seg001
  ea = SegByName("seg001");
  msg("seg001 start attr=%08X\n", GetSegmentAttr(ea, SEGATTR_START));
  org = GetSegmentAttr(ea, SEGATTR_ORGBASE);
  msg("seg001 orgbase=%08X\n", org);

  qexit(0);
}
