/* GS.GS2 3000:5248 undefined FUN_3000_5248(void) */
/* WARNING: Removing unreachable block (ram,0x0003535b) */
/* WARNING: Removing unreachable block (ram,0x00035365) */
/* WARNING: Removing unreachable block (ram,0x0003532a) */
/* WARNING: Removing unreachable block (ram,0x000355fe) */
/* WARNING: Removing unreachable block (ram,0x00035621) */

undefined2 __cdecl16far FUN_3000_5248(int *param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_1e6;
  int iStack_1e4;
  int iStack_1e2;
  int local_1e0;
  char cStack_1de;
  int iStack_1dc;
  int local_1da;
  int iStack_1d8;
  undefined1 local_1d6 [446];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int *piStack_c;
  undefined1 *puStack_a;
  int *piStack_8;
  int *piStack_6;
  
  uVar4 = 0xbf;
  piStack_6 = (int *)0x5253;
  func_0x00000eb0();
  local_1d6[0] = 0;
  if ('\0' < *(char *)0xe28f) {
    *(undefined1 *)0xe28f = 0;
  }
  iVar2 = *(int *)0xc024;
  if (0x24 < iVar2) {
    iVar2 = 0x24;
  }
  *(int *)0xc024 = iVar2;
  cStack_1de = (char)iVar2;
  piStack_6 = &local_1e0;
  piStack_8 = &local_1da;
  puStack_a = &stack0xfffc;
  piStack_c = &local_1e6;
  iStack_e = 0xbf;
  iStack_10 = 0x5298;
  FUN_3000_10a4();
  local_1e6 = 0;
  local_1da = *(int *)(*(int *)0xc358 + 1);
  local_1e0 = *(int *)(*(int *)0xc358 + 3);
  if (*(char *)0xe288 != '\0') {
    piStack_6 = (int *)0xbf;
    piStack_8 = (int *)0x52c1;
    FUN_3000_1070();
    iStack_1d8 = local_1da;
    iStack_1dc = local_1e0;
    local_1da = *param_2 + 0x2d;
    *(int *)(*(int *)0xc358 + 1) = local_1da;
    local_1e0 = *param_3 + -3;
    *(int *)(*(int *)0xc358 + 3) = local_1e0;
    piStack_6 = (int *)0x0;
    piStack_c = (int *)0xbf;
    uVar4 = 0xef4;
    iStack_e = 0x5306;
    puStack_a = (undefined1 *)local_1da;
    piStack_8 = (int *)local_1e0;
    func_0x0000f246();
    piStack_6 = (int *)0xef4;
    piStack_8 = (int *)0x530d;
    FUN_3000_10f2();
  }
  iStack_1e2 = *param_2 + 2;
  piStack_6 = (int *)0x2;
  puStack_a = (undefined1 *)0x5321;
  piStack_8 = (int *)uVar4;
  FUN_3000_0fbc();
  do {
    piStack_6 = (int *)0x6;
    piStack_8 = (int *)0x59;
    puStack_a = (undefined1 *)0x59;
    piStack_c = (int *)0x6;
    iStack_e = local_1e0;
    iStack_10 = local_1da;
    uStack_14 = 0x5343;
    uStack_12 = uVar4;
    iVar2 = FUN_3000_118e();
    if ((iVar2 == 0) || (*(int *)0xc024 <= (int)cStack_1de)) {
      piStack_c = (int *)(int)cStack_1de;
      if ((int)piStack_c < *(int *)0xc024) {
        piStack_6 = (int *)0x8;
        puStack_a = (undefined1 *)0x8;
        iStack_10 = 0x5393;
        iStack_e = uVar4;
        func_0x0001f64a();
        if ((cStack_1de == '\x01') && (param_4 != 0)) {
          piStack_6 = (int *)local_1d6;
          piStack_8 = (int *)CONCAT11((char)((uint)piStack_6 >> 8),1);
          puStack_a = (undefined1 *)0x1da4;
          piStack_c = (int *)0x53b1;
          FUN_3000_4a42();
          uVar4 = 0x1da4;
        }
        else {
          piStack_6 = (int *)0x1da4;
          piStack_8 = (int *)0x53ba;
          FUN_3000_1070();
          piStack_6 = piStack_8;
          puStack_a = (undefined1 *)0x86e;
          piStack_c = (int *)0x7;
          iStack_e = 0x5a;
          iStack_10 = (int)piStack_8;
          uStack_12 = piStack_8;
          uStack_14 = 0x880;
          uStack_16 = 0x1da4;
          uVar4 = 0x1658;
          uStack_18 = 0x53d5;
          func_0x00016658();
          piStack_6 = (int *)0x1658;
          piStack_8 = (int *)0x53dc;
          FUN_3000_10f2();
        }
      }
      cStack_1de = '\0';
      local_1d6[0] = 0;
      iStack_1e4 = *param_3;
      do {
        do {
          cVar1 = cStack_1de + '\x01';
          iVar2 = (int)cStack_1de;
          cStack_1de = cVar1;
          if (*(int *)0xc024 <= iVar2) goto LAB_3000_54e6;
          piStack_6 = (int *)0x6;
          piStack_8 = (int *)0x59;
          iStack_1e4 = iStack_1e4 + -8;
          piStack_c = (int *)iStack_1e2;
          iStack_e = local_1e0;
          iStack_10 = local_1da;
          uStack_14 = 0x5422;
          uStack_12 = uVar4;
          puStack_a = (undefined1 *)iStack_1e4;
          iVar2 = FUN_3000_118e();
          if (iVar2 != 0) {
            piStack_6 = (int *)0x2;
            piStack_8 = (int *)iStack_1e4;
            puStack_a = (undefined1 *)iStack_1e2;
            cStack_1de = cStack_1de + -1;
            piStack_c = (int *)(int)cStack_1de;
            iStack_10 = 0x544a;
            iStack_e = uVar4;
            func_0x0001f64a();
            uVar4 = 0x1da4;
            if (param_4 == 0) {
              piStack_6 = (int *)0x1da4;
              piStack_8 = (int *)0x546a;
              FUN_3000_1008();
            }
            else {
              piStack_6 = (int *)local_1d6;
              piStack_8 = (int *)CONCAT11((char)((uint)piStack_6 >> 8),cStack_1de);
              puStack_a = (undefined1 *)0x1da4;
              piStack_c = (int *)0x5461;
              FUN_3000_4a42();
            }
            goto LAB_3000_54e6;
          }
          cVar1 = cStack_1de + '\x01';
          iVar2 = (int)cStack_1de;
          cStack_1de = cVar1;
        } while (*(int *)0xc024 <= iVar2);
        piStack_6 = (int *)0x6;
        piStack_8 = (int *)0x59;
        puStack_a = (undefined1 *)iStack_1e4;
        iVar2 = iStack_1e2 + 0x5f;
        iStack_e = local_1e0;
        iStack_10 = local_1da;
        uStack_14 = 0x549b;
        uStack_12 = uVar4;
        piStack_c = (int *)iVar2;
        iVar3 = FUN_3000_118e();
      } while (iVar3 == 0);
      piStack_6 = (int *)0x2;
      piStack_8 = (int *)iStack_1e4;
      cStack_1de = cStack_1de + -1;
      piStack_c = (int *)(int)cStack_1de;
      iStack_10 = 0x54bf;
      iStack_e = uVar4;
      puStack_a = (undefined1 *)iVar2;
      func_0x0001f64a();
      uVar4 = 0x1da4;
      if (param_4 == 0) {
        piStack_6 = (int *)0x1da4;
        piStack_8 = (int *)0x54e0;
        FUN_3000_1008();
      }
      else {
        piStack_6 = (int *)local_1d6;
        piStack_8 = (int *)CONCAT11((char)((uint)piStack_6 >> 8),cStack_1de);
        puStack_a = (undefined1 *)0x1da4;
        piStack_c = (int *)0x54d6;
        FUN_3000_4a42();
      }
LAB_3000_54e6:
      piStack_6 = (int *)(((*(int *)0xc024 + 1) / 2) * 8 + 1);
      piStack_8 = (int *)0xbd;
      puStack_a = (undefined1 *)(((-1 - *(int *)0xc024) / 2) * 8 + *param_3 + -1);
      piStack_c = (int *)*param_2;
      iStack_e = local_1e0;
      iStack_10 = local_1da;
      uStack_14 = 0x551e;
      uStack_12 = uVar4;
      iVar2 = FUN_3000_118e();
      if ((iVar2 == 0) && (*(char *)0xe28e != '\x04')) {
        piStack_8 = (int *)0x5530;
        piStack_6 = (int *)uVar4;
        FUN_3000_1008();
        piStack_6 = (int *)0x3;
        puStack_a = (undefined1 *)0x5536;
        piStack_8 = (int *)uVar4;
        FUN_3000_0fbc();
        *(undefined1 *)0xe28e = 4;
      }
      if ((int)cStack_1de < *(int *)0xc024) {
        if (*(char *)0xe28e != '\0') {
          piStack_6 = (int *)0x2;
          puStack_a = (undefined1 *)0x556d;
          piStack_8 = (int *)uVar4;
          FUN_3000_0fbc();
          *(undefined1 *)0xe28e = 0;
        }
      }
      else if (*(char *)0xe28e < '\x03') {
        piStack_6 = (int *)0x3;
        puStack_a = (undefined1 *)0x5556;
        piStack_8 = (int *)uVar4;
        FUN_3000_0fbc();
        *(undefined1 *)0xe28e = 3;
      }
    }
    piStack_6 = &local_1e0;
    piStack_8 = &local_1da;
    puStack_a = &stack0xfffc;
    piStack_c = &local_1e6;
    uVar5 = 0x1abf;
    iStack_10 = 0x558d;
    iStack_e = uVar4;
    func_0x0001afe8();
    piStack_6 = (int *)0x1abf;
    piStack_8 = (int *)0x5594;
    FUN_3000_1070();
    *(int *)(*(int *)0xc358 + 1) = local_1da;
    *(int *)(*(int *)0xc358 + 3) = local_1e0;
    piStack_6 = (int *)0x1abf;
    piStack_8 = (int *)0x55ae;
    FUN_3000_10f2();
    uVar4 = uVar5;
    if (((0 < local_1e6) && (local_1e6 < 0x46)) && (local_1e6 != 0x1c)) {
      if (local_1e6 < 2) {
        piStack_6 = &local_1e0;
        piStack_8 = &local_1da;
        puStack_a = &stack0xfffc;
        piStack_c = &local_1e6;
        iStack_e = 0x1abf;
        iStack_10 = 0x55eb;
        FUN_3000_10a4();
      }
      else {
        *(int *)0xc348 = local_1e6;
      }
      cStack_1de = *(char *)0xc024;
      uVar4 = 0x1abf;
      *param_1 = (int)cStack_1de;
      *(undefined1 *)0xe28e = 0xff;
      piStack_8 = (int *)0x567f;
      piStack_6 = (int *)uVar4;
      FUN_3000_0fe2();
      if (*(char *)0xe28f == '\0') {
        *(undefined1 *)0xe28f = 1;
      }
      uVar5 = uVar4;
      if (*(char *)0xe288 != '\0') {
        piStack_8 = (int *)0x5696;
        piStack_6 = (int *)uVar4;
        FUN_3000_1070();
        *(int *)(*(int *)0xc358 + 1) = iStack_1d8;
        *(int *)(*(int *)0xc358 + 3) = iStack_1dc;
        piStack_6 = (int *)0x0;
        piStack_8 = (int *)iStack_1dc;
        puStack_a = (undefined1 *)iStack_1d8;
        uVar5 = 0xef4;
        iStack_e = 0x56b5;
        piStack_c = (int *)uVar4;
        func_0x0000f246();
        piStack_6 = (int *)0xef4;
        piStack_8 = (int *)0x56bc;
        FUN_3000_10f2();
      }
      if (((int)cStack_1de < *(int *)0xc024) && (local_1e6 != 1)) {
        return 0xffff;
      }
      piStack_6 = (int *)*(undefined2 *)0x9d6;
      piStack_8 = (int *)*(undefined2 *)0x9d4;
      piStack_c = (int *)0x56e6;
      puStack_a = (undefined1 *)uVar5;
      FUN_3000_12b0();
      return 0;
    }
  } while( true );
}
