/* SETUP.GS2 12f5:000c undefined FUN_12f5_000c(void) */
undefined2 __cdecl16far FUN_12f5_000c(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  bVar1 = in(0x201);
  bVar1 = (byte)~bVar1 >> 4 & *(byte *)0x1d30;
  *(uint *)0x1d5c = (uint)bVar1;
  iVar3 = 0;
  iVar2 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = 30000;
  out(0x201,bVar1);
  do {
    bVar1 = in(0x201);
    bVar1 = bVar1 & *(byte *)0x1d30;
    if (bVar1 == 0) break;
    iVar3 = iVar3 + (uint)(bVar1 & 1);
    iVar2 = iVar2 + (uint)(bVar1 >> 1 & 1);
    iVar6 = iVar6 + (uint)(bVar1 >> 2 & 1);
    iVar5 = iVar5 + (uint)(bVar1 >> 3 & 1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)0x1f6a = iVar3;
  *(int *)0x1f6c = iVar2;
  *(int *)0x1f78 = iVar6;
  *(int *)0x1f7a = iVar5;
  return *(undefined2 *)0x1d5c;
}
