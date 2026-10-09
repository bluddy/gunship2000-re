/* GS.GS2 2000:ba50 undefined FUN_2000_ba50(void) */
void __cdecl16far FUN_2000_ba50(void)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0xbf;
  func_0x00000eb0();
LAB_2000_ba57:
  do {
    func_0x0001544e(uVar3);
    iVar1 = *(int *)0xb611;
    if (iVar1 == 0xd) {
      if (0 < *(int *)0xb60f) {
        func_0x0000edda(0x14e6,0x22);
        cVar2 = *(char *)(*(int *)0xb60f + -0x677b);
        *(char *)0xad1b = cVar2;
        if ((cVar2 == '\x04') && (*(char *)0xad05 != '\0')) {
          *(undefined1 *)0xad1a = *(undefined1 *)0xad0d;
        }
        func_0x0000d2f0(0xdea);
        func_0x0000c7c6(0xd02);
        return;
      }
    }
    else {
      if (iVar1 == 0x1b) {
        func_0x0000edda(0x14e6,0x22);
        return;
      }
      if (iVar1 == 0x110) {
        uVar3 = 0xdea;
        func_0x0000ed38(0x14e6);
        goto LAB_2000_ba57;
      }
    }
    func_0x000135e2(0x14e6);
    FUN_2000_b994(1);
    uVar3 = 0x1351;
    func_0x000135fc(0x1351);
  } while( true );
}
