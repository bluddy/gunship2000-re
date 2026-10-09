/* GS2.GS2 2000:e747 undefined FUN_2000_e747(void) */
void __cdecl16far FUN_2000_e747(uint param_1,int param_2,uint param_3,int param_4,byte param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 unaff_DS;
  
  uVar3 = *(undefined2 *)0x18cc;
  puVar6 = (undefined1 *)((param_1 >> 3) + param_2 * 0x28);
  out(0x3c4,0xf02);
  out(0x3ce,5);
  out(0x3ce,(uint)param_5 << 8);
  out(0x3ce,0xf01);
  uVar1 = *(undefined1 *)((param_1 & 7) + 0x3186);
  uVar2 = *(undefined1 *)((param_3 & 7) + 0x318e);
  iVar4 = (param_4 - param_2) + 1;
  out(0x3ce,8);
  do {
    out(0x3cf,uVar1);
    *puVar6 = uVar1;
    out(0x3cf,0xff);
    puVar7 = puVar6;
    for (uVar5 = ((param_3 & 0xfff8) - 1) - param_1 >> 3; puVar7 = puVar7 + 1, uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *puVar7 = 0xff;
    }
    out(0x3cf,uVar2);
    *puVar7 = uVar2;
    puVar6 = puVar6 + 0x28;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}
