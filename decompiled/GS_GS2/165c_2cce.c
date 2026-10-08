/* GS.GS2 165c:2cce undefined FUN_165c_2cce(void) */
/* WARNING: Removing unreachable block (ram,0x00019353) */

void __cdecl16far FUN_165c_2cce(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iStackY_c;
  int iStackY_a;
  int iVar3;
  
  FUN_10bf_02c0();
  *(undefined1 *)0xe278 = 0;
  cVar1 = *(char *)0xad1b;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iStackY_c = 0;
    }
    else if (cVar1 == '\x03') {
      iStackY_c = 1;
    }
    else if (*(char *)0xad08 < *(char *)0xad07) {
      iStackY_c = 2;
    }
    else {
      iStackY_c = 3;
    }
    iVar2 = FUN_239c_0008(100);
    iStackY_a = 0;
    iVar3 = 0;
    while ((iStackY_a < 7 &&
           (iVar3 = iVar3 + *(char *)(iStackY_a + iStackY_c * 7 + 0x244), iVar3 < iVar2))) {
      iStackY_a = iStackY_a + 1;
    }
    iStackY_a = iStackY_a + 1;
    *(int *)0xb980 = iStackY_a;
    if (iStackY_a < 4) {
      iStackY_c = 0;
    }
    else if (iStackY_a < 7) {
      iStackY_c = 1;
    }
    else {
      iStackY_c = 2;
    }
    do {
      iVar2 = FUN_239c_0008(100);
      iStackY_a = 0;
      iVar3 = 0;
      while ((iStackY_a < 7 &&
             (iVar3 = iVar3 + *(char *)(iStackY_a + iStackY_c * 7 + 0x260), iVar3 < iVar2))) {
        iStackY_a = iStackY_a + 1;
      }
      *(int *)0xb9be = iStackY_a + 1;
    } while (iStackY_a + 1 == *(int *)0xb980);
    *(undefined2 *)0xb9fc = 3;
    return;
  }
  *(undefined2 *)0xb980 = 3;
  *(undefined2 *)0xb9be = 3;
  return;
}
