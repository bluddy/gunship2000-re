/* GS.GS2 2163:15a4 undefined FUN_2163_15a4(void) */
void __cdecl16far FUN_2163_15a4(char *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  int iVar6;
  
  FUN_10bf_02c0();
  cVar1 = *param_1;
  FUN_10bf_2c3a(param_1,0,0x24);
  iVar3 = FUN_2581_039c((int)cVar1);
  *param_1 = cVar1;
  iVar5 = iVar3 * 0xfc;
  param_1[1] = *(char *)((int)*(undefined4 *)0xb83a + iVar5 + 1);
  param_1[0x23] = '\0';
  param_1[2] = -1;
  if (-1 < iVar3) {
    param_1[2] = *(char *)((int)*(undefined4 *)0xb83a + iVar5 + 3);
    uVar2 = *(undefined2 *)0xb83c;
    FUN_10bf_2efc();
    iVar6 = 0x2c87;
    iVar4 = FUN_10bf_2cc8(*(char *)0xa26a + -0x2d);
    iVar4 = *(char *)0x2588 * iVar4;
    if ('F' < *(char *)0xa26a) {
      iVar4 = iVar4 + (int)*(char *)((int)*(undefined4 *)0xb83a + iVar5 + 7) *
                      (*(char *)0xa26a + -0x46);
    }
    if (*(char *)0xa26a < '-') {
      iVar4 = iVar4 + (int)*(char *)((int)*(undefined4 *)0xb83a + iVar3 * 0xfc + 7) *
                      (0x2d - *(char *)0xa26a);
    }
    if (*(char *)0xa26a < '\x1e') {
      iVar4 = iVar4 + (int)*(char *)((int)*(undefined4 *)0xb83a + iVar3 * 0xfc + 7) *
                      (0x1e - *(char *)0xa26a) * 2;
    }
    *(int *)(param_1 + 0x17) = iVar6 - iVar4;
    uVar2 = *(undefined2 *)((int)*(undefined4 *)0xb83a + iVar3 * 0xfc + 0xc);
    *(undefined2 *)(param_1 + 0x1b) = uVar2;
    *(undefined2 *)(param_1 + 0x1d) = uVar2;
  }
  iVar3 = FUN_2634_0204((int)param_1[2]);
  if (-1 < iVar3) {
    *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)((int)*(undefined4 *)0xbc38 + iVar3 * 0xd6 + 2)
    ;
  }
  (param_1 + 0x1f)[0] = '\x1e';
  (param_1 + 0x1f)[1] = '\0';
  (param_1 + 0x21)[0] = '\x1e';
  (param_1 + 0x21)[1] = '\0';
  FUN_2163_173a(param_1,iVar3);
  return;
}
