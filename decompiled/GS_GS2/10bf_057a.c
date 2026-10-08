/* GS.GS2 10bf:057a undefined FUN_10bf_057a(void) */
void __cdecl16near FUN_10bf_057a(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0x6a76;
  *(undefined2 *)0x6a76 = 0x400;
  UNLOCK();
  iVar2 = thunk_FUN_10bf_1ff3();
  *(undefined2 *)0x6a76 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_10bf_00eb();
  return;
}
