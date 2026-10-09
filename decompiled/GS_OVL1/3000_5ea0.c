/* GS.GS2 3000:5ea0 undefined FUN_3000_5ea0(void) */
void __cdecl16far FUN_3000_5ea0(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  int iVar3;
  
  func_0x00000eb0();
  *(undefined2 *)0xa246 = 0xffff;
  *(undefined2 *)0xc348 = 0;
  *(undefined2 *)0xc026 = 0;
  *(undefined2 *)0xc336 = 0;
  *(undefined2 *)0xc018 = 0;
  *(undefined2 *)0xc01c = 0;
  *(undefined2 *)0xc022 = 0;
  *(undefined2 *)0xc020 = 0;
  *(undefined2 *)0xc01e = 0;
  *(undefined1 *)0xe291 = 0;
  *(undefined1 *)0xe28a = 0;
  *(undefined2 *)0xc01a = 0;
  *(undefined2 *)0xc02a = 0;
  *(undefined2 *)0xc028 = 0;
  for (iVar3 = 0; iVar3 < 0xc; iVar3 = iVar3 + 1) {
    *(undefined1 *)(iVar3 * 10 + 0x2b98) = 0;
  }
  *(undefined1 *)0x2b98 = 0x47;
  for (iVar3 = 0; iVar3 < 0x15; iVar3 = iVar3 + 1) {
    *(undefined1 *)(iVar3 * 9 + 0x297e) = 0;
  }
  *(undefined1 *)0x2a20 = 0xff;
  for (iVar3 = 0; iVar3 < 0xf; iVar3 = iVar3 + 1) {
    *(undefined1 *)(iVar3 * 9 + 0x2a3c) = 0;
  }
  FUN_3000_7742();
  *(undefined2 *)0xc378 = 0xa0;
  *(undefined2 *)0xc388 = 0xa0;
  *(undefined2 *)0xc37a = 0x80;
  *(undefined2 *)0xc38a = 0x80;
  *(undefined2 *)0xc354 = 0xe4;
  *(undefined2 *)0xc38c = 0xe4;
  *(undefined2 *)0xc35a = 0x59;
  *(undefined2 *)0xc35c = 0x41;
  uVar1 = *(undefined2 *)0x721e;
  *(undefined2 *)0xbc8e = *(undefined2 *)0x721c;
  *(undefined2 *)0xbc90 = uVar1;
  uVar1 = *(undefined2 *)0x7222;
  *(undefined2 *)0xbc92 = *(undefined2 *)0x7220;
  *(undefined2 *)0xbc94 = uVar1;
  uVar1 = *(undefined2 *)0x7226;
  *(undefined2 *)0xbc96 = *(undefined2 *)0x7224;
  *(undefined2 *)0xbc98 = uVar1;
  uVar1 = *(undefined2 *)0x722a;
  *(undefined2 *)0xbc9a = *(undefined2 *)0x7228;
  *(undefined2 *)0xbc9c = uVar1;
  *(undefined2 *)0xbc70 = 9999;
  *(undefined2 *)0xc368 = 9999;
  *(undefined2 *)0xc516 = 9999;
  *(undefined2 *)0xc50a = 9999;
  *(undefined2 *)0xc4f6 = 9999;
  *(undefined2 *)0xc4e6 = 9999;
  *(undefined2 *)0xc4d8 = 9999;
  *(undefined2 *)0xc36e = 2;
  *(undefined2 *)0xc364 = 3;
  *(undefined2 *)0xc37c = 3;
  *(undefined2 *)0xc366 = 3;
  *(undefined2 *)0xc386 = 3;
  *(undefined2 *)0xc356 = 3;
  *(undefined2 *)0xc4ce = 3;
  *(undefined2 *)0xbc76 = 3;
  uVar2 = func_0x0000eee8(0xbf,9);
  *(undefined2 *)0xc370 = (int)uVar2;
  *(undefined2 *)0xc372 = (int)((ulong)uVar2 >> 0x10);
  uVar2 = func_0x0000eee8(0xdea,9);
  *(undefined2 *)0xbc78 = (int)uVar2;
  *(undefined2 *)0xbc7a = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)0xc34e = 0;
  *(undefined2 *)0xc350 = 4;
  *(undefined2 *)0xc352 = 0;
  *(undefined2 *)0xc34c = 0;
  *(undefined2 *)0xc34a = 0;
  *(undefined2 *)0xbc88 = *(undefined2 *)0xbc32;
  *(undefined1 *)0xe289 = 1;
  *(undefined2 *)0xc4d0 = 0x3ff;
  *(undefined1 *)0xe290 = 0x50;
  *(undefined2 *)0xc358 = 0xc338;
  func_0x0001664a(0xdea);
  uVar1 = func_0x000165d3(0x1658,2,0,0xbe,6,10);
  *(undefined2 *)(*(int *)0xc358 + 0xd) = uVar1;
  func_0x000165f6(0x1658);
  *(undefined2 *)(*(int *)0xc358 + 1) = 0xa0;
  *(undefined2 *)(*(int *)0xc358 + 3) = 100;
  func_0x0000ef70(0x1658,0,0,0x140,200);
  func_0x0000f246(0xef4,*(undefined2 *)(*(int *)0xc358 + 1),*(undefined2 *)(*(int *)0xc358 + 3),0);
  FUN_3000_15c6(0);
  return;
}
