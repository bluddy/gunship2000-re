/* GS.GS2 2581:0422 undefined FUN_2581_0422(void) */
undefined2 __cdecl16far FUN_2581_0422(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  do {
    if (*(int *)0x9680 <= iVar2) {
      return 0;
    }
    iVar1 = (int)*(char *)(iVar2 * 5 + -0x6a7c);
    if (iVar1 == param_1) {
      iVar1 = FUN_2634_0204(iVar1);
      if (*(char *)((int)*(undefined4 *)0xbc38 + iVar1 * 0xd6 + 1) != '\0') {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
