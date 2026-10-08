/* GS.GS2 10bf:22fc undefined FUN_10bf_22fc(void) */
int __cdecl16far FUN_10bf_22fc(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_10bf_231c;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar1;
LAB_10bf_231c:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}
