/* GS.GS2 2000:dbd2 undefined FUN_2000_dbd2(void) */
void __cdecl16far FUN_2000_dbd2(int param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_8c [82];
  uint uStack_3a;
  undefined1 auStack_38 [9];
  undefined1 local_2f [16];
  undefined1 local_1f [3];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a [8];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  char *pcStack_c;
  char *pcStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0xdbdd;
  func_0x00000eb0();
  pcStack_6 = (char *)0x6134;
  pcStack_8 = (char *)*(undefined2 *)0x6312;
  pcStack_a = (char *)0xbf;
  pcStack_c = (char *)0xdbea;
  pcStack_a = (char *)func_0x000012cc();
  if (pcStack_a != (char *)0x0) {
    for (pcStack_c = (char *)0x0; (int)pcStack_c < 0x28; pcStack_c = (char *)((int)pcStack_c + 1)) {
      auStack_38[(int)pcStack_c] = 0x20;
    }
    auStack_38[(int)pcStack_c] = 0;
    pcStack_6 = local_2f;
    pcStack_8 = (char *)0x6137;
    pcStack_c = (char *)0xbf;
    puStack_e = (undefined1 *)0xdc28;
    func_0x000012e2();
    pcStack_6 = local_8c;
    pcStack_8 = (char *)0xbf;
    pcStack_a = (char *)0xdc34;
    pcStack_6 = (char *)FUN_2000_e1dc();
    pcStack_8 = &local_1c;
    pcStack_a = (char *)0x614c;
    pcStack_c = (char *)0x614c;
    puStack_e = (undefined1 *)0xbf;
    uStack_10 = 0xdc47;
    func_0x000012e2();
    pcStack_6 = (char *)0xacb6;
    pcStack_8 = (char *)*(undefined2 *)(*(char *)0xad0a * 2 + *(int *)0x1a92);
    puStack_e = &local_1b;
    pcStack_c = (char *)0x6157;
    uStack_10 = 0xbf;
    uStack_12 = 0xdc6a;
    pcStack_a = puStack_e;
    func_0x000012e2();
    pcStack_6 = (char *)0x6167;
    pcStack_8 = pcStack_a;
    pcStack_a = (char *)0xbf;
    pcStack_c = (char *)0xdc78;
    func_0x000012e2();
    if ((*(byte *)0xbb9c & 8) == 0) {
      if ((*(byte *)0xbb9c & 0x10) == 0) {
        if ((*(byte *)0xbb9c & 0x20) == 0) {
          if ((*(byte *)0xbb9c & 0x80) == 0) {
            pcStack_c = (char *)0x4;
          }
          else {
            pcStack_c = (char *)0x3;
          }
        }
        else {
          pcStack_c = (char *)0x2;
        }
      }
      else {
        pcStack_c = (char *)0x1;
      }
    }
    else {
      pcStack_c = (char *)0x0;
    }
    pcStack_6 = (char *)*(undefined2 *)((int)pcStack_c * 2 + 0x6314);
    pcStack_8 = (char *)0x6179;
    pcStack_c = (char *)0xbf;
    puStack_e = (undefined1 *)0xdccd;
    func_0x000012e2();
    if (((*(byte *)0xbb9c & 4) != 0) && ((*(byte *)0xbb9c & 0x10) == 0)) {
      pcStack_6 = (char *)0x617c;
      pcStack_8 = pcStack_a;
      pcStack_a = (char *)0xbf;
      pcStack_c = (char *)0xdcef;
      func_0x000012e2();
    }
    if ((*(byte *)0xbb9c & 3) != 0) {
      pcStack_6 = (char *)0x6186;
      pcStack_8 = pcStack_a;
      pcStack_a = (char *)0xbf;
      pcStack_c = (char *)0xdd04;
      func_0x000012e2();
      if ((*(byte *)0xbb9c & 1) != 0) {
        pcStack_6 = (char *)0x6192;
        pcStack_8 = pcStack_a;
        pcStack_a = (char *)0xbf;
        pcStack_c = (char *)0xdd19;
        func_0x000012e2();
      }
      if ((*(byte *)0xbb9c & 2) != 0) {
        if ((*(byte *)0xbb9c & 1) != 0) {
          pcStack_6 = (char *)0x619a;
          pcStack_8 = pcStack_a;
          pcStack_a = (char *)0xbf;
          pcStack_c = (char *)0xdd35;
          func_0x000012e2();
        }
        pcStack_6 = (char *)0x61a0;
        pcStack_8 = pcStack_a;
        pcStack_a = (char *)0xbf;
        pcStack_c = (char *)0xdd43;
        func_0x000012e2();
      }
    }
    pcStack_6 = (char *)0x61aa;
    pcStack_8 = pcStack_a;
    pcStack_a = (char *)0xbf;
    pcStack_c = (char *)0xdd51;
    func_0x000012e2();
    uStack_3a = *(uint *)&SUB_0000_bba0 / 0x168;
    iVar3 = (int)(((ulong)*(uint *)&SUB_0000_bba0 / 6) % 0x3c);
    pcStack_6 = (char *)0x61ae;
    pcStack_8 = pcStack_a;
    pcStack_a = (char *)0xbf;
    pcStack_c = (char *)0xdd80;
    func_0x000012e2();
    if ((uStack_3a != 0) || (iVar3 == 0)) {
      if (uStack_3a == 1) {
        pcStack_6 = (char *)0x61bf;
      }
      else {
        pcStack_6 = (char *)0x61c0;
      }
      pcStack_8 = (char *)uStack_3a;
      pcStack_a = (char *)0x61c2;
      pcStack_c = (char *)0x61c2;
      puStack_e = (undefined1 *)0xbf;
      uStack_10 = 0xddac;
      func_0x000012e2();
    }
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        pcStack_6 = (char *)0x61cf;
      }
      else {
        pcStack_6 = (char *)0x61d0;
      }
      pcStack_a = (char *)0x61d2;
      pcStack_c = (char *)0x61d2;
      puStack_e = (undefined1 *)0xbf;
      uStack_10 = 0xddd2;
      pcStack_8 = (char *)iVar3;
      func_0x000012e2();
    }
    pcStack_6 = local_1a;
    pcStack_8 = (char *)0x61df;
    pcStack_c = (char *)0xbf;
    uVar4 = 0xbf;
    puStack_e = (undefined1 *)0xdde9;
    func_0x000012e2();
    if (pcStack_8 == (char *)0x0) {
      if (param_1 != 0) {
        if ((*(char *)0xad0a < '\x05') && ('\0' < *(char *)0xad0a)) {
          pcStack_6 = (char *)0x61eb;
          pcStack_8 = pcStack_a;
          pcStack_a = (char *)0xbf;
          pcStack_c = (char *)0xde14;
          func_0x000012e2();
        }
        else {
          pcStack_6 = (char *)*(undefined2 *)(param_1 * 2 + *(int *)0x1a92);
          pcStack_8 = (char *)0x61fe;
          pcStack_c = (char *)0xbf;
          puStack_e = (undefined1 *)0xde30;
          func_0x000012e2();
        }
        pcStack_c = (char *)0x1;
      }
      pcStack_6 = (char *)0xbf;
      uVar4 = 0x1c4b;
      pcStack_8 = (char *)0xde3d;
      pcStack_6 = (char *)func_0x0001cb9e();
      if ((-1 < (int)pcStack_6) &&
         ((int)*(char *)((int)pcStack_6 + -0x5326) <= *(char *)((int)pcStack_6 + -0x531e) + 1)) {
        uVar5 = uVar4;
        if (pcStack_c != (char *)0x0) {
          pcStack_6 = (char *)0x620e;
          pcStack_8 = pcStack_a;
          pcStack_a = (char *)0x1c4b;
          uVar5 = 0xbf;
          pcStack_c = (char *)0xde6a;
          func_0x000012e2();
        }
        pcStack_6 = (char *)*(undefined2 *)((int)pcStack_6 * 2 + *(int *)0x1a8e);
        pcStack_8 = (char *)0x6211;
        uVar4 = 0xbf;
        puStack_e = (undefined1 *)0xde83;
        pcStack_c = (char *)uVar5;
        func_0x000012e2();
        pcStack_c = (char *)0x1;
      }
    }
    uVar5 = uVar4;
    if (pcStack_c == (char *)0x0) {
      pcStack_6 = (char *)0x6214;
      pcStack_8 = pcStack_a;
      uVar5 = 0xbf;
      pcStack_c = (char *)0xde9c;
      pcStack_a = (char *)uVar4;
      func_0x000012e2();
    }
    pcStack_6 = (char *)0x6219;
    pcStack_8 = pcStack_a;
    pcStack_c = (char *)0xdeaa;
    pcStack_a = (char *)uVar5;
    func_0x000012e2();
    pcStack_6 = (char *)0x621c;
    pcStack_8 = pcStack_a;
    pcStack_a = (char *)0xbf;
    pcStack_c = (char *)0xdeb8;
    func_0x000012e2();
    pcStack_c = (char *)*(int *)0xbc4a;
    if ((int)pcStack_c < 0) {
      pcStack_6 = (char *)0x622e;
      pcStack_8 = pcStack_a;
      pcStack_a = (char *)0xbf;
      pcStack_c = (char *)0xded0;
      func_0x000012e2();
      pcStack_c = (char *)-(int)pcStack_c;
    }
    if ((int)pcStack_c < 1000) {
      pcStack_6 = pcStack_c;
      pcStack_8 = (char *)0x6238;
      pcStack_c = (char *)0xbf;
      puStack_e = (undefined1 *)0xdf0c;
      func_0x000012e2();
    }
    else {
      pcStack_6 = (char *)((int)pcStack_c % 1000);
      pcStack_8 = (char *)((int)pcStack_c / 1000);
      pcStack_a = (char *)0x6230;
      pcStack_c = (char *)0x6230;
      puStack_e = (undefined1 *)0xbf;
      uStack_10 = 0xdef9;
      func_0x000012e2();
    }
    pcStack_6 = (char *)0x623b;
    pcStack_8 = pcStack_a;
    pcStack_a = (char *)0xbf;
    pcStack_c = (char *)0xdf1a;
    func_0x000012e2();
    if ('\x01' < *(char *)0xe282) {
      pcStack_6 = local_1f;
      pcStack_8 = (char *)0x623e;
      pcStack_c = (char *)0xbf;
      puStack_e = (undefined1 *)0xdf36;
      func_0x000012e2();
      for (pcStack_c = (char *)0x0; (int)pcStack_c < 4; pcStack_c = (char *)((int)pcStack_c + 1)) {
        pcStack_6 = (char *)((int)pcStack_c * 0x29 + -0x52cc);
        pcStack_8 = (char *)*(undefined2 *)
                             (*(char *)((int)pcStack_c * 0x29 + -0x52aa) * 2 + *(int *)0x1a90);
        pcStack_a = (char *)0x627f;
        pcStack_c = local_8c;
        puStack_e = (undefined1 *)0xbf;
        uStack_10 = 0xdf74;
        func_0x000032d0();
        pcStack_6 = local_8c;
        pcStack_8 = (char *)0x1d;
        pcStack_a = (char *)0x6285;
        pcStack_c = (char *)0x6285;
        puStack_e = (undefined1 *)0xbf;
        uStack_10 = 0xdf89;
        func_0x000012e2();
        pcStack_6 = (char *)(uint)*(byte *)((int)pcStack_c + -0x4452);
        pcStack_8 = (char *)0x628a;
        pcStack_c = (char *)0xbf;
        puStack_e = (undefined1 *)0xdfa1;
        func_0x000012e2();
        pcStack_6 = (char *)(uint)*(byte *)((int)pcStack_c + -0x444e);
        pcStack_8 = (char *)0x6290;
        pcStack_c = (char *)0xbf;
        puStack_e = (undefined1 *)0xdfb9;
        func_0x000012e2();
        pcStack_6 = (char *)-(*(byte *)((int)pcStack_c + -0x444a) - 100);
        pcStack_8 = (char *)0x6296;
        pcStack_c = (char *)0xbf;
        puStack_e = (undefined1 *)0xdfd6;
        func_0x000012e2();
        if ((*(byte *)((int)pcStack_c + -0x4456) & 0x10) == 0) {
          if ((*(byte *)((int)pcStack_c + -0x4456) & 8) == 0) {
            if ((*(byte *)((int)pcStack_c + -0x4456) & 0x20) == 0) {
              pcStack_6 = (char *)0x62ac;
              pcStack_8 = local_8c;
              pcStack_a = (char *)0xbf;
              pcStack_c = (char *)0xe037;
              func_0x00002dc6();
            }
            else {
              pcStack_6 = (char *)0x62a4;
              pcStack_8 = local_8c;
              pcStack_a = (char *)0xbf;
              pcStack_c = (char *)0xe024;
              func_0x00002dc6();
            }
          }
          else {
            pcStack_6 = (char *)0x62a0;
            pcStack_8 = local_8c;
            pcStack_a = (char *)0xbf;
            pcStack_c = (char *)0xe00a;
            func_0x00002dc6();
          }
        }
        else {
          pcStack_6 = (char *)0x629c;
          pcStack_8 = local_8c;
          pcStack_a = (char *)0xbf;
          pcStack_c = (char *)0xdff0;
          func_0x00002dc6();
        }
        if (((*(byte *)((int)pcStack_c + -0x4456) & 0x18) == 0) &&
           ((*(byte *)((int)pcStack_c + -0x4456) & 4) != 0)) {
          pcStack_6 = (char *)0x62b1;
          pcStack_8 = local_8c;
          pcStack_a = (char *)0xbf;
          pcStack_c = (char *)0xe058;
          func_0x00002d86();
        }
        pcStack_6 = local_8c;
        pcStack_8 = (char *)0x62ba;
        pcStack_c = (char *)0xbf;
        iVar3 = 0xbf;
        puStack_e = (undefined1 *)0xe06b;
        func_0x000012e2();
        if (pcStack_8 == (char *)0x0) {
          pcStack_6 = (char *)0x1;
          pcStack_8 = pcStack_c;
          pcStack_a = local_8c;
          pcStack_c = (char *)0xbf;
          iVar3 = 0x1ab5;
          puStack_e = (undefined1 *)0xe089;
          pcStack_6 = (char *)func_0x0001b36e();
        }
        else {
          pcStack_6 = (char *)0x62c4;
        }
        pcStack_8 = (char *)0x62c5;
        puStack_e = (undefined1 *)0xe098;
        pcStack_c = (char *)iVar3;
        func_0x000012e2();
      }
      pcStack_6 = (char *)0x62c9;
      pcStack_8 = pcStack_a;
      pcStack_a = (char *)0xbf;
      pcStack_c = (char *)0xe0a9;
      func_0x000012e2();
    }
    pcStack_6 = (char *)0x62cc;
    pcStack_8 = pcStack_a;
    pcStack_a = (char *)0xbf;
    pcStack_c = (char *)0xe0b7;
    func_0x000012e2();
    pcStack_6 = (char *)0x0;
    for (pcStack_c = (char *)0x0; (int)pcStack_c < 0x50; pcStack_c = (char *)((int)pcStack_c + 1)) {
      bVar2 = *(char *)((int)pcStack_c / 2 + -0x4446) >> (-(((uint)pcStack_c & 1) != 0) & 4U);
      puStack_e = (undefined1 *)(bVar2 & 0xf);
      puVar1 = puStack_e;
      if ((((bVar2 & 0xf) == 0) || (5 < puStack_e)) && (puStack_e != (undefined1 *)0x7)) {
        local_8c[(int)pcStack_c] = '\0';
      }
      else {
        local_8c[(int)pcStack_c] = (char)puStack_e;
        puStack_e = puVar1;
        pcStack_6 = (char *)((int)pcStack_6 + 1);
      }
    }
    for (pcStack_c = (char *)0x0; (int)pcStack_c < 0x50; pcStack_c = (char *)((int)pcStack_c + 1)) {
      puStack_e = (undefined1 *)(int)local_8c[(int)pcStack_c];
      if ((int)local_8c[(int)pcStack_c] != 0) {
        pcStack_6 = (char *)((int)pcStack_c * 0x20 + -0x5d71);
        pcStack_8 = (char *)0x62df;
        pcStack_c = (char *)0xbf;
        puStack_e = (undefined1 *)0xe153;
        func_0x000012e2();
        if (puStack_e == (undefined1 *)0x1) {
          pcStack_6 = (char *)0xacb6;
          pcStack_8 = (char *)*(undefined2 *)(*(char *)0xad0a * 2 + *(int *)0x1a90);
          pcStack_a = (char *)0x62f5;
          pcStack_c = (char *)0x62f5;
          puStack_e = (undefined1 *)0xbf;
          uStack_10 = 0xe178;
          func_0x000012e2();
        }
        else if (puStack_e == (undefined1 *)0x7) {
          pcStack_6 = (char *)0x62fb;
          pcStack_8 = pcStack_a;
          pcStack_a = (char *)0xbf;
          pcStack_c = (char *)0xe18f;
          func_0x000012e2();
        }
        else {
          pcStack_6 = (char *)((int)puStack_e * 0x29 + -0x531e);
          pcStack_8 = (char *)*(undefined2 *)
                               (*(char *)((int)puStack_e * 0x29 + -0x52fc) * 2 + *(int *)0x1a90);
          pcStack_a = (char *)0x630a;
          pcStack_c = (char *)0x630a;
          puStack_e = (undefined1 *)0xbf;
          uStack_10 = 0xe1ba;
          func_0x000012e2();
        }
        pcStack_6 = (char *)0x6310;
        pcStack_8 = pcStack_a;
        pcStack_a = (char *)0xbf;
        pcStack_c = (char *)0xe1c8;
        func_0x000012e2();
      }
    }
    pcStack_6 = pcStack_a;
    pcStack_8 = (char *)0xbf;
    pcStack_a = (char *)0xe1d6;
    func_0x000011e6();
    return;
  }
  return;
}
