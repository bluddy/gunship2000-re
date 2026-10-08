/* SETUP.GS2 13c9:02ee undefined FUN_13c9_02ee(void) */
char * __cdecl16far FUN_13c9_02ee(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  char *in_stack_0000fff4;
  char *pcVar6;
  char *pcStack_8;
  int iVar7;
  undefined2 uVar8;
  
  FUN_111d_02c6();
  cVar2 = param_1[8];
  pcStack_8 = (char *)0x0;
  pcVar5 = (char *)0x111d;
  do {
    if (pcStack_8 != (char *)0x0) {
      return in_stack_0000fff4;
    }
    iVar7 = 0;
    uVar8 = 0;
    pcVar6 = (char *)0x3fb4;
    in_stack_0000fff4 = (char *)FUN_12fb_000a(0,0);
    pcStack_8 = pcVar5;
    if (in_stack_0000fff4 == (char *)0x148) {
      uVar8 = 1;
      pcVar6 = pcVar6 + -1;
    }
    else if ((int)in_stack_0000fff4 < 0x149) {
      if (in_stack_0000fff4 == (char *)0xd) {
        iVar3 = *(int *)((int)pcVar6 * 0x11 + *(int *)(param_1 + 9) + 2);
        if (iVar3 == 0) {
          pcStack_8 = (char *)*(undefined2 *)
                               (*(int *)(param_1 + 9) + (uint)(byte)param_1[8] * 0x11 + 9);
          pcVar6 = (char *)0x12fb;
          in_stack_0000fff4 = (char *)0x402c;
          FUN_13c9_0040();
          iVar7 = (int)pcVar6 * 0x11 + *(int *)(param_1 + 9);
          *(uint *)(iVar7 + 5) = (uint)*(byte *)(*(int *)(iVar7 + 9) + 8);
          iVar7 = *(int *)(param_1 + 9) + (int)pcVar6 * 0x11;
          if (*(int *)(iVar7 + 7) != 0) {
            *(undefined2 *)*(undefined2 *)(iVar7 + 7) = *(undefined2 *)(iVar7 + 5);
          }
          iVar7 = 1;
        }
        else if (iVar3 == 1) {
          pcStack_8 = (char *)0x1;
        }
        else if (iVar3 == 2) {
          pbVar1 = (byte *)(*(int *)(param_1 + 9) + (uint)(byte)param_1[8] * 0x11 + 5);
          *pbVar1 = *pbVar1 ^ 1;
          iVar7 = (int)pcVar6 * 0x11 + *(int *)(param_1 + 9);
          if (*(int *)(iVar7 + 7) != 0) {
            *(undefined2 *)*(undefined2 *)(iVar7 + 7) = *(undefined2 *)(iVar7 + 5);
          }
          iVar7 = 1;
        }
      }
      else if (in_stack_0000fff4 == (char *)0x1b) {
        if (*param_1 != '\x17') {
          param_1[8] = cVar2;
          return (char *)0x1b;
        }
      }
      else if (in_stack_0000fff4 == (char *)0x147) goto LAB_13c9_0358;
    }
    else if (in_stack_0000fff4 == (char *)0x149) {
LAB_13c9_0358:
      pcVar6 = (char *)0x0;
    }
    else if (in_stack_0000fff4 == (char *)0x14f) {
LAB_13c9_0360:
      uVar8 = 1;
      pcVar6 = (char *)((byte)param_1[3] - 1);
    }
    else if (in_stack_0000fff4 == (char *)0x150) {
      pcVar6 = pcVar6 + 1;
    }
    else if (in_stack_0000fff4 == (char *)0x151) goto LAB_13c9_0360;
    if ((int)pcVar6 < 0) {
      pcVar6 = (char *)0x0;
    }
    if ((int)(uint)(byte)param_1[3] <= (int)pcVar6) {
      pcVar6 = (char *)((byte)param_1[3] - 1);
    }
    pcVar4 = pcVar6;
    if (*(char *)((int)pcVar6 * 0x11 + *(int *)(param_1 + 9) + 4) == '\0') {
      cVar2 = -5;
      in_stack_0000fff4 = param_1;
      pcVar4 = (char *)FUN_13c9_04dc(param_1,uVar8);
      pcStack_8 = pcVar6;
    }
    pcVar5 = (char *)0x12fb;
    if ((iVar7 != 0) || ((char *)(uint)(byte)param_1[8] != pcVar4)) {
      param_1[8] = (char)pcVar4;
      pcStack_8 = param_1;
      in_stack_0000fff4 = (char *)0x4156;
      FUN_13c9_0156();
    }
  } while( true );
}
