/* SETUP.GS2 111d:0580 undefined FUN_111d_0580(void) */
void __cdecl16near FUN_111d_0580(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0xb74;
  *(undefined2 *)0xb74 = 0x400;
  UNLOCK();
  iVar2 = thunk_FUN_111d_1553();
  *(undefined2 *)0xb74 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_111d_00f1();
  return;
}
