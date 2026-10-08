/* GS2.GS2 137f:1f3a undefined FUN_137f_1f3a(void) */
void __cdecl16far FUN_137f_1f3a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffe;
  uVar1 = *(undefined2 *)0xf0;
  *(undefined2 *)0xf0 = 199;
  FUN_137f_204e();
  FUN_137f_2275(param_1,param_2,param_3);
  thunk_EXT_FUN_0000_0000(0x137f);
  thunk_EXT_FUN_0000_0000
            (0x137f,*(undefined2 *)(puVar2 + 6),*(undefined2 *)(puVar2 + 8),
             *(undefined2 *)(puVar2 + 10),*(undefined2 *)(puVar2 + 0xe));
  *(undefined2 *)0xf0 = uVar1;
  return;
}
