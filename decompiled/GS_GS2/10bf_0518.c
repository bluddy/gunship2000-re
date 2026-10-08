/* GS.GS2 10bf:0518 undefined FUN_10bf_0518(void) */
int * __stdcall16far FUN_10bf_0518(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)0x7288;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar4;
    if ((*piVar1 == param_1) || (piVar2 = (int *)(*piVar1 + 1), piVar2 == (int *)0x0)) {
      return piVar2;
    }
    iVar3 = -1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      piVar1 = piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}
