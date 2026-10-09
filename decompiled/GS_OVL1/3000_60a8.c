/* GS.GS2 3000:60a8 undefined FUN_3000_60a8(void) */
int __cdecl16far FUN_3000_60a8(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 **ppuVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 **local_a;
  undefined1 *local_8;
  undefined2 **local_6;
  
  local_6 = (undefined2 **)0x60b3;
  func_0x00000eb0();
  if (*param_1 == 2) {
    local_6 = (undefined2 **)0x60c0;
    func_0x0001b3ec();
    return *param_1;
  }
  local_6 = (undefined2 **)0x60cc;
  FUN_3000_5ea0();
  local_a = (undefined2 **)0x0;
  local_8 = (undefined1 *)*(undefined2 *)(*(int *)0xc358 + 3);
  if (*param_1 == 1) {
    local_6 = (undefined2 **)0x60f0;
    iVar2 = FUN_3000_5e14();
    if (iVar2 == 0) {
      *param_1 = 0;
      return 0;
    }
    *(undefined2 *)0xa250 = 0;
    *(undefined2 *)0xa252 = 0;
    local_6 = (undefined2 **)0x6105;
    func_0x00013acc();
    local_6 = (undefined2 **)0x6109;
    FUN_3000_5af8();
    local_6 = (undefined2 **)0x610d;
    FUN_3000_357e();
    local_6 = (undefined2 **)0x13ac;
    ppuVar3 = (undefined2 **)0xd02;
    local_8 = (undefined1 *)0x6114;
    func_0x0000dd4a();
  }
  else {
    ppuVar3 = (undefined2 **)0x1abf;
    local_6 = (undefined2 **)0x612b;
    func_0x0001b834();
  }
  local_6 = (undefined2 **)0x612f;
  FUN_3000_8012();
  *(undefined2 *)0xa246 = 1;
  local_6 = (undefined2 **)0x6139;
  FUN_3000_19cc();
  local_6 = (undefined2 **)0x613d;
  FUN_3000_10f2();
  local_8 = (undefined1 *)0x6144;
  local_6 = ppuVar3;
  func_0x0000dd2e();
  local_6 = (undefined2 **)0xd02;
  local_8 = (undefined1 *)0x614f;
  func_0x00016697();
  local_6 = (undefined2 **)*(undefined2 *)0xa54;
  local_8 = (undefined1 *)0x1658;
  local_a = (undefined2 **)0x6164;
  FUN_3000_12b0();
  uVar4 = 0x1658;
  while (*(char *)0xe28a == '\0') {
    local_6 = &local_6;
    local_8 = &stack0xfffc;
    local_a = &local_a;
    func_0x0001afe8(uVar4);
    local_6 = &local_6;
    local_8 = &stack0xfffc;
    local_a = &local_a;
    FUN_3000_3670();
    local_6 = (undefined2 **)0x61a1;
    FUN_3000_1070();
    *(undefined2 *)(*(int *)0xc358 + 1) = local_6;
    *(int *)(*(int *)0xc358 + 3) = (int)local_8;
    local_6 = (undefined2 **)0x61b9;
    FUN_3000_10f2();
    uVar4 = 0x1abf;
  }
  cVar1 = *(char *)0xe290;
  *(int *)0xbc5e = (int)cVar1;
  *param_1 = -1;
  if (*(char *)0xe28a == '\x02') {
    *param_1 = 0;
  }
  return (int)cVar1;
}
