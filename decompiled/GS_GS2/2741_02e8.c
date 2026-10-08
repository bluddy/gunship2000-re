/* GS.GS2 2741:02e8 undefined FUN_2741_02e8(void) */
undefined2 __cdecl16far FUN_2741_02e8(undefined2 param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 local_10;
  undefined1 local_e [2];
  int iStack_c;
  int iStack_a;
  undefined2 uStack_8;
  int iStack_6;
  uint local_4;
  
  iVar1 = FUN_10bf_2e76(0x2741,param_3,0,&local_10);
  if (iVar1 == 0) {
    puVar3 = local_e;
    iVar1 = FUN_10bf_2e8e(0x10bf,local_10,&local_4);
    if (iVar1 == 0) {
      *(undefined2 *)0x6864 = 2;
      if (local_4 < param_2) {
        return 2;
      }
      iVar1 = FUN_2741_085c(local_10,param_2 << 1,(int)(param_2 << 1) >> 0xf,puVar3);
      if (iVar1 == 0) {
        puVar3 = local_e;
        iVar1 = FUN_10bf_2e8e(0x10bf,local_10,&local_4);
        if (iVar1 == 0) {
          local_4 = local_4 - 8;
          iVar1 = FUN_2741_085c(local_10,local_4,0,puVar3);
          if (iVar1 == 0) {
            puVar3 = local_e;
            iVar1 = FUN_10bf_2e8e(0x10bf,local_10,0x9c2e);
            if (iVar1 == 0) {
              iStack_6 = ((uint)*(byte *)0x9c2f - (uint)*(byte *)0x9c2e) + 1;
              iStack_c = ((uint)*(byte *)0x9c32 + (uint)*(byte *)0x9c34) * iStack_6 *
                         (uint)*(byte *)0x9c30 + 8;
              uVar2 = thunk_EXT_FUN_0000_0000(0x10bf,param_1,puVar3);
              uStack_8 = (undefined2)((ulong)uVar2 >> 0x10);
              iStack_a = (int)uVar2 + -8;
              if (*(char *)0x9c31 == '\0') {
                iStack_a = iStack_a - iStack_6;
                local_4 = local_4 - iStack_6;
                iStack_c = iStack_c + iStack_6;
              }
              iVar1 = FUN_2741_085c(local_10,local_4,0);
              if (((iVar1 == 0) &&
                  (iVar1 = FUN_10bf_2e8e(0x2658,local_10,iStack_a,uStack_8,iStack_c,local_e),
                  iVar1 == 0)) && (iVar1 = FUN_10bf_2dee(0x10bf,local_10), iVar1 == 0)) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return *(undefined2 *)0x6864;
}
