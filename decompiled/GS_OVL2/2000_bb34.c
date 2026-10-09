/* GS.GS2 2000:bb34 undefined FUN_2000_bb34(void) */
void __cdecl16far FUN_2000_bb34(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  puVar3 = (undefined2 *)func_0x00000b20(0xbf,1);
  puVar6 = (undefined2 *)0x98b8;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  func_0x0000c8c0(0x6f,0x8a4,*(undefined2 *)0x98ba,*(undefined2 *)0x98bc,*(undefined2 *)0x98be,
                  *(undefined2 *)0x98c0,0xffff);
  func_0x0000c980(0xc87,2);
  func_0x0000c928(0xc87,0);
  FUN_2000_a9e2(2);
  puVar3 = (undefined2 *)func_0x00000b20(0xc87,2);
  puVar6 = (undefined2 *)0x98b8;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00016658(0x6f,0x892,*(undefined2 *)0x98ba,*(undefined2 *)0x98bc,*(undefined2 *)0x98be,
                  *(undefined2 *)0x98c0,0x8a4,*(int *)0x98ba + 0x11,*(int *)0x98bc + 0x12);
  func_0x0001664a(0x1658);
  uVar4 = func_0x000165d3(0x1658,2,0,0x84,0xa5,0x16);
  func_0x000165f6(0x1658,uVar4);
  func_0x000166b1(0x1658,0x8a4,0x11,0x98,uVar4);
  func_0x000112dc(0x1658,uVar4);
  func_0x0000c980(0x112a,3);
  FUN_2000_b672(2,0x50);
  FUN_2000_b672(3,0x53);
  FUN_2000_b672(0,0x42);
  FUN_2000_b672(1,0x46);
  return;
}
