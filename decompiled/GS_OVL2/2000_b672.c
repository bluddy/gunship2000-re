/* GS.GS2 2000:b672 undefined FUN_2000_b672(void) */
void __cdecl16far FUN_2000_b672(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  uVar6 = 0xbf;
  func_0x00000eb0();
  iVar4 = param_1 * 0x3e;
  if (*(int *)(iVar4 + -0x46fc) != 0) {
    if ((param_1 == 0) && ((*(byte *)0xa249 & 8) != 0)) {
      iStack_8 = 0;
      iStack_a = 0x8000;
      uStack_c = *(undefined2 *)(iVar4 + -0x46f0);
      uStack_e = *(undefined2 *)(iVar4 + -0x46f2);
      uStack_10 = 0xbf;
      local_12 = 0xb6b4;
      iVar2 = func_0x00003aec();
      uStack_10 = 0;
      local_12 = 0x8000;
      func_0x00003aec(0xbf,*(undefined2 *)(iVar4 + -0x46ee),*(undefined2 *)(iVar4 + -0x46ec));
      iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar4 + -0x46f2),*(undefined2 *)(iVar4 + -0x46f0)
                              ,0xccd,0);
      iStack_8 = iVar5 + *(int *)0x98ba + 0x14;
      iVar4 = func_0x00003aec(0xbf,*(undefined2 *)(iVar4 + -0x46ee),*(undefined2 *)(iVar4 + -0x46ec)
                              ,0x1000,0);
      iVar4 = -(iVar4 - *(int *)0x98bc);
      iStack_a = iVar4 + 0x91;
      if ((iVar2 < 2) || (0xe < iVar2)) {
        uVar6 = 0x1658;
        func_0x00016e72(0xbf,0x8a4,iStack_8,iVar4 + 0x81,iStack_8,iVar4 + 0xa1,9);
      }
      else {
        uVar6 = 0x1658;
        func_0x00016e72(0xbf,0x8a4,iStack_8 + -0x14,iStack_a,iStack_8 + 0x14,iStack_a,9);
      }
    }
    iStack_8 = 0;
    iStack_a = 0xccd;
    iVar5 = param_1 * 0x3e;
    uStack_c = *(undefined2 *)(iVar5 + -0x46f0);
    uStack_e = *(undefined2 *)(iVar5 + -0x46f2);
    local_12 = 0xb769;
    uStack_10 = uVar6;
    iVar4 = func_0x00003aec();
    iVar4 = iVar4 + *(int *)0x98ba;
    uStack_10 = 0;
    local_12 = 0x1000;
    iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + -0x46ee),*(undefined2 *)(iVar5 + -0x46ec));
    iVar2 = -(iVar2 - *(int *)0x98bc);
    uVar6 = 0xd02;
    func_0x0000d116(0xbf,0x8a4,iVar4 + 0x12,iVar2 + 0x91,6,7,0);
    if (*(int *)(iVar5 + -0x46e4) != 0 || *(int *)(iVar5 + -0x46e6) != 0) {
      iVar3 = func_0x00003aec(0xd02,*(undefined2 *)(iVar5 + -0x46e6),
                              *(undefined2 *)(iVar5 + -0x46e4),0xccd,0);
      iVar1 = *(int *)0x98ba;
      iStack_8 = iVar3 + iVar1 + 0x14;
      uVar6 = 0xbf;
      iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + -0x46e2),*(undefined2 *)(iVar5 + -0x46e0)
                              ,0x1000,0);
      iStack_a = -(iVar5 - *(int *)0x98bc) + 0x91;
      FUN_2000_b8be(iVar4 + 0x16,iVar2 + 0x94,iVar3 + iVar1 + 0x17,-(iVar5 - *(int *)0x98bc) + 0x94,
                    0);
    }
    func_0x000032d0(uVar6,&local_12,0x3bf0,(int)param_2);
    func_0x0000c9f6(0xbf,iVar4 + 0x13,iVar2 + 0x92);
    func_0x0000c928(0xc87,0);
    func_0x0000ca66(0xc87,&local_12);
    func_0x00016a62(0xc87,0x8a4,iVar4 + 0x11,iVar2 + 0x90,6,7,1);
    if (*(int *)(param_1 * 0x3e + -0x46e4) != 0 || *(int *)(param_1 * 0x3e + -0x46e6) != 0) {
      FUN_2000_b8be(iVar4 + 0x15,iVar2 + 0x93,iStack_8 + 2,iStack_a + 2,0xe);
    }
    func_0x0000c928(0x1658,0xf);
    func_0x0000c9f6(0xc87,iVar4 + 0x12,iVar2 + 0x91);
    func_0x0000ca66(0xc87,&local_12);
  }
  return;
}
