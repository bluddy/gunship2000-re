/* GS2.GS2 2000:e4fc undefined FUN_2000_e4fc(void) */
void __cdecl16far FUN_2000_e4fc(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = -1;
  uStack_6 = -1;
  uStack_8 = -1;
  pcVar3 = (code *)0x11a5;
  if (((param_4 & 0x100) == 0) && (pcVar3 = (code *)0x120a, (param_4 & 0x200) == 0)) {
    pcVar3 = (code *)0x1163;
  }
  iVar1 = -(param_4 & 7);
  iVar2 = (param_3 ^ (int)param_3 >> 0xf) - ((int)param_3 >> 0xf);
  if (iVar1 + 3 < 0) {
    uStack_4 = (int)((ulong)(long)iVar2 / 1000);
    iVar2 = (int)((ulong)(long)iVar2 % 1000);
  }
  if (iVar1 + 2 < 0) {
    uStack_6 = (int)((ulong)(long)iVar2 / 100);
    iVar2 = (int)((ulong)(long)iVar2 % 100);
  }
  if (iVar1 + 1 < 0) {
    uStack_8 = (int)((ulong)(long)iVar2 / 10);
  }
  out(0x3ce,0x205);
  out(0x3ce,8);
  if (-1 < uStack_4) {
    (*pcVar3)();
  }
  if (-1 < uStack_6) {
    (*pcVar3)();
  }
  if (-1 < uStack_8) {
    (*pcVar3)();
  }
  (*pcVar3)();
  return;
}
