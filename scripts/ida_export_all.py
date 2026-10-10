import ida_auto
import ida_funcs
import ida_idaapi
import ida_nalt
import ida_pro
import ida_segment
import idc

ida_auto.auto_wait()

# un-hide all functions and tail chunks (FUNC_HIDDEN=0x40) so gen_file
# expands their bodies - IDC's fchunk attr API silently fails on FLAGS
cleared_f = cleared_c = 0
for i in range(ida_funcs.get_func_qty()):
    f = ida_funcs.getn_func(i)
    if f is not None and (f.flags & 0x40):
        ida_funcs.set_visible_func(f, True)
        cleared_f += 1
for i in range(ida_funcs.get_fchunk_qty()):
    f = ida_funcs.getn_fchunk(i)
    if f is not None and (f.flags & 0x40):
        ida_funcs.set_visible_func(f, True)
        cleared_c += 1
print("ida_export_all: %d funcs unhidden, %d chunks unhidden" % (cleared_f, cleared_c))

idb_path = idc.get_idb_path()
segs_path = idb_path[:-4] + ".segs.log" if idb_path.endswith(".i64") else idb_path + ".segs.log"
lst_path = idb_path + ".lst"

with open(segs_path, "w") as h:
    for i in range(ida_segment.get_segm_qty()):
        seg = ida_segment.getnseg(i)
        name = ida_segment.get_segm_name(seg)
        h.write("SEG %s start=%08X end=%08X size=%08X\n"
                % (name, seg.start_ea, seg.end_ea, seg.end_ea - seg.start_ea))
print("ida_export_all: wrote %s" % segs_path)

idc.gen_file(idc.OFILE_LST, lst_path, 0, ida_idaapi.BADADDR, 0)
print("ida_export_all: wrote %s" % lst_path)
ida_pro.qexit(0)
