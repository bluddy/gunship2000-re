/* GS.GS2 10bf:38ba undefined FUN_10bf_38ba(void) */
void __cdecl16near FUN_10bf_38ba(void)

{
  undefined2 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined2 in_AX;
  byte bVar4;
  byte bVar5;
  uint in_DX;
  byte bVar6;
  uint in_BX;
  undefined2 unaff_DS;
  uint uStack_8;
  uint uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = in_AX;
  uStack_8 = in_DX;
  uStack_6 = in_BX;
  do {
    bVar4 = (byte)((uint)uStack_4 >> 8);
    if (*(char *)0x6eb2 == '\0') {
      bVar5 = (byte)uStack_8;
      bVar6 = (byte)(uStack_8 >> 8);
      if ((0x80 < bVar5) || ((0x7f < bVar5 && ((uStack_8 & 0x100) != 0)))) {
        uStack_8 = CONCAT11(bVar6 + 1,bVar5);
        uVar2 = (uint)(0xfe < bVar6);
        bVar3 = CARRY2(uStack_6,uVar2);
        uStack_6 = uStack_6 + uVar2;
        if ((bVar3) && (uStack_4 = CONCAT11(bVar4 + 1,(char)uStack_4), (byte)(bVar4 + 1) == -1)) {
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
