/* GS.GS2 3000:2ce8 undefined FUN_3000_2ce8(void) */
void __cdecl16far FUN_3000_2ce8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  puVar6 = (undefined2 *)0xc4e0;
  puVar5 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  uVar3 = FUN_3000_3a48();
  *(undefined2 *)0xc4e4 = uVar3;
  FUN_3000_2464(0xc4ea,*(undefined2 *)0xc4e6,*(undefined2 *)0xc4e8);
  func_0x0000c8c0(0xbf,0x8a4,0xc6,0x16,0x78,5);
  func_0x0000c928(0xc87);
  func_0x000032d0(0xc87,&stack0xfff8,0x2d4f,*(int *)0xc4e6 / 0x60);
  func_0x0000ca66(0xbf,0x2d59,*(undefined2 *)0x99c,*(undefined2 *)0x99e);
  FUN_3000_24c4(*(undefined2 *)0xc4e2);
  FUN_3000_1206();
  return;
}
