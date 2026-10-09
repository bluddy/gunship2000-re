/* GS.GS2 3000:87f4 undefined FUN_3000_87f4(void) */
void __cdecl16far FUN_3000_87f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  func_0x00000eb0();
  iVar1 = *(int *)0xc37a + -0x24;
  iVar2 = *(int *)0xc378 + -0x30;
  iVar3 = FUN_3000_118e(param_1,param_2,*(int *)0xc364 + 0x18,*(int *)0xc366 + 0x12);
  if ((iVar3 == 0) && (*(int *)0xc022 != 0)) {
    if (param_1 < *(int *)0xc364 + 0x18) {
      func_0x0000582f(0xbf);
      uVar4 = 0x886a;
      func_0x00005b29(0xbf,0xbc96);
      func_0x000058f7(0xbf);
      func_0x0000f246(0xbf,uVar4,param_2,0);
    }
    else if (param_2 < iVar2 + *(int *)0xc366) {
      func_0x0000582f(0xbf);
      uVar4 = 0x88ad;
      func_0x00005ac9(0xbf,0xbc9a);
      func_0x000058f7(0xbf);
      func_0x0000f246(0xbf,param_1,uVar4,0);
    }
    else if ((*(int *)0xc364 - iVar1) + *(int *)0xc378 < param_1) {
      func_0x0000582f(0xbf);
      uVar4 = 0x88f2;
      func_0x00005b29(0xbf,0xbc96);
      func_0x000058f7(0xbf);
      func_0x0000f246(0xbf,uVar4,param_2,0);
    }
    else if ((*(int *)0xc37a - iVar2) + *(int *)0xc366 < param_2) {
      func_0x0000582f(0xbf);
      uVar4 = 0x8936;
      func_0x00005ac9(0xbf,0xbc9a);
      func_0x000058f7(0xbf);
      func_0x0000f246(0xbf,param_1,uVar4,0);
    }
    FUN_3000_1abe();
    return;
  }
  *(undefined2 *)0xc022 = 0xffff;
  return;
}
