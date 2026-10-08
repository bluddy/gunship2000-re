/* GS.GS2 10bf:4c38 undefined FUN_10bf_4c38(void) */
void __cdecl16far FUN_10bf_4c38(void)

{
  int iVar1;
  int *in_BX;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar2 = in_BX[1];
  if (iVar2 < 0) {
    iVar2 = -(uint)(*in_BX != 0) - iVar2;
  }
  iVar1 = *(int *)0x6ea8;
  iVar3 = iVar1 + 0xc;
  if (iVar3 != 0x6e94) {
    *(int *)0x6ea8 = iVar3;
    *(int *)(iVar1 + 8) = iVar3;
    if ((char)((uint)iVar2 >> 8) == '\0') {
      *(undefined1 *)(iVar1 + 10) = 3;
      FUN_10bf_388c();
      return;
    }
    *(undefined1 *)(iVar1 + 10) = 7;
    FUN_10bf_3c02();
    return;
  }
  thunk_FUN_10bf_51b6();
  return;
}
