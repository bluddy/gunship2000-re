/* GS.GS2 10bf:388c undefined FUN_10bf_388c(void) */
void __cdecl16near FUN_10bf_388c(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 in_AX;
  char cVar3;
  byte bVar5;
  uint in_DX;
  byte bVar6;
  uint in_BX;
  undefined2 unaff_DS;
  bool bVar7;
  bool bVar8;
  uint uStack_8;
  uint uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  byte bVar4;
  
  uStack_4 = in_AX;
  uStack_8 = in_DX;
  uStack_6 = in_BX;
  if (in_BX == 0) {
    bVar4 = (byte)((uint)in_AX >> 8);
    cVar3 = bVar4 - 0x10;
    uStack_4 = CONCAT11(cVar3,(char)in_AX);
    if (bVar4 < 0x10 || cVar3 == '\0') goto LAB_10bf_38ff;
    uStack_8 = 0;
    uStack_6 = in_DX;
    if (in_DX == 0) goto LAB_10bf_38ff;
  }
  if ((char)(uStack_6 >> 8) == '\0') {
    bVar4 = (byte)((uint)uStack_4 >> 8);
    cVar3 = bVar4 - 8;
    uStack_4 = CONCAT11(cVar3,(char)uStack_4);
    if (bVar4 < 8 || cVar3 == '\0') goto LAB_10bf_38ff;
    uVar2 = uStack_8 >> 8;
    uStack_8 = uStack_8 << 8;
    uStack_6 = CONCAT11((char)uStack_6,(char)uVar2);
  }
  if (-1 < (int)uStack_6) {
    do {
      cVar3 = (char)((uint)uStack_4 >> 8) + -1;
      uStack_4 = CONCAT11(cVar3,(char)uStack_4);
      if (cVar3 == '\0') goto LAB_10bf_38ff;
      bVar7 = (int)uStack_8 < 0;
      uStack_8 = uStack_8 << 1;
      bVar8 = (int)uStack_6 < 0;
      uStack_6 = uStack_6 << 1 | (uint)bVar7;
    } while (bVar8 == (int)uStack_6 < 0);
  }
  do {
    bVar4 = (byte)((uint)uStack_4 >> 8);
    if (*(char *)0x6eb2 == '\0') {
      bVar5 = (byte)uStack_8;
      bVar6 = (byte)(uStack_8 >> 8);
      if ((0x80 < bVar5) || ((0x7f < bVar5 && ((uStack_8 & 0x100) != 0)))) {
        uStack_8 = CONCAT11(bVar6 + 1,bVar5);
        uVar2 = (uint)(0xfe < bVar6);
        bVar7 = CARRY2(uStack_6,uVar2);
        uStack_6 = uStack_6 + uVar2;
        if ((bVar7) && (uStack_4 = CONCAT11(bVar4 + 1,(char)uStack_4), (byte)(bVar4 + 1) == -1)) {
          FUN_10bf_5198();
          return;
        }
      }
      bVar4 = (byte)((uint)uStack_4 >> 8);
      if (bVar4 != 0) {
        puVar1 = (undefined2 *)*(int *)0x6ea8;
        puVar1[1] = CONCAT11(bVar4 >> 1 | (byte)(((uint)((char)uStack_4 < '\0') << 0xf) >> 8),
                             (byte)(((uint)bVar4 << 8) >> 1) | (byte)(uStack_6 >> 8) & 0x7f);
        *puVar1 = CONCAT11((char)uStack_6,(char)(uStack_8 >> 8));
        return;
      }
LAB_10bf_38ff:
      if (*(char *)0x6eb2 == '\0') {
        puVar1 = (undefined2 *)*(undefined2 *)0x6ea8;
        puVar1[1] = 0;
        *puVar1 = 0;
        return;
      }
      uStack_4 = 0;
      uStack_6 = 0;
      uStack_8 = 0;
      *(undefined1 *)0x6eb2 = 0;
LAB_10bf_3a90:
      uStack_2 = *(undefined2 *)0x6ea8;
      *(undefined2 *)0x6ea8 = 0x6eb9;
      FUN_10bf_38ba();
      *(undefined2 *)0x6eb5 = 0;
      *(undefined2 *)0x6eb7 = 0;
    }
    else {
      *(undefined1 *)0x6eb2 = 0;
      if (((*(char *)0x6eb4 != '\0') && (bVar4 < (byte)(*(char *)0x6eb4 - 0xeU))) || (bVar4 == 0))
      goto LAB_10bf_3a90;
      uStack_2 = *(undefined2 *)0x6ea8;
      *(undefined2 *)0x6ea8 = 0x6eb5;
      FUN_10bf_38ba();
      *(undefined2 *)0x6ea8 = 0x6eb9;
      FUN_10bf_388c();
    }
    *(undefined2 *)0x6ea8 = uStack_2;
  } while( true );
}
