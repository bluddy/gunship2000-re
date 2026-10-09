/* GS2.GS2 2000:dda3 undefined FUN_2000_dda3(void) */
void __cdecl16far FUN_2000_dda3(uint param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  
  if (param_4 != 0) {
    uVar1 = *(undefined2 *)0x18cc;
    puVar2 = (undefined1 *)((param_1 >> 3) + param_2 * 0x28);
    out(0x3ce,0xa05);
    out(0x3ce,0x707);
    out(0x3ce,0x402);
    out(0x3ce,8);
    do {
      out(0x3cf,*puVar2);
      *puVar2 = 0;
      puVar2 = puVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    out(0x3cf,7);
  }
  return;
}
