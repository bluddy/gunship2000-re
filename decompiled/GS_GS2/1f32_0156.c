/* GS.GS2 1f32:0156 undefined FUN_1f32_0156(void) */
uint __cdecl16far FUN_1f32_0156(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(char *)0xe287 == '\x02') {
    iVar1 = FUN_1f32_0294();
    if (iVar1 != 0) {
      *(undefined1 *)0xe287 = 0;
    }
    uVar2 = FUN_23ed_00dc();
    return uVar2;
  }
  uVar2 = FUN_10bf_2dae(1);
  if (*(char *)0xe287 == '\x01') {
    if ((uVar2 == 0) || ((char)uVar2 != '\0')) {
      uVar2 = uVar2 & 0xff;
    }
    else {
      uVar3 = (int)uVar2 >> 0xf;
      iVar1 = ((int)((uVar2 ^ uVar3) - uVar3) >> 8 ^ uVar3) - uVar3;
      uVar2 = CONCAT11((char)((uint)iVar1 >> 8) + '\x01',(char)iVar1);
    }
    FUN_23ed_00b0();
  }
  if ((uVar2 == 0) || ((char)uVar2 != '\0')) {
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar3 = (int)uVar2 >> 0xf;
    iVar1 = ((int)((uVar2 ^ uVar3) - uVar3) >> 8 ^ uVar3) - uVar3;
    uVar2 = CONCAT11((char)((uint)iVar1 >> 8) + '\x01',(char)iVar1);
  }
  return uVar2;
}
