/* GS2.GS2 137f:1ea8 undefined FUN_137f_1ea8(void) */
undefined4 __cdecl16near
FUN_137f_1ea8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar5 = &stack0xfffe;
  iVar2 = param_1 - param_7;
  pcVar1 = (code *)swi(4);
  puVar6 = &stack0xfffe;
  if (SBORROW2(param_1,param_7)) {
    iVar2 = (*pcVar1)();
    puVar6 = puVar5;
  }
  iVar3 = param_4 - param_7;
  pcVar1 = (code *)swi(4);
  if (SBORROW2(param_4,param_7)) {
    iVar3 = (*pcVar1)();
  }
  iVar4 = param_2 - param_5;
  pcVar1 = (code *)swi(4);
  if (SBORROW2(param_2,param_5)) {
    iVar4 = (*pcVar1)();
  }
  pcVar1 = (code *)swi(4);
  if (SCARRY2((int)(((long)iVar4 * (long)iVar2) / (long)iVar3),param_5)) {
    (*pcVar1)();
  }
  iVar4 = param_3 - param_6;
  pcVar1 = (code *)swi(4);
  if (SBORROW2(param_3,param_6)) {
    iVar4 = (*pcVar1)(puVar6);
  }
  iVar2 = (int)(((long)iVar4 * (long)iVar2) / (long)iVar3);
  iVar3 = iVar2 + param_6;
  pcVar1 = (code *)swi(4);
  if (SCARRY2(iVar2,param_6)) {
    iVar3 = (*pcVar1)();
  }
  return CONCAT22(iVar3,param_1);
}
