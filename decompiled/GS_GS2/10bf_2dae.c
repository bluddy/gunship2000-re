/* GS.GS2 10bf:2dae undefined FUN_10bf_2dae(void) */
int __cdecl16far FUN_10bf_2dae(byte param_1)

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
