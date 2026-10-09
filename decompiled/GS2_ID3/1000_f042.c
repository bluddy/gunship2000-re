/* GS2.GS2 1000:f042 undefined FUN_1000_f042(void) */
void __cdecl16far FUN_1000_f042(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uStack_a;
  
  if (((((*(byte *)0x3be4 & 0x10) != 0) && (*(char *)0xe0 != '\0')) && ((*(byte *)0xda & 7) == 0))
     && ((*(int *)0xab9 != 0 && (*(int *)0xb0b == 1)))) {
    iVar6 = *(int *)0xab9 * 0x18;
    if (((*(byte *)(iVar6 + 0x256a) & 0x30) == 0) &&
       ((*(char *)(iVar6 + 0x256b) == '\x01' && (*(char *)(*(int *)0xac9 * 0x1a + 4) == '\0')))) {
      FUN_1000_ecee();
    }
  }
  if (((((*(byte *)0x3be4 & 8) != 0) && ((*(byte *)0x5fe & 0x40) == 0)) && (*(char *)0xe0 != '\0'))
     && ((*(byte *)0xda & 1) == 0)) {
    uStack_a = (byte *)CONCAT22(*(undefined2 *)0x333e,(byte *)0xaeb);
    if ((*(byte *)0xaeb & 0x80) == 0) {
      *(undefined2 *)0xaf9 = 0;
    }
    else if (*(int *)0x1b < 1) {
      if (*(int *)0xaf9 == 0) {
        *(undefined2 *)0xaf9 = *(undefined2 *)0x2d14;
      }
    }
    else if (*(int *)0xaf5 == 0) {
      *(int *)0x1b = *(int *)0x1b + -3;
      *(undefined2 *)0xaf5 = 10;
      puVar8 = (undefined2 *)0x35ea;
      puVar7 = (undefined2 *)0x3b98;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      uVar4 = func_0x00005f7e();
      *(undefined2 *)0x63c = uVar4;
      bVar1 = *(byte *)0xdf;
      *(int *)0x63e = (uint)bVar1 * -2;
      unaff_CS = 0x37f;
      iVar6 = func_0x00005f66(0x37f,*(undefined2 *)0xce,(uint)bVar1 * 0xc);
      *(int *)0x640 = -iVar6;
      *(undefined2 *)0x3134 = 0x3078;
      if (*(char *)0xde != '\0') {
        unaff_CS = 0x844;
        func_0x0000844b(0x37f,0x2a);
      }
    }
    if ((*uStack_a & 0x40) == 0) {
      *(undefined2 *)0xafb = 0;
    }
    else if (*(int *)0x19 < 1) {
      if (*(int *)0xafb == 0) {
        uVar5 = func_0x00005828(unaff_CS);
        *(int *)0xafb = (uVar5 & 7) + 1;
      }
    }
    else if (*(int *)0xaf7 == 0) {
      *(int *)0x19 = *(int *)0x19 + -3;
      *(undefined2 *)0xaf7 = 10;
      puVar8 = (undefined2 *)0x35ea;
      puVar7 = (undefined2 *)0x3b98;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      uVar4 = func_0x00005f7e(unaff_CS,*(undefined2 *)0xce,(uint)*(byte *)0xdf * 0xc);
      *(undefined2 *)0x63c = uVar4;
      bVar1 = *(byte *)0xdf;
      *(int *)0x63e = -(uint)bVar1;
      iVar6 = func_0x00005f66(0x37f,*(undefined2 *)0xce,(uint)bVar1 * 0xc);
      *(int *)0x640 = -iVar6;
      *(undefined2 *)0x3134 = 0x30ce;
      if (*(char *)0xde != '\0') {
        func_0x0000844b(0x37f,10);
      }
    }
    uStack_a[0] = 0;
    uStack_a[1] = 0;
  }
  return;
}
