/* GS.GS2 2658:043f undefined FUN_2658_043f(void) */
void __cdecl16near FUN_2658_043f(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint in_BX;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = false;
  if (*(int *)0x63a8 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      FUN_2658_0410();
      return;
    }
    uVar3 = 0x8000;
    bVar4 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar4) {
      FUN_2658_0410();
      return;
    }
    if (uVar3 <= uVar2) {
      uVar2 = in_BX + 0x800;
      in_BX = uVar2;
    }
    bVar4 = CARRY2(in_BX,uVar2 + 0xf >> 4);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      FUN_2658_0410();
      return;
    }
  }
  return;
}
