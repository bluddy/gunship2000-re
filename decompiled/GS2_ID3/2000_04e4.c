/* GS2.GS2 2000:04e4 undefined FUN_2000_04e4(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2000_04e4(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = _DAT_4000_399c;
  if (DAT_2000_774e != '\0') {
    pcVar3 = (char *)0x47c;
    do {
      if (((*pcVar3 == param_1) && (pcVar3[1] == param_2)) && (pcVar3[3] == param_3)) {
        return;
      }
      pcVar3 = pcVar3 + 4;
    } while (pcVar3 < (char *)0x484);
  }
  *(byte *)0x47a = -(*(int *)0x2d16 == 0) & 0x18;
  *(undefined1 *)0x478 = (undefined1)param_1;
  uStack_8 = (undefined1 *)CONCAT22(uVar2,(undefined1 *)0x479);
  *(undefined1 *)0x479 = (undefined1)param_2;
  uStack_c = (undefined1 *)CONCAT22(uVar2,(undefined1 *)0x47b);
  *(undefined1 *)0x47b = (undefined1)param_3;
  uVar1 = *(undefined2 *)0x482;
  *(undefined2 *)0x484 = *(undefined2 *)0x480;
  *(undefined2 *)0x486 = uVar1;
  uVar1 = *(undefined2 *)0x47e;
  *(undefined2 *)0x480 = *(undefined2 *)0x47c;
  *(undefined2 *)0x482 = uVar1;
  uVar1 = *(undefined2 *)0x47a;
  *(undefined2 *)0x47c = *(undefined2 *)0x478;
  *(undefined2 *)0x47e = uVar1;
  *(undefined1 *)0x47a = 0;
  uVar2 = _DAT_4000_399c;
  if (*(int *)0x2d16 == 0) {
    *(undefined1 *)0x47a = 0;
  }
  else {
    *(undefined1 *)0x47a = 0xc;
    *(undefined1 *)0x478 = 0x14;
  }
  *uStack_8 = 0;
  *uStack_c = 0;
  return;
}
