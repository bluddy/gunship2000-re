/* GS.GS2 2351:0258 undefined FUN_2351_0258(void) */
void __cdecl16far FUN_2351_0258(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (((param_1 != 0) && (*(int *)0x9508 != 0)) &&
     (*(int *)0x9506 = *(int *)0x9506 + 1, 4 < *(int *)0x9506)) {
    *(undefined2 *)0x9506 = 0;
    iVar3 = *(int *)0x9508;
    *(int *)0x950a = *(int *)0x950a + 1;
    if (iVar3 <= *(int *)0x950a) {
      *(undefined2 *)0x950a = 0;
    }
  }
  if (*(int *)0x9502 < 0x131) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x140 - *(int *)0x9502;
  }
  *(int *)0x9524 = iVar3;
  if (*(int *)0x9504 < 0xb0) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0xbf - *(int *)0x9504;
  }
  *(int *)0x9512 = iVar3;
  if (*(int *)0x9502 < 0) {
    iVar3 = -*(int *)0x9502;
  }
  else {
    iVar3 = 0;
  }
  *(int *)0x9526 = iVar3;
  if (*(int *)0x9504 < 0) {
    iVar3 = -*(int *)0x9504;
  }
  else {
    iVar3 = 0;
  }
  *(int *)0x9528 = iVar3;
  *(int *)0x9512 = *(int *)0x9512 - iVar3;
  uVar1 = *(undefined2 *)0x9512;
  iVar2 = *(int *)0x9526;
  *(int *)0x9524 = *(int *)0x9524 - iVar2;
  thunk_EXT_FUN_0000_0000
            (0x10bf,0x880,iVar2 + *(int *)0x9502,iVar3 + *(int *)0x9504,*(undefined2 *)0x9524,uVar1,
             0x892,0x130,0xb8);
  thunk_EXT_FUN_0000_0000
            (0x2658,0x880,*(int *)0x9502 + *(int *)0x9526,*(int *)0x9504 + *(int *)0x9528,
             *(undefined2 *)0x9524,*(undefined2 *)0x9512,0x892,*(int *)0x9526 + 0x130,
             *(int *)0x9528 + 0xa8);
  FUN_2658_0131(0x2658,0x892,0x130,0xa8,*(undefined2 *)(*(int *)0x950a * 2 + -0x6aec));
  thunk_EXT_FUN_0000_0000
            (0x2658,0x892,*(int *)0x9526 + 0x130,*(int *)0x9528 + 0xa8,*(undefined2 *)0x9524,
             *(undefined2 *)0x9512,0x880,*(int *)0x9502 + *(int *)0x9526,
             *(int *)0x9504 + *(int *)0x9528);
  iVar4 = *(int *)0x9502 + *(int *)0x9524 + *(int *)0x9526 + -1;
  iVar5 = *(int *)0x9504 + *(int *)0x9512 + *(int *)0x9528 + -1;
  iVar3 = *(int *)0x9504;
  iVar2 = *(int *)0x9528;
  if (*(int *)0x9502 + *(int *)0x9526 < *(int *)0x94fa) {
    *(int *)0x94fa = *(int *)0x9502 + *(int *)0x9526;
  }
  if (*(int *)0x94fe < iVar4) {
    *(int *)0x94fe = iVar4;
  }
  if (iVar3 + iVar2 < *(int *)0x94fc) {
    *(int *)0x94fc = iVar3 + iVar2;
  }
  if (*(int *)0x9500 < iVar5) {
    *(int *)0x9500 = iVar5;
  }
  return;
}
