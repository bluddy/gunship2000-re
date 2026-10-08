/* SETUP.GS2 1000:02f4 undefined FUN_1000_02f4(void) */
void __cdecl16far FUN_1000_02f4(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined2 unaff_DS;
  byte bVar7;
  
  FUN_111d_02c6();
  if ((*(char *)0x1d64 == '\0') &&
     (FUN_1386_005c(), *(int *)(*(int *)0x659 + (uint)*(byte *)0x658 * 0x11 + 5) == 0)) {
    iVar4 = *(int *)0x1d5e * 9;
    *(byte *)0x1d33 = -(*(int *)0x1d66 != 0) & 0x80U | *(byte *)(iVar4 + 0xc9a);
    *(int *)0x1d4e = (uint)*(byte *)(iVar4 + 0xc99) * 0x100 + (int)*(char *)(iVar4 + 0xc98);
    if (*(int *)0x1d68 == 0) {
      cVar5 = '\0';
    }
    else {
      if (*(int *)0x1d68 == 2) {
        cVar5 = ' ';
      }
      else {
        cVar5 = '\0';
      }
      cVar5 = (-(*(int *)0x1d5a != 0) & 0x10U) + cVar5 + *(char *)(*(int *)0x1d62 + 0x2dc);
    }
    *(char *)0x1d35 = cVar5;
    if (*(int *)0x1d68 == 2) {
      *(undefined2 *)0x1d44 = 0;
      *(undefined2 *)0x1d48 = 0;
      if (*(int *)0x1d62 == 4) {
        *(byte *)0x1d35 = *(byte *)0x1d35 & 0xf7;
      }
    }
    cVar5 = *(char *)0x1f76;
    cVar2 = *(char *)0x1f72;
    cVar3 = *(char *)0x1f6e;
    cVar1 = *(char *)0x1f84;
    *(byte *)0x1d34 = *(byte *)0x1d34 ^ ((-2 - *(char *)0x1d60) * ' ' ^ *(byte *)0x1d34) & 0x60;
    *(byte *)0x1d34 = *(byte *)0x1d34 ^ (cVar3 << 3 ^ *(byte *)0x1d34) & 8;
    *(byte *)0x1d34 = *(byte *)0x1d34 ^ (cVar2 << 2 ^ *(byte *)0x1d34) & 4;
    bVar6 = *(byte *)0x1d34 & 0x7f ^ cVar5 << 7;
    *(byte *)0x1d34 = bVar6;
    *(byte *)0x1d34 = *(byte *)0x1d34 ^ (bVar6 ^ *(char *)0x1f7e << 1) & 2;
    *(byte *)0x1d34 = *(byte *)0x1d34 ^ (*(byte *)0x1d34 ^ *(byte *)0x1f82) & 1;
    *(byte *)0x1d34 = *(byte *)0x1d34 ^ (*(byte *)0x1d34 ^ cVar1 << 4) & 0x10;
    *(int *)0x1d52 = (int)*(char *)(*(int *)0x1d5e * 9 + 0xca0);
    *(int *)0x1d50 = (*(int *)0x1f80 + 0x21) * 0x10;
    *(int *)0x1d54 = *(int *)0x1f74 + 2;
    *(int *)0x1d56 = *(int *)0x1f70 + 1;
    FUN_1113_000a();
  }
  if (*(uint *)0x1d60 < 2) {
    bVar6 = *(byte *)0x1d33;
  }
  else {
    bVar6 = 0x4e;
  }
  bVar7 = bVar6 & 0x7f;
  if ((bVar6 & 0x7f) == 0x44) {
    bVar7 = 0x52;
  }
  FUN_111d_01db(bVar7 | 0x60);
  return;
}
