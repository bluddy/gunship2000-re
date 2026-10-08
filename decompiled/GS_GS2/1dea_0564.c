/* GS.GS2 1dea:0564 undefined FUN_1dea_0564(void) */
void __cdecl16far FUN_1dea_0564(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  
  FUN_10bf_02c0();
  FUN_2581_0002();
  FUN_1d02_05de();
  FUN_165c_0806();
  FUN_1d02_0d2a(0);
  thunk_EXT_FUN_0000_0000(0x1d02,0,0);
  FUN_1dea_0730();
  FUN_27d1_0eb0(0x2658,(int)*(char *)0x861b);
  FUN_27d1_0ea6(0x27d1);
  if ((*(byte *)0xbb9c & 0x20) != 0) {
    FUN_27d1_0f00(0x27d1);
  }
  uVar2 = 0x27d1;
  if ((*(byte *)0xbb9c & 0x18) != 0) {
    FUN_27d1_0ef6(0x27d1,(*(byte *)0xbb9c & 8) != 0);
    return;
  }
  iVar1 = FUN_1dea_0fa4(1);
  if (*(char *)0xad1b == '\x04') {
    iVar1 = (int)*(char *)0x8612;
    uVar2 = 0x1b1d;
    FUN_1b1d_000a(iVar1);
  }
  FUN_27d1_0eec(uVar2,iVar1);
  iVar1 = (int)*(char *)0x8612;
  FUN_27d1_0ee2(0x27d1,iVar1,(int)*(char *)0x861c);
  if ((iVar1 < 2) && ('\x01' < *(char *)0xad0a)) {
    *(int *)0xad0f = ((*(int *)0xad0f / 2 + 99) / 100) * 100;
  }
  if (*(char *)0xad0a != '\v') {
    iVar1 = FUN_1dea_06f4();
    if (iVar1 == 0) {
      iVar1 = FUN_1dea_06dc();
      if (iVar1 == 0) goto LAB_1dea_0656;
    }
  }
  *(undefined1 *)0xad0c = 2;
LAB_1dea_0656:
  if (*(char *)0xad1b != '\0') {
    iVar1 = FUN_27d1_0ece(0x27d1);
    if ((iVar1 == 0) && ('\x01' < *(char *)0xe282)) {
      FUN_27d1_0ed8(0x27d1);
    }
    iVar1 = FUN_27d1_0ece(0x27d1);
    if ((iVar1 != 0) || ('\x01' < *(char *)0xe282)) {
      FUN_27d1_0ec4(0x27d1);
    }
    if (((*(byte *)0xbb9c & 1) == 0) || ((*(byte *)0xbb9c & 2) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    if ((*(char *)0x8610 == '\0') || (*(char *)0x861c != '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_27d1_0eba(0x27d1,(int)*(char *)0x8612,uVar3,uVar2,(*(byte *)0xbb9c & 0x80) == 0);
  }
  return;
}
