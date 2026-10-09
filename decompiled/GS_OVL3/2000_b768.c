/* GS.GS2 2000:b768 undefined FUN_2000_b768(void) */
void __cdecl16far FUN_2000_b768(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_12;
  char acStack_10 [4];
  int iStack_c;
  uint uStack_a;
  uint uStack_8;
  int iStack_6;
  
  iStack_6 = 0xb773;
  func_0x00000eb0();
  iVar4 = 0xbf;
  for (uStack_8 = 0; (int)uStack_8 < 4; uStack_8 = uStack_8 + 1) {
    iVar6 = iVar4;
    if ((*(byte *)(uStack_8 + -0x4456) & 0x18) == 0) {
      iStack_6 = 100;
      iVar6 = 0x139c;
      uStack_a = -0x483f;
      uStack_8 = iVar4;
      iVar4 = func_0x00013a46();
      if ((int)uStack_a <= iVar4) {
        *(byte *)(uStack_8 + -0x4456) = *(byte *)(uStack_8 + -0x4456) | 4;
      }
    }
    iVar4 = iVar6;
  }
  *(undefined1 *)0x9bc6 = 0;
  for (uStack_8 = 0; (int)uStack_8 < 4; uStack_8 = uStack_8 + 1) {
    acStack_10[uStack_8] =
         (char)(((uint)*(byte *)(uStack_8 + -0x444e) + (uint)*(byte *)(uStack_8 + -0x444a) +
                (uint)*(byte *)(uStack_8 + -0x4452)) / 3);
  }
  uStack_a = 0;
  for (uStack_8 = 0; (int)uStack_8 < 4; uStack_8 = uStack_8 + 1) {
    uStack_a = uStack_a + (int)*(char *)(uStack_8 * 0x29 + -0x52aa);
  }
  uVar5 = (int)uStack_a >> 0xf;
  if (((int)(((int)((uStack_a ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5) < *(char *)0xad0a + -2) &&
     ((*(byte *)0xbb9c & 3) != 0)) {
    iStack_12 = *(char *)0xad0a + -1;
    uStack_a = 0xffff;
    for (uStack_8 = 0; (int)uStack_8 < 4; uStack_8 = uStack_8 + 1) {
      iVar6 = (int)*(char *)(uStack_8 * 0x29 + -0x52aa);
      if ((((*(byte *)(uStack_8 + 0xbbaa) & 0x18) == 0) && ('1' < acStack_10[uStack_8])) &&
         (iVar6 < iStack_12)) {
        uStack_a = uStack_8;
        iStack_12 = iVar6;
      }
    }
    if (-1 < (int)uStack_a) {
      cVar1 = *(char *)0x9bc6;
      *(undefined1 *)(cVar1 + -0x6438) = 0;
      *(undefined1 *)(cVar1 + -0x643e) = (undefined1)uStack_a;
      *(char *)0x9bc6 = *(char *)0x9bc6 + '\x01';
    }
  }
  uStack_8 = 0xb8b9;
  iStack_6 = iVar4;
  iVar4 = func_0x0001cb9e();
  if (((-1 < iVar4) && (iVar4 < 6)) && ((iVar4 != 5 || ('\x01' < *(char *)0xacdf)))) {
    iStack_c = -1;
    uStack_a = -1;
    cVar3 = '1';
    cVar1 = '1';
    for (uStack_8 = 0; (int)uStack_8 < 4; uStack_8 = uStack_8 + 1) {
      cVar2 = cVar1;
      if ((*(byte *)(uStack_8 + -0x4456) & 0x18) == 0) {
        if (cVar1 < acStack_10[uStack_8]) {
          iStack_c = uStack_a;
          uStack_a = uStack_8;
          cVar2 = acStack_10[uStack_8];
          cVar3 = cVar1;
        }
        else if (cVar3 < acStack_10[uStack_8]) {
          iStack_c = uStack_8;
          cVar3 = acStack_10[uStack_8];
        }
      }
      cVar1 = cVar2;
    }
    if (-1 < (int)uStack_a) {
      if (iVar4 < 5) {
        iVar4 = iVar4 + 1;
      }
      cVar1 = *(char *)0x9bc6;
      *(undefined1 *)(cVar1 + -0x6438) = (char)iVar4;
      *(undefined1 *)(cVar1 + -0x643e) = (undefined1)uStack_a;
      *(char *)0x9bc6 = *(char *)0x9bc6 + '\x01';
    }
    if (-1 < iStack_c) {
      if (iVar4 < 5) {
        iVar4 = iVar4 + 1;
      }
      cVar1 = *(char *)0x9bc6;
      *(undefined1 *)(cVar1 + -0x6438) = (char)iVar4;
      *(undefined1 *)(cVar1 + -0x643e) = (undefined1)iStack_c;
      *(char *)0x9bc6 = *(char *)0x9bc6 + '\x01';
    }
  }
  if ((((*(byte *)0xbb9c & 1) == 0) || ((*(byte *)0xbb9c & 2) == 0)) && (*(char *)0x9bc6 == '\x03'))
  {
    *(undefined1 *)0x9bc6 = 2;
  }
  return;
}
