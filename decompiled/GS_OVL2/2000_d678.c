/* GS.GS2 2000:d678 undefined FUN_2000_d678(void) */
void __cdecl16far FUN_2000_d678(void)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  int iVar7;
  
  func_0x00000eb0();
  func_0x0000da72(0xbf,0,0,0,0xe1,0x78,0);
  uVar4 = 0x1658;
  func_0x00016658(0xd02,0x8a4,0,0,0xdb,0x72,0x880,3,3);
  for (iVar6 = 2; -1 < iVar6; iVar6 = iVar6 + -1) {
    iVar1 = func_0x00015c8c(uVar4);
    for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      puVar2 = (undefined2 *)func_0x00015c98();
      iVar7 = (int)(CONCAT22(puVar2[1],*puVar2) >> 8);
      iVar3 = *(char *)0x9aab * iVar7;
      if ((*(char *)0x9a55 == '\x02') && (iVar6 == 2)) {
        iVar3 = iVar7;
      }
      if ((((char)((uint)puVar2[1] >> 8) == iVar6) && (*(char *)(iVar6 + -0x65a9) == (char)*puVar2))
         && (*(int *)(iVar6 * 2 + -0x65a0) == iVar3)) {
        *(undefined1 *)(iVar6 + -0x659a) = (char)iVar5;
      }
    }
    iVar1 = (int)*(char *)(iVar6 + -0x659a);
    iVar5 = *(int *)(iVar6 * 2 + -0x65a0);
    uVar4 = 0x1581;
    iVar3 = func_0x00015c98();
    if ((0 < iVar5) && (-1 < *(char *)(iVar3 + 4))) {
      iVar6 = 0x1581;
      uVar4 = 0xb63;
      func_0x0000b70a(0x1581,3,3,3,iVar1);
    }
  }
  func_0x0000d116(uVar4,0x880,2,2,0xdd,0x74,*(undefined2 *)0x9ba6);
  return;
}
