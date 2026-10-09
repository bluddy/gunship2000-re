/* GS.GS2 2000:cd28 undefined FUN_2000_cd28(void) */
void __cdecl16far FUN_2000_cd28(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  uVar3 = 0xbf;
  func_0x00000eb0();
  if (param_3 != 0) {
    *(undefined1 *)0x9be4 = *(undefined1 *)0xad0a;
  }
  if (param_1 < 3) {
    uVar2 = (uint)((char)(*(byte *)0xad0b & 0xc) >> 2);
  }
  else {
    uVar2 = *(byte *)0xad0b & 3;
    param_1 = 5 - param_1;
  }
  if ((param_1 == 0) || (*(char *)0x9bdd != '\0')) {
    if ((*(char *)0x9be4 < '\x01') || ('\x06' < *(char *)0x9be4)) {
      uVar4 = uVar3;
      if ('\x06' < *(char *)0x9be4) {
        iVar1 = (*(char *)0x9be4 + -7) * 3;
        func_0x0001077a(0xbf,3,iVar1 + param_1,iVar1,0x16);
        uVar4 = 0x106a;
        func_0x0001077a(0x106a,4,param_1 + 0xfe,0xfe,0x13);
      }
    }
    else {
      iVar1 = (*(char *)0x9be4 + -1) * 3;
      func_0x0001077a(0xbf,1,iVar1 + param_1,iVar1,0x1b);
      func_0x0001077a(0x106a,2,param_1 + 0x10a,0x10a,0x18);
      uVar4 = 0x106a;
    }
    if (*(char *)0x9be4 < '\a') {
      uVar2 = 0x5c;
      uVar3 = 0x106a;
      func_0x0001077a(uVar4,5,*(char *)0x9be4 * 3 + param_1,*(char *)0x9be4 * 3);
    }
    else {
      uVar2 = 0x5c;
      iVar1 = (*(char *)0x9be4 + -7) * 3;
      uVar3 = 0x106a;
      func_0x0001077a(uVar4,6,iVar1 + param_1,iVar1);
    }
  }
  if ((param_1 == 0) || (((*(char *)0xad0b >> 2 ^ *(byte *)0xad0b) & 3) != 0)) {
    uVar4 = uVar3;
    if (uVar2 != 0) {
      uVar4 = 0x106a;
      func_0x0001077a(uVar3,7,param_1 + 0xc6,0xc6);
    }
    uVar3 = uVar4;
    if (*(char *)0x9bdb != '\0') {
      uVar3 = 0x15f0;
      func_0x00015fca(uVar4,2,0xb2,0x3d);
    }
  }
  if (param_2 != 0) {
    func_0x0000d5aa(uVar3,0x880,0x86e);
  }
  return;
}
