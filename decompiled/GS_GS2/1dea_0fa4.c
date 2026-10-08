/* GS.GS2 1dea:0fa4 undefined FUN_1dea_0fa4(void) */
int __cdecl16far FUN_1dea_0fa4(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  if ((((*(byte *)0xbb9c & 1) != 0) && (*(int *)0xb980 == 2)) ||
     (((*(byte *)0xbb9c & 2) != 0 && (*(int *)0xb9be == 2)))) {
    for (uStack_4 = 1; uStack_4 < 6; uStack_4 = uStack_4 + 1) {
      iVar1 = uStack_4 * 0x122;
      if (*(char *)(iVar1 + -0x51cc) == '\x03') {
        if ((*(char *)(iVar1 + -0x51be) == *(char *)0xad1a) &&
           (*(char *)(iVar1 + -0x51c7) == *(char *)0xad11)) {
          if (param_1 != 0) {
            *(undefined1 *)(iVar1 + -0x51cc) = 1;
          }
          return uStack_4;
        }
      }
    }
  }
  return 0;
}
