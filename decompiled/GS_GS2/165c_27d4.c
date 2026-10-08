/* GS.GS2 165c:27d4 undefined FUN_165c_27d4(void) */
void __cdecl16far FUN_165c_27d4(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  char *pcStackY_c;
  char *pcVar3;
  
  FUN_10bf_02c0();
  do {
    iVar1 = FUN_10bf_2234(param_1);
    if (iVar1 <= param_2) {
      return;
    }
    pcStackY_c = (char *)0x0;
    while( true ) {
      if (3 < (int)pcStackY_c) goto LAB_165c_286c;
      iVar1 = param_1;
      pcVar2 = (char *)FUN_10bf_2b66(param_1,*(undefined2 *)((int)pcStackY_c * 2 + 0x222));
      if (pcVar2 != (char *)0x0) break;
      pcStackY_c = (char *)(iVar1 + 1);
    }
    pcVar3 = (char *)*(undefined2 *)((int)pcStackY_c * 2 + 0x22a);
    pcStackY_c = pcVar2;
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
      *pcStackY_c = *pcVar3;
      pcStackY_c = pcStackY_c + 1;
    }
    iVar1 = FUN_10bf_2234(*(undefined2 *)(iVar1 * 2 + 0x222),pcVar2);
    FUN_10bf_21d6(pcStackY_c,pcVar2 + iVar1);
LAB_165c_286c:
    if (3 < (int)pcStackY_c) {
      *(undefined1 *)(param_2 + param_1) = 0;
      return;
    }
  } while( true );
}
