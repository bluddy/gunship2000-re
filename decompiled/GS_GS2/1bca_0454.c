/* GS.GS2 1bca:0454 undefined FUN_1bca_0454(void) */
void __cdecl16far FUN_1bca_0454(void)

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
  
  FUN_10bf_02c0();
  iVar6 = *(int *)0x8244 * 10 + *(int *)0x823a;
  if (*(int *)(iVar6 + -10) != 0) {
    uStackY_c = 0;
    for (uStackY_e = (uint)*(byte *)(iVar6 + -8); (int)uStackY_e <= (int)(uint)*(byte *)(iVar6 + -7)
        ; uStackY_e = uStackY_e + 1) {
      for (uVar2 = (uint)*(byte *)(iVar6 + -6); (int)uVar2 <= (int)(uint)*(byte *)(iVar6 + -5);
          uVar2 = uVar2 + 1) {
        uVar3 = uVar2 * 2;
        uVar4 = uStackY_e * 0xa0;
        iVar1 = ((int)uVar3 >> 0xf) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4) + -0x4800;
        *(undefined2 *)0x824c = (undefined1 *)(uVar3 + uVar4);
        *(int *)0x824e = iVar1;
        *(undefined1 *)(uVar3 + uVar4) = *(undefined1 *)(*(int *)(iVar6 + -4) + uStackY_c);
        *(int *)0x824c = *(int *)0x824c + 1;
        *(undefined1 *)*(undefined4 *)0x824c = *(undefined1 *)(*(int *)(iVar6 + -2) + uStackY_c);
        uStackY_c = uStackY_c + 1;
      }
    }
  }
  *(int *)0x8244 = *(int *)0x8244 + -1;
  uVar5 = thunk_FUN_10bf_27fe(*(undefined2 *)0x823a,*(int *)0x8244 * 10);
  *(undefined2 *)0x823a = uVar5;
  return;
}
