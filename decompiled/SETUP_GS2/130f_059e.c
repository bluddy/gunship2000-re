/* SETUP.GS2 130f:059e undefined FUN_130f_059e(void) */
void __cdecl16far FUN_130f_059e(undefined1 param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  uVar2 = *(int *)0xd70 * 0xa0;
  uVar3 = *(int *)0xd6e * 2;
  *(int *)0xd7e = uVar2 + uVar3;
  *(int *)0xd80 = ((int)uVar2 >> 0xf) + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar2,uVar3) + -0x4800;
  *(int *)0xd6e = *(int *)0xd6e + param_2;
  if (0x50 < *(int *)0xd6e) {
    *(undefined2 *)0xd6e = 0x50;
  }
  while (param_2 != 0) {
    *(undefined1 *)*(undefined4 *)0xd7e = param_1;
    uVar1 = *(undefined1 *)0xd78;
    *(int *)0xd7e = *(int *)0xd7e + 1;
    *(undefined1 *)*(undefined4 *)0xd7e = uVar1;
    *(int *)0xd7e = *(int *)0xd7e + 1;
    param_2 = param_2 + -1;
  }
  *(undefined1 *)0xd5d = 2;
  *(undefined1 *)0xd5f = 0;
  *(undefined1 *)0xd63 = *(undefined1 *)0xd70;
  *(undefined1 *)0xd62 = *(undefined1 *)0xd6e;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  return;
}
