/* GS2.GS2 1000:23c8 undefined FUN_1000_23c8(void) */
void __cdecl16far FUN_1000_23c8(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  pcVar4 = (char *)0x4;
  do {
    uVar1 = *(undefined2 *)0x32a4;
    if (*pcVar4 != '\0') {
      uVar5 = 0x9f;
      iVar2 = FUN_12a2_0c66(*(uint *)(pcVar4 + 0x12) - param_1[2],
                            (*(int *)(pcVar4 + 0x14) - param_1[3]) -
                            (uint)(*(uint *)(pcVar4 + 0x12) < param_1[2]),param_5,param_5 >> 0xf);
      iVar2 = iVar2 + param_3;
      iVar3 = FUN_12a2_0c66(*(uint *)(pcVar4 + 0xe) - *param_1,
                            (*(int *)(pcVar4 + 0x10) - param_1[1]) -
                            (uint)(*(uint *)(pcVar4 + 0xe) < *param_1),param_4,param_4 >> 0xf);
      FUN_137f_1f20(iVar3 + param_2,iVar2,uVar5);
    }
    pcVar4 = pcVar4 + 0x1a;
  } while (pcVar4 < (char *)0x274);
  return;
}
