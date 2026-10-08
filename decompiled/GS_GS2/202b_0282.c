/* GS.GS2 202b:0282 undefined FUN_202b_0282(void) */
void __cdecl16far FUN_202b_0282(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  char unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  int iStack_2c;
  undefined2 local_2a [15];
  undefined2 uStack_c;
  
  FUN_10bf_02c0();
  for (iStack_2c = 0; iStack_2c < *(int *)0x8fc4; iStack_2c = iStack_2c + 1) {
    cVar3 = *(char *)(iStack_2c * 0x38 + -0x78f4);
    if (cVar3 == '\x01') {
      bVar7 = (int)*(char *)(iStack_2c * 0x38 + -0x78f3) == *(int *)0xb60f;
    }
    else if (cVar3 == '\x02') {
      uStack_c = 0x58d;
      puVar4 = (undefined2 *)FUN_1000_05a2();
      puVar6 = local_2a;
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      bVar7 = *(char *)(iStack_2c * 0x38 + -0x78f2) == unaff_SI;
    }
    else {
      bVar7 = false;
    }
    if ((bool)*(char *)(iStack_2c * 0x38 + -0x78c5) != bVar7) {
      *(bool *)(iStack_2c * 0x38 + -0x78c5) = bVar7;
      uStack_c = 0x5e4;
      FUN_202b_01c0();
    }
  }
  return;
}
