/* GS.GS2 2351:0408 undefined FUN_2351_0408(void) */
void __cdecl16far FUN_2351_0408(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = (*(int *)0x9500 - *(int *)0x94fc) + 1;
  iVar2 = (*(int *)0x94fe - *(int *)0x94fa) + 1;
  if ((0 < iVar2) && (0 < iVar1)) {
    thunk_EXT_FUN_0000_0000
              (0x10bf,0x880,*(undefined2 *)0x94fa,*(undefined2 *)0x94fc,iVar2,iVar1,0x86e,
               *(undefined2 *)0x94fa,*(undefined2 *)0x94fc);
  }
  return;
}
