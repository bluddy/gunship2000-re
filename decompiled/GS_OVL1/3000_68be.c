/* GS.GS2 3000:68be undefined FUN_3000_68be(void) */
void __cdecl16far FUN_3000_68be(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  
  uVar3 = 0xbf;
  func_0x00000eb0();
  if (*(char *)0x2a05 == '\0') {
    iVar4 = 0;
    while (iVar4 < *(int *)0xc018) {
      bVar1 = *(byte *)((int)*(undefined4 *)0xa278 +
                        (uint)*(byte *)((int)*(undefined4 *)0xb85c +
                                        *(int *)(iVar4 * 0xb + -0x4360) * 8 + 1) * 0x1b + 1);
      puVar2 = (undefined2 *)((uint)(byte)((bVar1 - 9 & -(bVar1 < 9)) + 9) * 10 + 0x2b9e);
      iVar5 = 0xbf;
      (*(code *)*puVar2)(0xbf,iVar4 * 0xb + -0x4362);
      iVar4 = iVar5 + 1;
    }
  }
  else {
    iVar4 = 0;
    while (iVar4 < *(int *)0xc018) {
      iVar5 = 0xbf;
      FUN_3000_634a(iVar4 * 0xb + -0x4362);
      iVar4 = iVar5 + 1;
    }
  }
  if (*(int *)0xc4d8 != 9999) {
    if (*(char *)0xe28c == '\x02') {
      if ((*(int *)0xc4da < 0x32) || (0x451 < *(int *)0xc4da)) {
        func_0x0000582f(0xbf,1);
        func_0x00005ba0(0xbf);
        iVar4 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,iVar4 + 4);
        func_0x00005ba0(0xbf);
        iVar5 = func_0x000059f5(0xbf);
        uVar3 = 0x1658;
        func_0x00016e72(0xbf,0x880,iVar5 + -0xc,iVar4 + 4,iVar5 + 0x14);
      }
      else {
        func_0x0000582f(0xbf,1);
        func_0x00005ba0(0xbf);
        iVar4 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,iVar4 + 0x14);
        func_0x00005ba0(0xbf);
        iVar5 = func_0x000059f5(0xbf);
        uVar3 = 0x1658;
        func_0x00016e72(0xbf,0x880,iVar5 + 4,iVar4 + -0xc,iVar5 + 4);
      }
    }
    func_0x0000582f(uVar3,0);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    func_0x0000582f(0xbf,iVar4 + 1);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)0x2b50,*(undefined2 *)0x2b52,*(undefined2 *)0x2b54,
                  *(undefined2 *)0x2b56,iVar4 + 1);
  }
  if (*(int *)0xc4e6 != 9999) {
    func_0x0000582f(0xbf,0);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    func_0x0000582f(0xbf,iVar4 + 1);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)0x2b5c,*(undefined2 *)0x2b5e,*(undefined2 *)0x2b60,
                  *(undefined2 *)0x2b62,iVar4 + 1);
  }
  if (*(int *)0xc4f6 != 9999) {
    if (*(char *)0x2a05 == '\0') {
      puVar2 = (undefined2 *)
               ((uint)*(byte *)((int)*(undefined4 *)0xa278 +
                                (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)0xc4f2 * 8 + 1)
                                * 0x1b + 1) * 10 + 0x2b9e);
      (*(code *)*puVar2)(0xbf,0xc4f0);
    }
    else {
      FUN_3000_634a(0xc4f0);
    }
    if (*(int *)0xc368 != 9999) {
      if ((*(int *)0xc375 == 2) && ((*(char *)0x29f3 != '\0' || (*(char *)0x2a05 != '\0')))) {
        FUN_3000_7e26(0xc368);
      }
      func_0x0000582f(0xbf,0);
      func_0x00005ba0(0xbf);
      iVar4 = func_0x000059f5(0xbf);
      func_0x0000582f(0xbf,iVar4 + 1);
      func_0x00005ba0(0xbf);
      iVar4 = func_0x000059f5(0xbf);
      FUN_3000_20d6(0xffff,2,1,*(undefined2 *)0x2b80,*(undefined2 *)0x2b82,*(undefined2 *)0x2b84,
                    *(undefined2 *)0x2b86,iVar4 + 1);
    }
    func_0x0000582f(0xbf,0);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    func_0x0000582f(0xbf,iVar4 + 1);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)0x2b68,*(undefined2 *)0x2b6a,*(undefined2 *)0x2b6c,
                  *(undefined2 *)0x2b6e,iVar4 + 1);
  }
  if (*(int *)0xc50a != 9999) {
    if (*(char *)0x2a05 == '\0') {
      puVar2 = (undefined2 *)
               ((uint)*(byte *)((int)*(undefined4 *)0xa278 +
                                (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)0xc506 * 8 + 1)
                                * 0x1b + 1) * 10 + 0x2b9e);
      (*(code *)*puVar2)(0xbf,0xc504);
    }
    else {
      FUN_3000_634a(0xc504);
    }
    if (*(int *)0xbc70 != 9999) {
      if ((*(int *)0xbc7d == 2) && ((*(char *)0x29f3 != '\0' || (*(char *)0x2a05 != '\0')))) {
        FUN_3000_7e26(0xbc70);
      }
      func_0x0000582f(0xbf,0);
      func_0x00005ba0(0xbf);
      iVar4 = func_0x000059f5(0xbf);
      func_0x0000582f(0xbf,iVar4 + 1);
      func_0x00005ba0(0xbf);
      iVar4 = func_0x000059f5(0xbf);
      FUN_3000_20d6(0xffff,2,1,*(undefined2 *)0x2b8c,*(undefined2 *)0x2b8e,*(undefined2 *)0x2b90,
                    *(undefined2 *)0x2b92,iVar4 + 1);
    }
    func_0x0000582f(0xbf,0);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    func_0x0000582f(0xbf,iVar4 + 1);
    func_0x00005ba0(0xbf);
    iVar4 = func_0x000059f5(0xbf);
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)0x2b74,*(undefined2 *)0x2b76,*(undefined2 *)0x2b78,
                  *(undefined2 *)0x2b7a,iVar4 + 1);
  }
  return;
}
