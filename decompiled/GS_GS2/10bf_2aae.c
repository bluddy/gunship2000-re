/* GS.GS2 10bf:2aae undefined FUN_10bf_2aae(void) */
int __cdecl16far FUN_10bf_2aae(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined2 unaff_DS;
  
  bVar3 = 0xff;
  do {
    do {
      if (bVar3 == 0) goto LAB_10bf_2aeb;
      pbVar1 = param_2;
      param_2 = param_2 + 1;
      bVar3 = *pbVar1;
      pbVar1 = param_1;
      param_1 = param_1 + 1;
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  bVar3 = (bVar3 < bVar2) * -2 + 1;
LAB_10bf_2aeb:
  return (int)(char)bVar3;
}
