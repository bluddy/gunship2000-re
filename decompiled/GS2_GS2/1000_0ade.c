/* GS2.GS2 1000:0ade undefined FUN_1000_0ade(void) */
void __cdecl16far FUN_1000_0ade(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  
  if (*(char *)0xde != '\0') {
    thunk_EXT_FUN_0000_0000(0x1000,0x40);
  }
  uVar5 = *(undefined2 *)0x3b8c;
  *(int *)0x3b8c = *(int *)0x3b8c + 0x20;
  uVar6 = *(undefined2 *)0x1332;
  uVar1 = *(undefined2 *)0x1334;
  uVar2 = *(undefined2 *)0x1336;
  uVar3 = *(undefined2 *)0x1338;
  uVar4 = *(undefined2 *)0x133c;
  *(undefined1 *)0x133e = 0;
  uVar8 = 0x17e0;
  FUN_17e0_0050(0xc);
  iVar7 = FUN_1000_09fc(0x20,0x10c,0x3a29,0,0);
  if (iVar7 == 0) {
    *(undefined2 *)0x3bc6 = *(undefined2 *)0x1332;
    *(undefined2 *)0x3bc8 = *(undefined2 *)0x1334;
    if ((*(byte *)0x593d & 0x20) == 0) {
      *(undefined2 *)0x3bd2 = *(undefined2 *)0x1336;
      *(undefined2 *)0x3bd4 = *(undefined2 *)0x1338;
    }
    else {
      *(undefined2 *)0x3bd2 = *(undefined2 *)0x1336;
      *(undefined2 *)0x3bd8 = *(undefined2 *)0x1338;
    }
    uVar8 = 0x171d;
    FUN_171d_07ec(0x3bc2);
  }
  *(undefined2 *)0x1332 = uVar6;
  *(undefined2 *)0x1334 = uVar1;
  *(undefined2 *)0x1336 = uVar2;
  *(undefined2 *)0x1338 = uVar3;
  *(undefined2 *)0x133c = uVar4;
  *(undefined1 *)0x133e = 1;
  if (*(char *)0xde != '\0') {
    thunk_EXT_FUN_0000_0000(uVar8,0x41);
  }
  *(uint *)0x2d02 = (uint)*(byte *)0xde;
  *(undefined2 *)0x3b8c = uVar5;
  return;
}
