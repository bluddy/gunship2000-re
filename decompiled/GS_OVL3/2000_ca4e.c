/* GS.GS2 2000:ca4e undefined FUN_2000_ca4e(void) */
int __cdecl16far FUN_2000_ca4e(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if (((*(int *)0xad32 <= *(int *)0xad2a) &&
      ((((*(int *)0xad32 < *(int *)0xad2a || (*(uint *)0xad30 < *(uint *)0xad28)) &&
        (*(char *)0xad0a < '\v')) && ((*(char *)0xad0a != '\x04' && (-1 < *(int *)0xad22)))))) &&
     ((0 < *(int *)0xad22 || (0x31 < *(uint *)0xad20)))) {
    uVar1 = *(int *)(*(char *)0xad0a * 2 + 0x5206) + *(int *)0xad0f;
    iVar2 = (int)uVar1 >> 0xf;
    if ((iVar2 <= *(int *)0xad2a) && ((iVar2 < *(int *)0xad2a || (uVar1 <= *(uint *)0xad28)))) {
      if ((*(char *)0xad0a == '\n') && (*(char *)0xad1b == '\x04')) {
        iVar2 = func_0x0000b3bc(0xbf);
        if (iVar2 == 0) {
          return iVar2;
        }
      }
      return *(char *)0xad0a + 1;
    }
  }
  return 0;
}
