/* GS.GS2 1f61:056a undefined FUN_1f61_056a(void) */
void __cdecl16far FUN_1f61_056a(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  uint uStack_6;
  
  FUN_10bf_02c0();
  for (uStack_6 = 0; (int)uStack_6 < param_2; uStack_6 = uStack_6 + 1) {
    uStack_6 = *(uint *)0x864a;
    iVar3 = FUN_10bf_1ab4();
    if (iVar3 == -1) break;
    *(undefined1 *)((int)param_1 + uStack_6) = (char)iVar3;
  }
  puVar1 = (uint *)0x86bc;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uStack_6;
  *(int *)0x86be = *(int *)0x86be + ((int)uStack_6 >> 0xf) + (uint)CARRY2(uVar2,uStack_6);
  return;
}
