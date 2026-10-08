/* GS2.GS2 137f:07cf undefined FUN_137f_07cf(void) */
undefined2 __cdecl16near FUN_137f_07cf(void)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_SI;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  
  piVar2 = (int *)*(undefined4 *)(unaff_SI + 0x18);
  uVar7 = (undefined2)((ulong)piVar2 >> 0x10);
  iVar4 = *piVar2;
  piVar5 = (int *)piVar2 + 1;
  puVar6 = (undefined1 *)*(undefined2 *)0x10c;
  do {
    lVar1 = (long)*(int *)(unaff_SI + 0x22) * (long)piVar5[2];
    uVar3 = (uint)lVar1;
    lVar1 = (long)*(int *)(unaff_SI + 0x1e) * (long)*piVar5 +
            (long)*(int *)(unaff_SI + 0x20) * (long)piVar5[1] +
            CONCAT22((int)((ulong)lVar1 >> 0x10) + piVar5[4] + (uint)CARRY2(uVar3,piVar5[3]),
                     uVar3 + piVar5[3]);
    *puVar6 = (char)((uint)((int)((ulong)lVar1 >> 0x10) + 2) >> 8);
    puVar6 = puVar6 + 1;
    piVar5 = piVar5 + 5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return (int)lVar1;
}
