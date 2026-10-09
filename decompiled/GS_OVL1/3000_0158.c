/* GS.GS2 3000:0158 undefined FUN_3000_0158(void) */
int __cdecl16far FUN_3000_0158(undefined2 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_a;
  undefined2 ****local_8;
  int *piStack_6;
  
  piStack_6 = (int *)0x163;
  func_0x00000eb0();
  piStack_6 = (int *)0x7f;
  local_8 = (undefined2 ****)0x9f;
  local_a = 3;
  iVar1 = func_0x0002118e(0xbf,*param_3,*param_4,3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)0xc01c != 0) {
      piStack_6 = (int *)0x20f4;
      local_8 = (undefined2 ****)0x1a2;
      func_0x0000582f();
      piStack_6 = (int *)0xbf;
      local_8 = (undefined2 ****)0x1ab;
      func_0x00005ba0();
      piStack_6 = (int *)0xbf;
      local_8 = (undefined2 ****)0x1b0;
      func_0x000059f5();
      piStack_6 = (int *)0xbf;
      local_8 = (undefined2 ****)0x1c6;
      func_0x0000582f();
      piStack_6 = (int *)0xbf;
      local_8 = (undefined2 ****)0x1cf;
      func_0x00005ba0();
      piStack_6 = (int *)0xbf;
      uVar2 = 0xbf;
      local_8 = (undefined2 ****)0x1d4;
      func_0x000059f5();
      piStack_6 = &local_a;
      local_8 = &local_8;
      local_a = 0xbf;
      (*(code *)*(undefined2 *)0xc00e)();
      if (*param_2 == 1) {
        piStack_6 = (int *)0xbf;
        local_8 = (undefined2 ****)0x1f2;
        iVar1 = func_0x0003fa76();
        if ((iVar1 != 0) && (10 < *(int *)0xc01c)) {
          piStack_6 = (int *)0xbf;
          uVar2 = 0x20f4;
          local_8 = (undefined2 ****)0x202;
          func_0x00026cfc();
        }
      }
      local_8 = (undefined2 ****)0x207;
      piStack_6 = (int *)uVar2;
      func_0x000219cc();
      return -1;
    }
    if (*param_2 == 2) {
      if (*(int *)0xc4d8 != 9999) {
        piStack_6 = (int *)0x6;
        local_8 = (undefined2 ****)0x6;
        local_a = *param_4 + -7;
        func_0x0000582f(0x20f4,*param_3 + -7);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,uVar2);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        iVar1 = func_0x0002118e(0xbf,uVar2);
        if (iVar1 != 0) {
          piStack_6 = (int *)0x0;
          local_8 = (undefined2 ****)0xc4d2;
          local_a = 0x20f4;
          func_0x00022f9c();
          piStack_6 = (int *)0x20f4;
          local_8 = (undefined2 ****)0x284;
          func_0x0003da46();
          return -1;
        }
      }
      if (*(int *)0xc4e6 != 9999) {
        piStack_6 = (int *)0x6;
        local_8 = (undefined2 ****)0x6;
        local_a = *param_4 + -7;
        func_0x0000582f(0x20f4,*param_3 + -7);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,uVar2);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        iVar1 = func_0x0002118e(0xbf,uVar2);
        if (iVar1 != 0) {
          piStack_6 = (int *)0xa;
          local_8 = (undefined2 ****)0xc4e0;
          local_a = 0x20f4;
          func_0x00022f9c();
          return -1;
        }
      }
      if (*(int *)0xc4f6 != 9999) {
        piStack_6 = (int *)0x6;
        local_8 = (undefined2 ****)0x6;
        local_a = *param_4 + -7;
        func_0x0000582f(0x20f4,*param_3 + -7);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,uVar2);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        iVar1 = func_0x0002118e(0xbf,uVar2);
        if (iVar1 != 0) {
          piStack_6 = (int *)0x0;
          local_8 = (undefined2 ****)0xc368;
          local_a = -0x3b10;
          func_0x00022b4c(0x20f4);
          if (*(int *)0xc375 % 2 == 0) {
            piStack_6 = (int *)*(undefined2 *)0x9fa;
            local_8 = (undefined2 ****)*(undefined2 *)0x9f8;
            local_a = 0x20f4;
            func_0x000212b0();
          }
          else {
            piStack_6 = (int *)*(undefined2 *)0x9f6;
            local_8 = (undefined2 ****)*(undefined2 *)0x9f4;
            local_a = 0x20f4;
            func_0x000212b0();
          }
          return -1;
        }
      }
      if (*(int *)0xc50a != 9999) {
        piStack_6 = (int *)0x6;
        local_8 = (undefined2 ****)0x6;
        local_a = *param_4 + -7;
        func_0x0000582f(0x20f4,*param_3 + -7);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,uVar2);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        iVar1 = func_0x0002118e(0xbf,uVar2);
        if (iVar1 != 0) {
          piStack_6 = (int *)0x1;
          local_8 = (undefined2 ****)0xbc70;
          local_a = -0x3afc;
          func_0x00022b4c(0x20f4);
          if (*(int *)0xbc7d % 2 == 0) {
            piStack_6 = (int *)*(undefined2 *)0x9fa;
            local_8 = (undefined2 ****)*(undefined2 *)0x9f8;
            local_a = 0x20f4;
            func_0x000212b0();
          }
          else {
            piStack_6 = (int *)*(undefined2 *)0x9f6;
            local_8 = (undefined2 ****)*(undefined2 *)0x9f4;
            local_a = 0x20f4;
            func_0x000212b0();
          }
          return -1;
        }
      }
      if (*(int *)0xc368 != 9999) {
        piStack_6 = (int *)0x6;
        local_8 = (undefined2 ****)0x6;
        local_a = *param_4 + -7;
        func_0x0000582f(0x20f4,*param_3 + -7);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,uVar2);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        iVar1 = func_0x0002118e(0xbf,uVar2);
        if ((iVar1 != 0) &&
           ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc4f0 * 0x27 + 0x24) & 2) == 0)) {
          piStack_6 = (int *)0x0;
          local_8 = (undefined2 ****)0xc368;
          local_a = 0x20f4;
          func_0x00022c94();
          piStack_6 = (int *)0x20f4;
          local_8 = (undefined2 ****)0x4de;
          func_0x000219cc();
          return -1;
        }
      }
      if (*(int *)0xbc70 != 9999) {
        piStack_6 = (int *)0x6;
        local_8 = (undefined2 ****)0x6;
        local_a = *param_4 + -7;
        func_0x0000582f(0x20f4,*param_3 + -7);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        func_0x0000582f(0xbf,uVar2);
        func_0x00005ba0(0xbf);
        uVar2 = func_0x000059f5(0xbf);
        iVar1 = func_0x0002118e(0xbf,uVar2);
        if ((iVar1 != 0) &&
           ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc504 * 0x27 + 0x24) & 2) == 0)) {
          piStack_6 = (int *)0x1;
          local_8 = (undefined2 ****)0xbc70;
          local_a = 0x20f4;
          func_0x00022c94();
          piStack_6 = (int *)0x20f4;
          local_8 = (undefined2 ****)0x564;
          func_0x000219cc();
          iVar1 = -1;
        }
      }
    }
  }
  return iVar1;
}
