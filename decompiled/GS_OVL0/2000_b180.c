/* GS.GS2 2000:b180 undefined FUN_2000_b180(void) */
void __cdecl16far FUN_2000_b180(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  cVar1 = func_0x00013a1c(0xbf,1,9);
  iVar3 = param_1 * 4;
  *(char *)(iVar3 + -0x6794) = cVar1;
  uVar2 = func_0x00013a1c(0x139c,4,-(cVar1 + -0xd));
  *(undefined1 *)(iVar3 + -0x6792) = uVar2;
  if (param_1 == 0) {
    *(undefined1 *)0x986d = 0;
  }
  else {
    uVar2 = func_0x00013a1c(0x139c,0,4);
    *(undefined1 *)(iVar3 + -0x6793) = uVar2;
  }
  uVar2 = func_0x00013a1c(0x139c,3,-(*(char *)(param_1 * 4 + -0x6793) + -8));
  *(undefined1 *)(param_1 * 4 + -0x6791) = uVar2;
  return;
}
