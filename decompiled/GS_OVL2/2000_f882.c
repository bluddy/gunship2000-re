/* GS.GS2 2000:f882 undefined FUN_2000_f882(void) */
void __cdecl16far FUN_2000_f882(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar1 = 0xbf;
  func_0x00000eb0();
  if (*(int *)(*(char *)0xad1b * 2 + 0x4cfc) != 0) {
    iVar3 = 0;
    while (iVar3 < 7) {
      iVar4 = -0x72b;
      func_0x00000672(uVar1,iVar3);
      uVar1 = 0;
      iVar3 = iVar4 + 1;
    }
  }
  uVar6 = 0;
  uVar5 = 10000;
  uVar2 = func_0x00003b86(uVar1,0x2741,0,0x19,0);
  uVar1 = func_0x00003aec(0xbf,uVar2);
  *(undefined2 *)0xa268 = uVar1;
  uVar2 = func_0x00003b86(0xbf,uVar5,uVar6,0xff,0,10000,0);
  func_0x00003aec(0xbf,uVar2);
  return;
}
