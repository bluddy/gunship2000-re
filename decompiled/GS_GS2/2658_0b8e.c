/* GS.GS2 2658:0b8e undefined FUN_2658_0b8e(void) */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near FUN_2658_0b8e(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar6;
  undefined1 *puVar7;
  undefined2 *puVar9;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar8;
  
  if (*(char *)0x9c53 != '\0') {
    in_CX = in_CX + 1 >> 1;
  }
  *(uint *)0x9c46 = in_CX;
  uVar6 = *(undefined2 *)0x9c4e;
  LOCK();
  puVar7 = (undefined1 *)*(undefined2 *)0x9c44;
  *(undefined2 *)0x9c44 = register0x00000010;
  UNLOCK();
  do {
    if (*(char *)0x9c48 == '\0') {
      puVar8 = (undefined2 *)(puVar7 + -2);
      puVar7 = puVar7 + -2;
      *puVar8 = 0x712e;
      cVar4 = FUN_2658_0c00();
      if (cVar4 == -0x70) {
        puVar9 = (undefined2 *)(puVar7 + -2);
        puVar7 = puVar7 + -2;
        *puVar9 = 0x713b;
        cVar4 = FUN_2658_0c00();
        uVar6 = extraout_DX_00;
        if (cVar4 != '\0') {
          *(char *)0x9c48 = cVar4 + -1;
          goto LAB_2658_0bcc;
        }
        cVar4 = -0x70;
        *(undefined1 *)0x9c49 = 0x90;
      }
      else {
        *(char *)0x9c49 = cVar4;
        uVar6 = extraout_DX;
      }
    }
    else {
LAB_2658_0bcc:
      cVar4 = *(char *)0x9c49;
      *(char *)0x9c48 = *(char *)0x9c48 + -1;
    }
    if (*(char *)0x9c53 == '\0') {
      pcVar3 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *pcVar3 = cVar4;
      piVar1 = (int *)0x9c46;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    else {
      uVar5 = CONCAT11(cVar4,cVar4) & 0xff0f;
      pcVar3 = unaff_DI;
      unaff_DI = unaff_DI + 2;
      *(uint *)pcVar3 = CONCAT11((byte)(uVar5 >> 0xc),(char)uVar5);
      piVar1 = (int *)0x9c46;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    if (iVar2 == 0) {
      *(undefined2 *)0x9c4e = uVar6;
      LOCK();
      *(undefined1 **)0x9c44 = puVar7;
      UNLOCK();
      return;
    }
  } while( true );
}
