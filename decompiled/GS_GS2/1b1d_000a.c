/* GS.GS2 1b1d:000a undefined FUN_1b1d_000a(void) */
void __cdecl16far FUN_1b1d_000a(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar3 = FUN_1b1d_01ec();
  if (iVar3 != 0) {
    if (*(char *)0xad08 < *(char *)0xad07) {
      if ((*(byte *)0xad0b & 3) < 3) {
        *(char *)0xad0b = (*(byte *)0xad0b & 3) * '\x05' + (*(byte *)0xad0b & 0x10) + '\x01';
      }
    }
    iVar3 = FUN_1b1d_01ec();
    FUN_1b1d_008a(0 < iVar3);
    *(char *)0x7a66 = '\x01' - (param_1 == 0);
    FUN_1b1d_00f8();
    *(undefined1 *)0xad05 = 0;
    puVar1 = (uint *)0xad24;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 100;
    *(int *)0xad26 = *(int *)0xad26 + (uint)(0xff9b < uVar2);
    *(undefined1 *)0xad1b = 3;
  }
  return;
}
