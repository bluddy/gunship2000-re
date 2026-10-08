/* SETUP.GS2 111d:030e undefined FUN_111d_030e(void) */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_111d_030e(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x9b0 = in_stack_00000000;
  *(undefined2 *)0x9b2 = param_1;
  pcVar5 = (code *)swi(0x21);
  uVar6 = (*pcVar5)();
  *(undefined2 *)0x978 = uVar6;
  uVar9 = 1;
  if ((char)uVar6 != '\x02') {
    uVar6 = *(undefined2 *)0x2c;
    *(undefined2 *)0x99b = uVar6;
    iVar7 = -0x8000;
    pcVar12 = (char *)0x0;
LAB_111d_0339:
    do {
      pcVar13 = pcVar12;
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        pcVar3 = pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar12;
        if (*pcVar3 != '\0') goto LAB_111d_0339;
      }
      pcVar12 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    pcVar13 = pcVar13 + 3;
    *(undefined2 *)0x999 = pcVar13;
    uVar9 = 0xffff;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar3 != '\0');
    uVar9 = ~uVar9;
  }
  iVar7 = 1;
  pcVar12 = (char *)0x81;
  uVar6 = *(undefined2 *)0x976;
LAB_111d_0357:
  do {
    do {
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    iVar7 = iVar7 + 1;
    do {
      pcVar12 = pcVar12 + -1;
LAB_111d_036a:
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar3;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_111d_0357;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_111d_03a3:
        do {
          while( true ) {
            while( true ) {
              pcVar3 = pcVar12;
              pcVar12 = pcVar12 + 1;
              cVar2 = *pcVar3;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_111d_03d3;
              if (cVar2 == '\"') goto LAB_111d_036a;
              if (cVar2 == '\\') break;
              uVar9 = uVar9 + 1;
            }
            uVar8 = 0;
            do {
              pcVar13 = pcVar12;
              uVar8 = uVar8 + 1;
              pcVar12 = pcVar13 + 1;
            } while (*pcVar13 == '\\');
            if (*pcVar13 == '\"') break;
            uVar9 = uVar9 + uVar8;
            pcVar12 = pcVar13;
          }
          uVar9 = uVar9 + (uVar8 >> 1) + (uint)((uVar8 & 1) != 0);
        } while ((uVar8 & 1) != 0);
        goto LAB_111d_036a;
      }
      if (cVar2 != '\\') {
        uVar9 = uVar9 + 1;
        goto LAB_111d_036a;
      }
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        pcVar3 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar3 == '\\');
      if (*pcVar3 == '\"') {
        uVar9 = uVar9 + (uVar8 >> 1) + (uint)((uVar8 & 1) != 0);
        if ((uVar8 & 1) == 0) goto LAB_111d_03a3;
        goto LAB_111d_036a;
      }
      uVar9 = uVar9 + uVar8;
    } while( true );
  }
LAB_111d_03d3:
  *(int *)0x993 = iVar7;
  iVar14 = (iVar7 + 1) * 2;
  iVar7 = -(uVar9 + iVar7 + iVar14 + 1 & 0xfffe);
  *(undefined1 **)0x995 = &stack0x0008 + iVar7;
  pcVar13 = &stack0x0008 + iVar14 + iVar7;
  *(undefined2 *)((int)&stack0x0006 + iVar7) = unaff_SS;
  uVar6 = *(undefined2 *)((int)&stack0x0006 + iVar7);
  *(char **)(&stack0x0008 + iVar7) = pcVar13;
  puVar10 = (undefined2 *)(&stack0x000a + iVar7);
  pcVar3 = (char *)*(undefined4 *)0x999;
  pcVar12 = (char *)pcVar3;
  do {
    pcVar1 = pcVar12;
    pcVar12 = pcVar12 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar13;
    pcVar13 = pcVar13 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  uVar4 = *(undefined2 *)0x976;
  pcVar12 = (char *)0x81;
LAB_111d_040d:
  do {
    do {
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_111d_0496:
    *(undefined2 *)((int)&stack0x0006 + iVar7) = unaff_SS;
    uVar6 = *(undefined2 *)((int)&stack0x0006 + iVar7);
    *puVar10 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x9b0)();
    return;
  }
  *puVar10 = pcVar13;
  puVar10 = puVar10 + 1;
  do {
    pcVar12 = pcVar12 + -1;
LAB_111d_0424:
    pcVar3 = pcVar12;
    pcVar12 = pcVar12 + 1;
    cVar2 = *pcVar3;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = '\0';
      goto LAB_111d_040d;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_111d_0493:
      *pcVar13 = '\0';
      goto LAB_111d_0496;
    }
    pcVar11 = pcVar12;
    if (cVar2 == '\"') {
LAB_111d_0460:
      while( true ) {
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_111d_0493;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar9 = 0;
          do {
            pcVar11 = pcVar12;
            uVar9 = uVar9 + 1;
            pcVar12 = pcVar11 + 1;
          } while (*pcVar11 == '\\');
          if (*pcVar11 == '\"') {
            for (uVar8 = uVar9 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
              pcVar3 = pcVar13;
              pcVar13 = pcVar13 + 1;
              *pcVar3 = '\\';
            }
            if ((uVar9 & 1) == 0) break;
            pcVar3 = pcVar13;
            pcVar13 = pcVar13 + 1;
            *pcVar3 = '\"';
            pcVar11 = pcVar12;
          }
          else {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              pcVar3 = pcVar13;
              pcVar13 = pcVar13 + 1;
              *pcVar3 = '\\';
            }
          }
        }
        else {
          pcVar3 = pcVar13;
          pcVar13 = pcVar13 + 1;
          *pcVar3 = cVar2;
          pcVar11 = pcVar12;
        }
      }
      goto LAB_111d_0424;
    }
    if (cVar2 != '\\') {
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = cVar2;
      goto LAB_111d_0424;
    }
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar3 == '\\');
    if (*pcVar3 == '\"') {
      for (uVar8 = uVar9 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        pcVar3 = pcVar13;
        pcVar13 = pcVar13 + 1;
        *pcVar3 = '\\';
      }
      pcVar11 = pcVar12;
      if ((uVar9 & 1) == 0) goto LAB_111d_0460;
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = '\"';
      goto LAB_111d_0424;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = '\\';
    }
  } while( true );
}
