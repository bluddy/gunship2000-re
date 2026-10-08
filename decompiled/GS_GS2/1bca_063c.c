/* GS.GS2 1bca:063c undefined FUN_1bca_063c(void) */
void __cdecl16far FUN_1bca_063c(undefined1 param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  uVar2 = *(int *)0x823e * 0xa0;
  uVar3 = *(int *)0x823c * 2;
  *(int *)0x824c = uVar2 + uVar3;
  *(int *)0x824e = ((int)uVar2 >> 0xf) + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar2,uVar3) + -0x4800;
  *(int *)0x823c = *(int *)0x823c + param_2;
  if (0x50 < *(int *)0x823c) {
    *(undefined2 *)0x823c = 0x50;
  }
  while (param_2 != 0) {
    *(undefined1 *)*(undefined4 *)0x824c = param_1;
    uVar1 = *(undefined1 *)0x8246;
    *(int *)0x824c = *(int *)0x824c + 1;
    *(undefined1 *)*(undefined4 *)0x824c = uVar1;
    *(int *)0x824c = *(int *)0x824c + 1;
    param_2 = param_2 + -1;
  }
  *(undefined1 *)0x822b = 2;
  *(undefined1 *)0x822d = 0;
  *(undefined1 *)0x8231 = *(undefined1 *)0x823e;
  *(undefined1 *)0x8230 = *(undefined1 *)0x823c;
  FUN_10bf_246a(0x10,0x822a,0x822a);
  return;
}
