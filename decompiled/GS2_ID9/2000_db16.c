/* GS2.GS2 2000:db16 undefined FUN_2000_db16(void) */
void __cdecl16far
FUN_2000_db16(int param_1,int param_2,int param_3,int param_4,byte param_5,undefined2 param_6)

{
  byte *pbVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  
  if (param_4 != 0) {
    uVar2 = *(undefined2 *)0x18cc;
    pbVar5 = (byte *)(param_1 + param_2 * 0x100 + ((uint)(param_2 * 0x100) >> 2));
    iVar4 = param_3;
    pbVar6 = pbVar5;
    do {
      do {
        bVar3 = *pbVar5;
        if (((bVar3 ^ param_5) & 0xf0) == 0) {
          bVar3 = bVar3 & (byte)((uint)param_6 >> 8) | (byte)param_6;
        }
        pbVar1 = pbVar5;
        pbVar5 = pbVar5 + 1;
        *pbVar1 = bVar3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar5 = pbVar6 + 0x140;
      param_4 = param_4 + -1;
      iVar4 = param_3;
      pbVar6 = pbVar5;
    } while (param_4 != 0);
  }
  return;
}
