/* SETUP.GS2 111d:1d2a undefined FUN_111d_1d2a(void) */
int __cdecl16far FUN_111d_1d2a(byte param_1)

{
  code *pcVar1;
  int iVar2;
  char extraout_DL;
  bool bVar3;
  
  bVar3 = (param_1 & 0xf) == 0;
  pcVar1 = (code *)swi(0x16);
  iVar2 = (*pcVar1)();
  if ((bVar3) && (extraout_DL == '\x01')) {
    iVar2 = 0;
  }
  else if ((extraout_DL != '\x02') && (iVar2 == 0)) {
    iVar2 = -1;
  }
  return iVar2;
}
