/* GS.GS2 2000:c328 undefined FUN_2000_c328(void) */
/* WARNING: Removing unreachable block (ram,0x0002cc66) */
/* WARNING: Removing unreachable block (ram,0x0002cc8c) */
/* WARNING: Removing unreachable block (ram,0x0002cc8e) */

void FUN_2000_c328(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
LAB_2000_c335:
  while( true ) {
    func_0x0001544e();
    iVar1 = *(int *)0xb611;
    if (iVar1 == 0xd) break;
    if (iVar1 == 0x1b) goto LAB_2000_c34e;
    if (iVar1 != 0x110) goto LAB_2000_cc4e;
    func_0x0000ed38();
  }
  goto LAB_2000_c380;
LAB_2000_cc4e:
  if ((iVar1 == 0x149) || (iVar1 == 0x151)) {
LAB_2000_c34e:
    iVar1 = *(int *)0xb611;
    if (iVar1 == 0x1b) {
      *(undefined2 *)0xb60f = 0x12;
    }
    else if (iVar1 == 0x149) {
      *(undefined2 *)0xb60f = 0xd;
    }
    else if (iVar1 == 0x151) {
      *(undefined2 *)0xb60f = 0xe;
    }
LAB_2000_c380:
    if (*(int *)0xb60f - 1U < 0x15) {
                    /* WARNING: Could not emulate address calculation at 0x0002cc05 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*(undefined2 *)((*(int *)0xb60f - 1U) * 2 + 0xb9a))();
      return;
    }
    func_0x0000edda();
  }
  goto LAB_2000_c335;
}
