/* GS.GS2 2000:c464 undefined FUN_2000_c464(void) */
void __cdecl16far FUN_2000_c464(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  int iVar8;
  int in_stack_0000fff8;
  
  uVar7 = 0xbf;
  func_0x00000eb0();
  FUN_2000_c7c0();
  bVar1 = *(byte *)0x98f4;
  *(char *)0x98f4 = *(char *)0x98f4 + '\x01';
  if ((0xc < bVar1) || (param_1 != 0)) {
    *(undefined1 *)0x98f4 = 0;
    if (*(char *)0x98ec < '\x01') {
      uVar3 = func_0x00013a1c(0xbf,5,0xf);
      *(undefined1 *)0x98ec = uVar3;
      *(undefined1 *)0x98ee = 0;
      if ((*(char *)0x98ed == '\0') ||
         ((*(char *)0x98ed == '\x01' && (iVar6 = func_0x00013a46(0x139c,3), iVar6 != 0)))) {
        uVar7 = 0x139c;
        *(undefined1 *)0x98f5 = 1;
        uVar3 = *(char *)0x98ed == '\0';
        *(undefined1 *)0x98f0 = uVar3;
      }
      else {
        iVar6 = func_0x00013a1c(0x139c,1,2);
        iVar6 = iVar6 + (uint)(*(char *)0x98ed <= iVar6);
        if (*(char *)0x98ed == '\x01') {
          if (iVar6 == 2) {
            iVar6 = 1;
            iVar8 = 3;
          }
          else {
            iVar6 = 4;
            iVar8 = 8;
          }
        }
        else if (*(char *)0x98ed == '\x02') {
          if (iVar6 == 1) {
            iVar6 = 3;
            iVar8 = 1;
          }
          else {
            iVar6 = 9;
            iVar8 = 0xd;
          }
        }
        else if (iVar6 == 1) {
          iVar6 = 8;
          iVar8 = 4;
        }
        else {
          iVar6 = 0xd;
          iVar8 = 9;
        }
        uVar3 = 0x9c;
        uVar7 = 0xbf;
        uVar4 = func_0x000038b8(0x139c,iVar6 - iVar8);
        *(undefined1 *)0x98f5 = uVar4;
        *(undefined1 *)0x98ee = uVar4;
        while (-1 < *(char *)0x98ee) {
          *(undefined1 *)(((int)*(char *)0x98f5 - (int)*(char *)0x98ee) + -0x6710) = (char)iVar6;
          if (iVar8 < iVar6) {
            iVar5 = -1;
          }
          else {
            iVar5 = 1;
          }
          iVar6 = iVar6 + iVar5;
          *(char *)0x98ee = *(char *)0x98ee + -1;
        }
        *(undefined1 *)0x98ee = 0;
      }
      *(undefined1 *)0x98ed = uVar3;
    }
    func_0x00016658(uVar7,0x892,0,0,0x7d,0x5a,0x880,*(int *)0x98e6 + -0x49,*(int *)0x98e8 + -0xf);
    func_0x0001664a(0x1658);
    func_0x00013a46(0x1658,5);
    iVar6 = *(char *)(*(char *)0x98ee + -0x6710) * 3;
    cVar2 = *(char *)(iVar6 + 0x3c29);
    func_0x000165d3(0x139c,3,*(char *)(iVar6 + 0x3c28) * 0x50,0x20,0x50,0x38);
    uVar7 = 3;
    iVar6 = func_0x000165d3(0x1658,3,0,0,0x20,0x20);
    func_0x000166b1(0x1658,0x880,*(int *)0x98e6 + -0x1c,*(int *)0x98e8 + 8,uVar7);
    func_0x000166b1(0x1658,0x880,*(int *)0x98e6 + -0xf,*(int *)0x98e8 + -0xf,iVar6);
    if (cVar2 == '\0') {
      uVar7 = func_0x000165d3(0x1658,3,0x9b0,0x58,0x28);
      iVar8 = 0x1658;
      func_0x000166b1(0x1658,0x880,*(int *)0x98e6 + -0x34,*(int *)0x98e8 + 0xd,uVar7);
    }
    else {
      uVar7 = func_0x000165d3(0x1658,3,0x848,0x96,0x35);
      iVar8 = 0x1658;
      func_0x000166b1(0x1658,0x880,*(int *)0x98e6 + -0x49,*(int *)0x98e8 + 0x10,uVar7);
    }
    func_0x000165f6(0x1658);
    if (iVar8 != 0) {
      iVar6 = iVar8;
    }
    uVar7 = 0x112a;
    in_stack_0000fff8 = -0x38ef;
    func_0x000112dc(0x1658,iVar6);
    *(undefined1 *)0xb613 = 1;
    if ((int)*(char *)0x98ee < *(char *)0x98f5 + -1) {
      *(char *)0x98ee = *(char *)0x98ee + '\x01';
    }
    else {
      *(char *)0x98ec = *(char *)0x98ec + -1;
    }
  }
  if (in_stack_0000fff8 == 2) {
    iVar6 = func_0x00013a46(uVar7,9);
    func_0x00016658(0x139c,0x8a4,(iVar6 / 9) * 0xd + 0x112,(iVar6 % 9) * 6 + 0x58,0xd,6,0x880,
                    *(int *)0x98e6 + -6,*(int *)0x98e8 + 7);
    *(undefined1 *)0xb613 = 1;
  }
  return;
}
