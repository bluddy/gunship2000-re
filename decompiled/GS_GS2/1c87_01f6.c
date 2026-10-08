/* GS.GS2 1c87:01f6 undefined FUN_1c87_01f6(void) */
void __cdecl16far FUN_1c87_01f6(char *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined1 local_ba [160];
  undefined1 uStack_1a;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  
  FUN_10bf_02c0();
  piStack_14 = (int *)&stack0x0006;
  do {
    if (*param_1 == '\0') {
      *(undefined1 *)0x857e = 0;
      return;
    }
    FUN_10bf_2250();
    uStack_1a = 0;
    iVar4 = FUN_10bf_2a84();
    if (iVar4 == 0) {
      if (*(char *)0x857e == '\0') {
        *(undefined1 *)0x857e = 0;
        return;
      }
      FUN_1c87_0578();
      iStack_10 = FUN_10bf_2234();
    }
    else {
      iStack_10 = iVar4 - (int)local_ba;
      if (iStack_10 == 0) {
        iStack_10 = 2;
        bVar3 = *(byte *)(iVar4 + 1);
        if (bVar3 == 0x74) {
          iVar4 = *(int *)0x857a;
          if (iVar4 < *(int *)0x8574) {
            for (iVar4 = iVar4 + *(int *)0x857c; iVar4 < *(int *)0x8574;
                iVar4 = iVar4 + *(int *)0x857c) {
            }
            *(int *)0x8574 = iVar4;
          }
          else {
            *(int *)0x8574 = iVar4;
          }
        }
        else if (bVar3 < 0x75) {
          if (bVar3 == 99) {
            uVar2 = *(undefined2 *)0x856e;
            *(undefined2 *)0x856e = *(undefined2 *)0x8578;
            *(undefined2 *)0x8578 = uVar2;
          }
          else if ((char)bVar3 < 'd') {
            if (bVar3 == 0x25) {
              FUN_1c87_01e0();
            }
            else if (bVar3 == 0x44) {
              iStack_10 = -0x347b;
              FUN_10bf_26e0();
              FUN_1c87_01e0();
              piStack_14 = piStack_14 + 2;
            }
            else {
              if (bVar3 != 0x53) goto LAB_1c87_0424;
              piVar1 = piStack_14 + 2;
              iStack_18 = *piStack_14;
              while (iVar4 = FUN_10bf_315a(), piStack_14 = piVar1, iVar4 != 0) {
                iStack_10 = 0x10bf;
                FUN_10bf_3130();
                FUN_1c87_01e0();
                iStack_18 = iStack_18 + -0x33ed;
              }
            }
          }
          else if (bVar3 == 100) {
            FUN_10bf_26e0();
            FUN_1c87_01e0();
            piStack_14 = piStack_14 + 1;
          }
          else if (bVar3 == 0x6f) {
            *(undefined1 *)0x857e = 1;
          }
          else if (bVar3 == 0x72) {
            *(undefined1 *)0x855e = 1;
          }
          else {
            if (bVar3 != 0x73) goto LAB_1c87_0424;
            iStack_18 = *piStack_14;
            iStack_10 = 0x10bf;
            FUN_10bf_3130();
            uStack_1a = 0;
            FUN_1c87_01e0();
            piStack_14 = piStack_14 + 1;
          }
        }
        else {
LAB_1c87_0424:
          iStack_10 = 1;
        }
      }
      else {
        local_ba[iStack_10] = 0;
        if (*(char *)0x857e == '\0') {
          *(undefined1 *)0x857e = 0;
          return;
        }
        FUN_1c87_0578();
      }
    }
    param_1 = param_1 + iStack_10;
  } while( true );
}
