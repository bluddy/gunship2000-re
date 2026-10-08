/* SETUP.GS2 130f:0510 undefined FUN_130f_0510(void) */
void __cdecl16far FUN_130f_0510(char param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (param_1 == '\n') {
    *(undefined2 *)0xd6e = *(undefined2 *)0xd7a;
    if (*(int *)0xd70 < 0x18) {
      *(int *)0xd70 = *(int *)0xd70 + 1;
    }
  }
  else {
    uVar3 = *(int *)0xd6e * 2;
    uVar4 = *(int *)0xd70 * 0xa0;
    iVar2 = ((int)uVar3 >> 0xf) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4) + -0x4800;
    *(int *)0xd7e = (int)(uVar3 + uVar4);
    *(int *)0xd80 = iVar2;
    *(char *)(uVar3 + uVar4) = param_1;
    uVar1 = *(undefined1 *)0xd78;
    *(int *)0xd7e = *(int *)0xd7e + 1;
    *(undefined1 *)*(undefined4 *)0xd7e = uVar1;
    if (*(int *)0xd6e < 0x50) {
      *(int *)0xd6e = *(int *)0xd6e + 1;
    }
  }
  *(undefined1 *)0xd5d = 2;
  *(undefined1 *)0xd5f = 0;
  *(undefined1 *)0xd63 = *(undefined1 *)0xd70;
  *(undefined1 *)0xd62 = *(undefined1 *)0xd6e;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  return;
}
