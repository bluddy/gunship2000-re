/* GS.GS2 2000:e6ec undefined FUN_2000_e6ec(void) */
void __cdecl16far FUN_2000_e6ec(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DI;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  char cVar8;
  undefined2 uVar9;
  uint uVar10;
  
  uVar6 = (undefined1)((uint)unaff_DI >> 8);
  func_0x00000eb0();
  puVar3 = (undefined2 *)func_0x00015c98(0xbf,*(int *)0x98fe + -1);
  uVar9 = *puVar3;
  uVar7 = puVar3[1];
  uVar1 = *(undefined1 *)(puVar3 + 2);
  iVar4 = (int)(char)((uint)uVar7 >> 8);
  cVar8 = (char)uVar9;
  *(char *)(iVar4 + -0x65a9) = cVar8;
  *(undefined1 *)(iVar4 + -0x659a) = 6;
  *(int *)(iVar4 * 2 + -0x65a0) = (int)*(char *)0x9aab * (int)(CONCAT22(uVar7,uVar9) >> 8);
  puVar3 = (undefined2 *)func_0x00015cc4(0x1581,(int)cVar8,uVar7,CONCAT11(uVar6,uVar1));
  uVar9 = puVar3[1];
  uVar10 = (uint)*(byte *)(puVar3 + 2);
  iVar4 = 0;
  do {
    if (*(int *)0xbc3e < iVar4) {
LAB_2000_e7a0:
      FUN_2000_d678();
      FUN_2000_dbd6();
      FUN_2000_d7a4(0,uVar9,uVar10);
      FUN_2000_dbb2();
      return;
    }
    uVar7 = (undefined2)((ulong)*(undefined4 *)0xbc38 >> 0x10);
    iVar5 = (int)*(undefined4 *)0xbc38;
    if (*(char *)(iVar4 * 0xd6 + iVar5) == (char)*puVar3) {
      uVar2 = *(uint *)(iVar4 * 0xd6 + iVar5 + 4);
      if ((uVar2 & 0x4000) != 0) {
        if ((uVar2 & 0x100) == 0) {
          *(undefined1 *)0x9a77 = 2;
        }
        else {
          *(undefined1 *)0x9a77 = 1;
        }
        *(undefined2 *)((char)((uint)uVar9 >> 8) * 2 + -0x65a0) = 1;
      }
      goto LAB_2000_e7a0;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}
