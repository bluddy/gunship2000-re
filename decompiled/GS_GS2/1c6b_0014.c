/* GS.GS2 1c6b:0014 undefined FUN_1c6b_0014(void) */
void __cdecl16far FUN_1c6b_0014(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  int iVar7;
  
  FUN_10bf_02c0();
  FUN_10bf_2c3a(0xadde,0,0x7ee);
  iVar3 = FUN_10bf_06dc(0x1a6c,0x424);
  if (iVar3 != 0) {
    for (iVar7 = 0; iVar7 < 7; iVar7 = iVar7 + 1) {
      iVar4 = iVar3 * 0x122;
      iVar7 = iVar3;
      FUN_10bf_072a(iVar4 + -0x5222,0x122,1);
      if (((*(int *)(iVar4 + -0x5104) != 1) || (*(int *)(iVar4 + -0x5102) != 0x1230)) &&
         ((*(int *)(iVar4 + -0x5104) != 0 || (*(int *)(iVar4 + -0x5102) != 0x1230)))) {
        if ((*(char *)(iVar4 + -0x51c7) == -1) && (*(char *)(iVar4 + -0x51c6) == -1)) {
          *(undefined2 *)(iVar4 + -0x5104) = 0;
          *(undefined2 *)(iVar4 + -0x5102) = 0x1230;
        }
        else {
          *(undefined1 *)(iVar4 + -0x51d3) = 0;
          if (*(char *)(iVar4 + -0x51bd) == '\x04') {
            *(undefined1 *)(iVar4 + -0x51bd) = 3;
          }
          *(undefined2 *)(iVar4 + -0x5104) = 1;
          *(undefined2 *)(iVar4 + -0x5102) = 0x1230;
          *(undefined2 *)(iVar4 + -0x517d) = 0;
          *(undefined2 *)(iVar4 + -0x517f) = 0;
          *(undefined2 *)(iVar4 + -0x5154) = 0;
          *(undefined2 *)(iVar4 + -0x5156) = 0;
          *(undefined2 *)(iVar4 + -0x512b) = 0;
          *(undefined2 *)(iVar4 + -0x512d) = 0;
        }
      }
    }
    FUN_10bf_05f6(iVar3);
  }
  *(undefined1 *)0xe281 = 0;
  puVar6 = (undefined2 *)0xacb6;
  puVar5 = (undefined2 *)0xadde;
  for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
