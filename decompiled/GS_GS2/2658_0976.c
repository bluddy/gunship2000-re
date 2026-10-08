/* GS.GS2 2658:0976 undefined FUN_2658_0976(void) */
void __cdecl16far FUN_2658_0976(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 extraout_DX_00;
  undefined2 in_BX;
  uint *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 unaff_DS;
  int *piVar9;
  
  thunk_EXT_FUN_0000_0000(0x2658,0);
  uVar5 = extraout_DX;
  while( true ) {
    piVar8 = (int *)*(undefined2 *)0xc86c;
    if ((int *)*(undefined2 *)0x64c8 <= piVar8) {
      (*(code *)*(undefined2 *)0xc528)(0x2658,uVar5,in_CX,in_BX);
      piVar8 = (int *)*(undefined2 *)0xc86c;
    }
    iVar1 = *piVar8;
    *(int *)0xc86c = (int)(piVar8 + 1);
    if ((char)iVar1 == 'X') break;
    piVar8 = (int *)0xc86e;
    if (iVar1 == 0x304d) {
      if (param_1 == (int *)0x0) {
        piVar8 = (int *)0xc870;
      }
      else if (param_1 != (int *)0x1) {
        piVar8 = param_1;
      }
    }
    *piVar8 = iVar1;
    puVar6 = (uint *)*(undefined2 *)0xc86c;
    piVar9 = piVar8;
    if ((uint *)*(undefined2 *)0x64c8 <= puVar6) {
      (*(code *)*(undefined2 *)0xc528)(0x2658,uVar5,in_CX);
      puVar6 = (uint *)*(undefined2 *)0xc86c;
    }
    in_CX = *puVar6;
    *(int *)0xc86c = (int)(puVar6 + 1);
    piVar4 = piVar8 + 2;
    piVar8[1] = in_CX;
    for (in_CX = in_CX >> 1; in_CX != 0; in_CX = in_CX - 1) {
      piVar8 = (int *)*(undefined2 *)0xc86c;
      if ((int *)*(undefined2 *)0x64c8 <= piVar8) {
        (*(code *)*(undefined2 *)0xc528)(0x2658);
        piVar8 = (int *)*(undefined2 *)0xc86c;
      }
      iVar1 = *piVar8;
      *(int *)0xc86c = (int)(piVar8 + 1);
      piVar3 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar3 = iVar1;
    }
    if (piVar9 == (int *)0xc86e) {
      thunk_EXT_FUN_0000_0000(0x2658,0xc86e);
      uVar5 = extraout_DX_00;
    }
  }
  *(byte *)0x9c53 = (byte)((uint)iVar1 >> 8) & 1;
  puVar7 = (undefined2 *)*(undefined2 *)0xc86c;
  if ((undefined2 *)*(undefined2 *)0x64c8 <= puVar7) {
    (*(code *)*(undefined2 *)0xc528)(0x2658,uVar5,in_CX,in_BX);
    puVar7 = (undefined2 *)*(undefined2 *)0xc86c;
  }
  uVar2 = *puVar7;
  *(int *)0xc86c = (int)(puVar7 + 1);
  *(undefined2 *)0x9c42 = uVar2;
  puVar7 = (undefined2 *)*(undefined2 *)0xc86c;
  if ((undefined2 *)*(undefined2 *)0x64c8 <= puVar7) {
    (*(code *)*(undefined2 *)0xc528)(0x2658,uVar5,in_CX,in_BX);
    puVar7 = (undefined2 *)*(undefined2 *)0xc86c;
  }
  uVar2 = *puVar7;
  *(int *)0xc86c = (int)(puVar7 + 1);
  *(undefined2 *)0x9c3e = uVar2;
  puVar7 = (undefined2 *)*(undefined2 *)0xc86c;
  if ((undefined2 *)*(undefined2 *)0x64c8 <= puVar7) {
    (*(code *)*(undefined2 *)0xc528)(0x2658,uVar5,in_CX,in_BX);
    puVar7 = (undefined2 *)*(undefined2 *)0xc86c;
  }
  uVar5 = *puVar7;
  *(int *)0xc86c = (int)(puVar7 + 1);
  *(undefined2 *)0x9c40 = uVar5;
  FUN_2658_0b0f();
  return;
}
