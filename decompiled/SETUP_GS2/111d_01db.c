/* SETUP.GS2 111d:01db undefined FUN_111d_01db(void) */
void __cdecl16far FUN_111d_01db(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_111d_028b();
  FUN_111d_028b();
  if (*(int *)0xb96 == -0x292a) {
    (*(code *)*(undefined2 *)0xb9c)();
  }
  FUN_111d_028b();
  FUN_111d_028b();
  FUN_111d_02ea();
  FUN_111d_025e();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}
