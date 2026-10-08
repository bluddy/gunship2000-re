/* GS2.GS2 12a2:062f undefined FUN_12a2_062f(void) */
undefined2 __cdecl16far FUN_12a2_062f(uint param_1)

{
  undefined4 *puVar1;
  int in_BX;
  uint uVar2;
  code *pcVar3;
  undefined2 unaff_DS;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  
  if (param_1 < 0xffe9) {
    bVar6 = false;
    if (*(int *)0x3234 != 0) {
      pcVar3 = (code *)0x716;
      while( true ) {
        uVar2 = *(uint *)0x323c;
        uVar4 = (uint)((ulong)*(undefined4 *)0x3236 >> 0x10);
        in_BX = (int)*(undefined4 *)0x3236;
        uVar5 = uVar4;
        do {
          do {
            uVar8 = (*pcVar3)();
            if (!bVar6) {
              if (pcVar3 == (code *)0x716) goto LAB_12a2_0699;
              goto LAB_12a2_0696;
            }
            puVar1 = (undefined4 *)(in_BX + 0xc);
            in_BX = (int)*puVar1;
            bVar6 = uVar4 < uVar2;
            bVar7 = uVar4 != uVar2;
            uVar4 = (uint)((ulong)*puVar1 >> 0x10);
          } while (bVar7);
          uVar2 = *(uint *)((int)*(undefined4 *)0x3236 + 0x12);
          uVar4 = (uint)((ulong)*(undefined4 *)0x3232 >> 0x10);
          in_BX = (int)*(undefined4 *)0x3232;
          bVar6 = uVar4 < uVar5;
          bVar7 = uVar4 != uVar5;
          uVar5 = uVar4;
        } while (bVar7);
        bVar6 = pcVar3 < (code *)0x792;
        if (pcVar3 == (code *)0x792) break;
        pcVar3 = (code *)0x792;
      }
    }
    FUN_12a2_0890();
    if (!bVar6) {
LAB_12a2_0696:
      uVar8 = FUN_12a2_0716();
LAB_12a2_0699:
      *(undefined2 *)0x3238 = (int)((ulong)uVar8 >> 0x10);
      *(int *)0x3236 = in_BX;
      return (int)uVar8;
    }
  }
  return 0;
}
