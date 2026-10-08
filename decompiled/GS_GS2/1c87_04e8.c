/* GS.GS2 1c87:04e8 undefined FUN_1c87_04e8(void) */
int __cdecl16far FUN_1c87_04e8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  iVar5 = 0;
  iVar6 = 0;
  uVar4 = 0x10bf;
  while( true ) {
    cVar1 = *(char *)(iVar5 + param_1);
    iVar3 = CONCAT11((char)((uint)iVar2 >> 8),cVar1);
    if (cVar1 == '\0') break;
    iVar5 = *(int *)0x8570;
    iVar2 = thunk_EXT_FUN_0000_0000(uVar4,iVar5,iVar3,cVar1);
    iVar6 = iVar3 + iVar2;
    iVar5 = iVar5 + 1;
    uVar4 = 0x2658;
  }
  return iVar6;
}
