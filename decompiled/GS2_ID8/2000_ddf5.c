/* GS2.GS2 2000:ddf5 undefined FUN_2000_ddf5(void) */
byte __cdecl16far FUN_2000_ddf5(uint param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x18cc;
  pbVar3 = (byte *)((param_1 >> 3) + param_2 * 0x28);
  out(0x3ce,5);
  bVar2 = 0x80 >> ((byte)param_1 & 7);
  out(0x3ce,0x304);
  out(0x3ce,0x204);
  out(0x3ce,0x104);
  out(0x3ce,4);
  return ((('\0' < (char)(*pbVar3 & bVar2)) << 1 | '\0' < (char)(*pbVar3 & bVar2)) << 1 |
         '\0' < (char)(*pbVar3 & bVar2)) << 1 | '\0' < (char)(*pbVar3 & bVar2);
}
