/* SETUP.GS2 130f:03b6 undefined FUN_130f_03b6(void) */
void __cdecl16far FUN_130f_03b6(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined2 uStackY_e;
  undefined2 uStackY_c;
  
  FUN_111d_02c6();
  iVar6 = *(int *)0xd76 * 10 + *(int *)0xd6c;
  if (*(int *)(iVar6 + -10) != 0) {
    uStackY_c = 0;
    for (uStackY_e = (uint)*(byte *)(iVar6 + -8); (int)uStackY_e <= (int)(uint)*(byte *)(iVar6 + -7)
        ; uStackY_e = uStackY_e + 1) {
      for (uVar2 = (uint)*(byte *)(iVar6 + -6); (int)uVar2 <= (int)(uint)*(byte *)(iVar6 + -5);
          uVar2 = uVar2 + 1) {
        uVar3 = uVar2 * 2;
        uVar4 = uStackY_e * 0xa0;
        iVar1 = ((int)uVar3 >> 0xf) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4) + -0x4800;
        *(undefined2 *)0xd7e = (undefined1 *)(uVar3 + uVar4);
        *(int *)0xd80 = iVar1;
        *(undefined1 *)(uVar3 + uVar4) = *(undefined1 *)(*(int *)(iVar6 + -4) + uStackY_c);
        *(int *)0xd7e = *(int *)0xd7e + 1;
        *(undefined1 *)*(undefined4 *)0xd7e = *(undefined1 *)(*(int *)(iVar6 + -2) + uStackY_c);
        uStackY_c = uStackY_c + 1;
      }
    }
  }
  *(int *)0xd76 = *(int *)0xd76 + -1;
  uVar5 = thunk_FUN_111d_1b1e(*(undefined2 *)0xd6c,*(int *)0xd76 * 10);
  *(undefined2 *)0xd6c = uVar5;
  return;
}
