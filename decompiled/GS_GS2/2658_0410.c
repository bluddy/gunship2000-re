/* GS.GS2 2658:0410 undefined FUN_2658_0410(void) */
void FUN_2658_0410(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  uVar4 = 0;
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar5 = false;
  if (*(int *)0x63a8 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar5) {
      FUN_2658_0410();
      return;
    }
    uVar3 = 0x8000;
    bVar5 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar5) {
      FUN_2658_0410();
      return;
    }
    if (uVar3 <= uVar2) {
      uVar2 = uVar4 + 0x800;
      uVar4 = uVar2;
    }
    bVar5 = CARRY2(uVar4,uVar2 + 0xf >> 4);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar5) {
      FUN_2658_0410();
      return;
    }
  }
  return;
}
