import ida_funcs
import ida_pro

# entry points (functions) and tail chunks are both func_t objects;
# FUNC_HIDDEN on either makes the listing dump collapse its body
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

print("ida_expand_chunks: cleared %d funcs, %d chunks" % (cleared_f, cleared_c))
ida_pro.qexit(0)
