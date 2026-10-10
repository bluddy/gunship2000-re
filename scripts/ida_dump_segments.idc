#include <idc.idc>

// Dump TRUE segment attributes (start/end from SEGATTR, not derived),
// so overlapping segments are visible.
static main(void)
{
  auto seg, name, s, e;

  auto_wait();
  for (seg = FirstSeg(); seg != BADADDR; seg = NextSeg(seg))
  {
    name = SegName(seg);
    s = GetSegmentAttr(seg, SEGATTR_START);
    e = GetSegmentAttr(seg, SEGATTR_END);
    msg("SEG %s start=%08X end=%08X size=%08X\n",
        name, s, e, e - s);
  }
  qexit(0);
}
