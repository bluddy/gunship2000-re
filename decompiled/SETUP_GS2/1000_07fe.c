/* SETUP.GS2 1000:07fe undefined FUN_1000_07fe(void) */
undefined2 __cdecl16far
FUN_1000_07fe(undefined2 ***param_1,undefined2 ***param_2,undefined2 ***param_3,
             undefined2 ***param_4,undefined2 ***param_5,undefined2 ***param_6,undefined2 ***param_7
             ,int param_8)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 ***local_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x1000;
  local_6 = (undefined2 ***)0x809;
  FUN_111d_02c6();
  do {
    local_4 = (undefined2 ***)0xb;
    local_6 = (undefined2 ***)0x24;
    FUN_1386_00b2((int)param_5 + 0xb,2,0x18,10);
    local_4 = param_6;
    local_6 = (undefined2 ***)0x1386;
    iVar1 = FUN_1000_0c7a();
    if (iVar1 == 0) {
      local_4 = param_5;
      local_6 = (undefined2 ***)0x1386;
      FUN_130f_000e();
      local_4 = (undefined2 ***)0x81c;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = param_1;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = (undefined2 ***)0x84b;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      if (param_8 != 0) {
        local_4 = (undefined2 ***)0x84e;
        local_6 = (undefined2 ***)0x130f;
        FUN_130f_048a();
      }
    }
    else {
      local_4 = param_5 + 2;
      local_6 = (undefined2 ***)0x1386;
      FUN_130f_000e();
      local_4 = (undefined2 ***)0x7d7;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = param_1;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = (undefined2 ***)0x7f3;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
    }
    local_4 = (undefined2 ***)((int)param_5 + 0xb);
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_000e();
    local_4 = (undefined2 ***)0x86f;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = param_2;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = (undefined2 ***)0x876;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = param_7;
    local_6 = param_6;
    iVar1 = FUN_1000_0b2c(0xd54,0xd56);
    if (iVar1 != 0) {
      local_4 = (undefined2 ***)0x130f;
      local_6 = (undefined2 ***)0x904;
      FUN_1386_007c();
      return 1;
    }
    local_4 = &local_6;
    local_6 = &local_4;
    FUN_130f_06f2();
    local_4 = (undefined2 ***)((int)param_5 + 9);
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_000e();
    local_6 = (undefined2 ***)((int)local_6 + -1);
    local_4 = local_6;
    FUN_130f_037e();
    local_4 = local_6 + -1;
    local_6 = (undefined2 ***)((int)local_6 + 0x1d);
    FUN_130f_00d2();
    local_4 = param_7;
    local_6 = param_6;
    FUN_1000_0ba6();
    local_4 = (undefined2 ***)((int)param_5 + 0xb);
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_000e();
    local_4 = (undefined2 ***)0x89f;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = param_2;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = (undefined2 ***)0x8a6;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = param_3;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = (undefined2 ***)0x8ab;
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_048a();
    local_4 = param_7;
    local_6 = param_6;
    iVar1 = FUN_1000_0b2c(0xd50,0xd52);
    if (iVar1 != 0) {
      local_4 = (undefined2 ***)0x130f;
      local_6 = (undefined2 ***)0x9c4;
      FUN_1386_007c();
      return 1;
    }
    local_4 = &local_6;
    local_6 = &local_4;
    FUN_130f_06f2();
    local_4 = (undefined2 ***)((int)param_5 + 9);
    local_6 = (undefined2 ***)0x130f;
    FUN_130f_000e();
    local_6 = (undefined2 ***)((int)local_6 + -1);
    local_4 = local_6;
    FUN_130f_037e();
    local_4 = local_6 + -1;
    local_6 = (undefined2 ***)((int)local_6 + 0x1d);
    FUN_130f_00d2();
    local_4 = param_7;
    local_6 = param_6;
    FUN_1000_0ba6();
    if (((((uint)param_6 & 5) == 0) || (*(int *)0xd50 < *(int *)0xd54)) &&
       ((((uint)param_6 & 10) == 0 || (*(int *)0xd52 < *(int *)0xd56)))) {
      local_4 = (undefined2 ***)((int)param_5 + 0xb);
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_000e();
      local_4 = (undefined2 ***)0x8ca;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = param_2;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = (undefined2 ***)0x8d1;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = param_4;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = (undefined2 ***)0x8d6;
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_048a();
      local_4 = param_7;
      local_6 = param_6;
      iVar1 = FUN_1000_0b2c(0xd58,0xd5a);
      if (iVar1 != 0) {
        local_4 = (undefined2 ***)0x130f;
        local_6 = (undefined2 ***)0xaa5;
        FUN_1386_007c();
        return 1;
      }
      local_4 = &local_6;
      local_6 = &local_4;
      FUN_130f_06f2();
      local_4 = (undefined2 ***)((int)param_5 + 9);
      local_6 = (undefined2 ***)0x130f;
      FUN_130f_000e();
      local_6 = (undefined2 ***)((int)local_6 + -1);
      local_4 = local_6;
      FUN_130f_037e();
      local_4 = local_6 + -1;
      local_6 = (undefined2 ***)((int)local_6 + 0x1d);
      FUN_130f_00d2();
      local_4 = param_7;
      local_6 = param_6;
      FUN_1000_0ba6();
      if (((((uint)param_6 & 5) == 0) || (*(int *)0xd54 < *(int *)0xd58)) &&
         ((((uint)param_6 & 10) == 0 || (*(int *)0xd56 < *(int *)0xd5a)))) {
        local_4 = (undefined2 ***)0x130f;
        local_6 = (undefined2 ***)0xb23;
        FUN_1386_007c();
        return 0;
      }
    }
    local_4 = (undefined2 ***)0x130f;
    local_6 = (undefined2 ***)0x811;
    FUN_1386_007c();
  } while( true );
}
