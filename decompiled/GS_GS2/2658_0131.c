/* GS.GS2 2658:0131 undefined FUN_2658_0131(void) */
/* WARNING: Control flow encountered bad instruction data */

void FUN_2658_0131(void)

{
  char cVar1;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  cVar1 = FUN_2658_0008();
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar1;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar1;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
