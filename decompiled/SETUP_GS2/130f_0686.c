/* SETUP.GS2 130f:0686 undefined FUN_130f_0686(void) */
void __cdecl16far FUN_130f_0686(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(undefined1 *)0xd5d = 3;
  *(undefined1 *)0xd5f = 0;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  *(uint *)0xd74 = (uint)*(byte *)0xd61;
  *(uint *)0xd6a = (uint)*(byte *)0xd60;
  uVar1 = (uint)*(byte *)0xd63;
  *(uint *)0xd82 = uVar1;
  *(uint *)0xd6e = uVar1;
  uVar2 = (uint)*(byte *)0xd62;
  *(uint *)0xd7c = uVar2;
  *(uint *)0xd70 = uVar2;
  uVar2 = uVar2 * 0xa0;
  iVar3 = uVar1 * 2 + uVar2;
  iVar3 = (int)*(char *)(iVar3 + 1);
  *(int *)0xd72 = iVar3;
  *(int *)0xd78 = iVar3;
  return;
}
