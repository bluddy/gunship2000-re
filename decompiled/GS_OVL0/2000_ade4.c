/* GS.GS2 2000:ade4 undefined FUN_2000_ade4(void) */
void __cdecl16far FUN_2000_ade4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iVar7;
  
  uVar6 = 0xbf;
  func_0x00000eb0();
  if (*(int *)0x986a == 0) {
    if (*(int *)0x9868 != 0) {
      func_0x00016a62(0xbf,0x880,*(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0xd),
                      *(undefined2 *)(param_1 + 5),*(undefined2 *)(param_1 + 7),0);
      *(undefined2 *)0x9834 = 0;
      *(undefined2 *)0x9864 = 0;
      *(undefined2 *)0x9868 = 0;
      return;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(int *)0x9864 = *(int *)0x9864 + 1;
    }
    if (*(int *)0x9834 <= *(int *)0x9864) {
      func_0x00016658(0xbf,0x880,*(undefined2 *)(param_1 + 0xb),*(int *)(param_1 + 0xd) + 1,
                      *(undefined2 *)(param_1 + 5),*(int *)(param_1 + 7) + -1,0x880,
                      *(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0xd));
      iVar7 = *(int *)(param_1 + 7) + *(int *)(param_1 + 0xd) + -1;
      func_0x00016e72(0x1658,0x880,*(undefined2 *)(param_1 + 0xb),iVar7,
                      *(int *)(param_1 + 5) + *(int *)(param_1 + 0xb) + -1,iVar7,0);
      uVar6 = 0x139c;
      uVar3 = func_0x00013a46(0x1658,0x10);
      *(undefined2 *)0x9834 = uVar3;
      *(undefined2 *)0x9864 = 0;
    }
    iVar7 = func_0x00013a46(uVar6,-((*(int *)0x9864 == 0) - 4));
    func_0x00016eb7(0x139c,0x880,*(int *)(param_1 + 0xb) + *(int *)0x9864,
                    *(int *)(param_1 + 7) + *(int *)(param_1 + 0xd) + -1,
                    (int)*(char *)(iVar7 + 0x1e4c));
  }
  else {
    iVar7 = *(int *)0x9868;
    uVar6 = 0x1658;
    func_0x00016eb7(0xbf,0x880,(int)*(char *)0x987d + *(int *)(param_1 + 0xb),
                    (int)*(char *)0x987e + *(int *)(param_1 + 0xd),(int)*(char *)0x9880);
    if (*(char *)0x987d < *(char *)(*(char *)0x987f * 4 + -0x6794)) {
      *(char *)0x987d = *(char *)0x987d + '\x01';
    }
    if (*(char *)(*(char *)0x987f * 4 + -0x6794) < *(char *)0x987d) {
      *(char *)0x987d = *(char *)0x987d + -1;
    }
    if (*(char *)0x987e < *(char *)(*(char *)0x987f * 4 + -0x6793)) {
      *(char *)0x987e = *(char *)0x987e + '\x01';
    }
    if (*(char *)(*(char *)0x987f * 4 + -0x6793) < *(char *)0x987e) {
      *(char *)0x987e = *(char *)0x987e + -1;
    }
    if ((*(char *)(*(char *)0x987f * 4 + -0x6794) == *(char *)0x987d) &&
       (*(char *)(*(char *)0x987f * 4 + -0x6793) == *(char *)0x987e)) {
      iVar7 = 1;
      if ((*(char *)0x987f < *(char *)0x987c) ||
         ((*(char *)0x987c == *(char *)0x987f && (*(char *)0x987c < '\x03')))) {
        if (*(char *)0x987c == *(char *)0x987f) {
          *(char *)0x987c = *(char *)0x987c + '\x01';
        }
        else if ((int)*(char *)0x987c - (int)*(char *)0x987f == 1) {
          *(char *)0x987c = *(char *)0x987c + -1;
        }
        FUN_2000_b180((int)*(char *)0x987c);
      }
      uVar6 = 0x139c;
      uVar1 = func_0x00013a46(0x1658,4);
      *(undefined1 *)0x987f = uVar1;
    }
    if (iVar7 != 0) {
      func_0x00016a62(uVar6,0x880,*(undefined2 *)(param_1 + 0xb),*(int *)(param_1 + 0xd) + 1,
                      *(undefined2 *)(param_1 + 5),*(int *)(param_1 + 7) + -1,9);
      func_0x00016e72(0x1658,0x880,*(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0xd),
                      *(int *)(param_1 + 5) + *(int *)(param_1 + 0xb) + -1,
                      *(undefined2 *)(param_1 + 0xd),0xb);
      for (iVar7 = 0; uVar6 = 0x1658, iVar7 < *(char *)0x987c; iVar7 = iVar7 + 1) {
        if (iVar7 == 2) {
          cVar2 = (-(*(char *)(iVar7 * 4 + -0x6791) <= *(char *)(iVar7 * 4 + -0x6792)) & 2U) + 2;
        }
        else {
          cVar2 = '\x03';
        }
        iVar4 = *(char *)(iVar7 * 4 + -0x6791) + -2;
        iVar7 = *(char *)(iVar7 * 4 + -0x6792) + -1;
        func_0x00016a62(0x1658,0x880,cVar2 + '\x01',iVar7);
        if (iVar4 == 2) {
          cVar2 = (-(iVar7 == 0) & 2U) + 10;
        }
        else {
          cVar2 = '\v';
        }
        iVar4 = iVar4 * 4;
        iVar5 = (int)*(char *)(iVar4 + -0x6792);
        func_0x0000d116(0x1658,0x880,cVar2,iVar5,iVar5,(int)*(char *)(iVar4 + -0x6791));
        iVar7 = (int)*(char *)(iVar4 + -0x6792);
        func_0x00016e72(0xd02,0x880,iVar7,iVar7 + 1,iVar7,*(char *)(iVar4 + -0x6791) + iVar5);
        iVar7 = *(char *)(iVar4 + -0x6791) + iVar7;
        func_0x00016e72(0x1658,0x880,1,iVar7,(int)*(char *)(iVar4 + -0x6792));
      }
    }
    uVar1 = func_0x00017cae(uVar6,0x880,(int)*(char *)0x987d + *(int *)(param_1 + 0xb),
                            (int)*(char *)0x987e + *(int *)(param_1 + 0xd));
    *(undefined1 *)0x9880 = uVar1;
    func_0x00016eb7(0x17ca,0x880,(int)*(char *)0x987d + *(int *)(param_1 + 0xb),
                    (int)*(char *)0x987e + *(int *)(param_1 + 0xd),0xf);
  }
  *(undefined2 *)0x9868 = 0;
  return;
}
