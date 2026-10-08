/* GS.GS2 1dea:0d28 undefined FUN_1dea_0d28(void) */
void __cdecl16far FUN_1dea_0d28(int param_1,int param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  *(undefined1 *)0x8617 = 0xff;
  *(undefined1 *)0xe287 = 0;
  *(undefined1 *)0x8611 = 0;
  *(undefined1 *)0x861e = 0;
  *(undefined1 *)0x8616 = 0;
  *(undefined1 *)0x8619 = 0;
  *(undefined1 *)0x8618 = 0;
  *(undefined1 *)0x860f = 0;
  *(undefined1 *)0x861d = 0;
  for (iVar2 = 1; iVar2 < param_1; iVar2 = iVar2 + 1) {
    cVar1 = *(char *)*(undefined2 *)(iVar2 * 2 + param_2);
    if ((cVar1 == '/') || (cVar1 == '-')) {
      switch(*(undefined1 *)(*(int *)(iVar2 * 2 + param_2) + 1)) {
      case 0x42:
      case 0x62:
        *(undefined1 *)0x8616 = 1;
        break;
      case 0x43:
      case 99:
        *(undefined1 *)0x860f = 1;
        break;
      default:
        FUN_1dea_0e86();
        break;
      case 0x45:
      case 0x65:
        *(undefined1 *)0x861e = 1;
        break;
      case 0x47:
      case 0x67:
        *(undefined1 *)0x8611 = 1;
        break;
      case 0x4c:
      case 0x6c:
        *(undefined1 *)0x861d = 1;
        break;
      case 0x4d:
      case 0x6d:
        *(undefined1 *)0x8618 = 1;
        break;
      case 0x50:
      case 0x70:
        *(undefined1 *)0xe287 = 2;
        break;
      case 0x52:
      case 0x72:
        *(undefined1 *)0xe287 = 1;
        break;
      case 0x54:
      case 0x74:
        *(undefined1 *)0x8619 = 1;
        break;
      case 0x5a:
      case 0x7a:
        *(char *)0x8617 = *(char *)(*(int *)(iVar2 * 2 + param_2) + 2) + -0x30;
      }
    }
    else {
      FUN_1dea_0e86();
    }
  }
  return;
}
