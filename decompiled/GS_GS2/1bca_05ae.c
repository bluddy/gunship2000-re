/* GS.GS2 1bca:05ae undefined FUN_1bca_05ae(void) */
void __cdecl16far FUN_1bca_05ae(char param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (param_1 == '\n') {
    *(undefined2 *)0x823c = *(undefined2 *)0x8248;
    if (*(int *)0x823e < 0x18) {
      *(int *)0x823e = *(int *)0x823e + 1;
    }
  }
  else {
    uVar3 = *(int *)0x823c * 2;
    uVar4 = *(int *)0x823e * 0xa0;
    iVar2 = ((int)uVar3 >> 0xf) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4) + -0x4800;
    *(int *)0x824c = (int)(uVar3 + uVar4);
    *(int *)0x824e = iVar2;
    *(char *)(uVar3 + uVar4) = param_1;
    uVar1 = *(undefined1 *)0x8246;
    *(int *)0x824c = *(int *)0x824c + 1;
    *(undefined1 *)*(undefined4 *)0x824c = uVar1;
    if (*(int *)0x823c < 0x50) {
      *(int *)0x823c = *(int *)0x823c + 1;
    }
  }
  *(undefined1 *)0x822b = 2;
  *(undefined1 *)0x822d = 0;
  *(undefined1 *)0x8231 = *(undefined1 *)0x823e;
  *(undefined1 *)0x8230 = *(undefined1 *)0x823c;
  FUN_10bf_246a(0x10,0x822a,0x822a);
  return;
}
