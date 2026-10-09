/* GS.GS2 2000:b2ec undefined FUN_2000_b2ec(void) */
void __cdecl16far FUN_2000_b2ec(int param_1,int param_2,int param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int aiStack_c [4];
  
  aiStack_c[3] = 0xb2f7;
  func_0x00000eb0();
  aiStack_c[0] = 0x4a;
  aiStack_c[1] = 0x25;
  aiStack_c[3] = 0xbf;
  aiStack_c[2] = 0xb316;
  func_0x00021070();
  if (param_5 == 0) {
    aiStack_c[3] = 0x20f4;
    uVar2 = 0xbf;
    aiStack_c[2] = 0xb33d;
    iVar1 = func_0x00003920();
    param_2 = param_2 + (iVar1 % 3) * 8;
  }
  else {
    aiStack_c[3] = 0x20f4;
    aiStack_c[2] = 0xb321;
    iVar1 = func_0x00003920();
    aiStack_c[3] = aiStack_c[iVar1 % 5];
    aiStack_c[2] = 0xbf;
    uVar2 = 0xdea;
    aiStack_c[1] = 0xb333;
    func_0x0000edda();
  }
  aiStack_c[3] = 0x96;
  aiStack_c[2] = param_1;
  aiStack_c[1] = 0x892;
  aiStack_c[0] = 7;
  uVar3 = 0x1658;
  func_0x00016658(uVar2,0x86e,3,0x93,0x96);
  for (iVar1 = 0; param_3 * 2 - iVar1 != 0 && iVar1 <= param_3 * 2; iVar1 = iVar1 + 1) {
    aiStack_c[3] = 0x93;
    aiStack_c[2] = 0x97;
    aiStack_c[1] = 0x86e;
    aiStack_c[0] = 7;
    func_0x00016658(uVar3,0x892,param_1 + 1,param_2);
    aiStack_c[3] = 0x93;
    aiStack_c[2] = 4;
    aiStack_c[1] = 0x86e;
    aiStack_c[0] = 7;
    iVar1 = 0x93;
    func_0x00016658(0x1658,0x86e,5,0x93);
    aiStack_c[3] = 1;
    aiStack_c[2] = 0x1658;
    uVar3 = 0x112a;
    aiStack_c[1] = 0xb3c1;
    func_0x000112a0();
  }
  aiStack_c[3] = 0x93;
  aiStack_c[2] = 3;
  aiStack_c[1] = 0x86e;
  aiStack_c[0] = 7;
  func_0x00016658(uVar3,0x892,param_1,0x96,0x96);
  aiStack_c[3] = 0x1658;
  aiStack_c[2] = 0xb3e9;
  func_0x000210f2();
  return;
}
