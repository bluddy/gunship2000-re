/* GS.GS2 10bf:049a undefined FUN_10bf_049a(void) */
void __cdecl16far FUN_10bf_049a(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  
  iVar5 = *(int *)0x2c;
  iVar8 = 0;
  pcVar11 = (char *)0x0;
  iVar7 = -1;
  if (iVar5 != 0) {
    cVar4 = *(char *)0x0;
    while (cVar4 != '\0') {
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      iVar8 = iVar8 + 1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar2;
    }
  }
  pcVar11 = (char *)FUN_10bf_057a();
  puVar6 = (undefined2 *)FUN_10bf_057a();
  *(undefined2 *)0x688b = puVar6;
  piVar9 = (int *)0x0;
  do {
    if (iVar8 == 0) {
      *puVar6 = 0;
      return;
    }
    bVar13 = *piVar9 == *(int *)0x6848;
    if (bVar13) {
      piVar12 = (int *)0x6848;
      iVar7 = 6;
      piVar10 = piVar9;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        piVar3 = piVar12;
        piVar12 = piVar12 + 1;
        piVar1 = piVar10;
        piVar10 = piVar10 + 1;
        bVar13 = *piVar1 == *piVar3;
      } while (bVar13);
      if (!bVar13) goto LAB_10bf_0504;
    }
    else {
LAB_10bf_0504:
      *puVar6 = pcVar11;
      puVar6 = puVar6 + 1;
    }
    do {
      piVar1 = piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
      iVar7 = *piVar1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar2 = (char)iVar7;
    } while ((char)iVar7 != '\0');
    iVar8 = iVar8 + -1;
  } while( true );
}
