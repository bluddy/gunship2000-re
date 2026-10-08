/* GS.GS2 1ffa:000e undefined FUN_1ffa_000e(void) */
undefined2 __cdecl16far FUN_1ffa_000e(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  bVar1 = in(0x201);
  bVar1 = (byte)~bVar1 >> 4 & *(byte *)0xbc58;
  *(uint *)0xbc4c = (uint)bVar1;
  iVar3 = 0;
  iVar2 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = 30000;
  out(0x201,bVar1);
  do {
    bVar1 = in(0x201);
    bVar1 = bVar1 & *(byte *)0xbc58;
    if (bVar1 == 0) break;
    iVar3 = iVar3 + (uint)(bVar1 & 1);
    iVar2 = iVar2 + (uint)(bVar1 >> 1 & 1);
    iVar6 = iVar6 + (uint)(bVar1 >> 2 & 1);
    iVar5 = iVar5 + (uint)(bVar1 >> 3 & 1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)0xbc4e = iVar3;
  *(int *)0xbc50 = iVar2;
  *(int *)0xbc54 = iVar6;
  *(int *)0xbc56 = iVar5;
  return *(undefined2 *)0xbc4c;
}
