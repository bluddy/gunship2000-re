/* GS2.GS2 137f:2bae undefined FUN_137f_2bae(void) */
void __cdecl16far FUN_137f_2bae(uint *param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x13ad = 0;
  *(undefined2 *)0x13af = 0;
  FUN_137f_2b6c();
  *(int *)0x1ca7 = (*param_1 & 0x1fff) - 0x1000;
  *(int *)0x1cab = (param_1[2] & 0x1fff) - 0x1000;
  uVar1 = param_1[4];
  *(uint *)0x1ca9 = uVar1;
  if (0x200 < (int)uVar1) {
    *(undefined1 *)0x1cb7 = 1;
    *(undefined2 *)0x1caf = 0x4000;
    *(undefined2 *)0x1cad = 0xc000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1cad = 0x4000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0xc000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1cad = 0xc000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0x4000;
    *(undefined2 *)0x1cad = 0xe000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1cad = 0x2000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1cad = 0;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0xc000;
    *(undefined2 *)0x1cad = 0xe000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1cad = 0x2000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1cad = 0;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0x2000;
    *(undefined2 *)0x1cad = 0xc000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0xe000;
    *(undefined2 *)0x1cad = 0xc000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0;
    *(undefined2 *)0x1cad = 0xc000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0x2000;
    *(undefined2 *)0x1cad = 0x4000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0xe000;
    *(undefined2 *)0x1cad = 0x4000;
    FUN_137f_2e8a();
    *(undefined2 *)0x1caf = 0;
    *(undefined2 *)0x1cad = 0x4000;
    FUN_137f_2e8a();
  }
  *(undefined1 *)0x1cb7 = 1;
  *(undefined2 *)0x1cad = 0xe000;
  *(undefined2 *)0x1caf = 0x2000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1cad = 0x2000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1caf = 0xe000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1cad = 0xe000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1cad = 0;
  *(undefined2 *)0x1caf = 0x2000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1caf = 0xe000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1caf = 0;
  *(undefined2 *)0x1cad = 0xe000;
  FUN_137f_2e8a();
  *(undefined2 *)0x1cad = 0x2000;
  FUN_137f_2e8a();
  *(undefined1 *)0x1cb7 = 0;
  *(undefined2 *)0x1cad = 0;
  *(undefined2 *)0x1caf = 0;
  FUN_137f_2e8a();
  uRam0001620a = 0;
  return;
}
