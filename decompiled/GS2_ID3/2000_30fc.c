/* GS2.GS2 2000:30fc undefined FUN_2000_30fc(void) */
void __cdecl16far FUN_2000_30fc(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_1c [5];
  undefined2 auStack_12 [5];
  int iStack_8;
  undefined2 *puStack_6;
  undefined2 *puStack_4;
  
  auStack_12[0] = 0x40;
  auStack_12[1] = 0x20;
  auStack_12[2] = 0x80;
  auStack_12[3] = 0x60;
  *(undefined2 *)0x24 = auStack_12[*(uint *)0xda & 3];
  puStack_4 = (undefined2 *)0x12;
  iStack_8 = 0x3a14;
  puStack_6 = (undefined2 *)0x35f8;
  do {
    if (*(char *)(puStack_4 + -7) == '\0') {
      if (*(char *)((int)puStack_4 + -0xd) != '\0') {
        puVar6 = local_1c;
        puVar5 = puStack_4;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        iVar4 = 0x60;
        goto LAB_2000_31c5;
      }
    }
    else {
      puStack_6[-2] = puStack_4[-3];
      puStack_6[-1] = puStack_4[-2];
      if ((*(byte *)(puStack_4 + -8) & 3) == 0) {
        *(char *)((int)puStack_6 + 1) = *(char *)((int)puStack_6 + 1) + '\x10';
      }
      else {
        *puStack_6 = 0;
      }
      puVar6 = local_1c;
      puVar5 = puStack_4;
      for (iVar3 = 5; iVar4 = iStack_8, iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
LAB_2000_31c5:
      func_0x0000656f(unaff_CS,local_1c,iVar4);
      unaff_CS = 0x37f;
    }
    puStack_4 = puStack_4 + 0xd;
    iStack_8 = iStack_8 + 0xc;
    puStack_6 = puStack_6 + 3;
    if ((undefined2 *)0x3687 < puStack_6) {
      return;
    }
  } while( true );
}
