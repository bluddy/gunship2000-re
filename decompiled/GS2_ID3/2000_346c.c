/* GS2.GS2 2000:346c undefined FUN_2000_346c(void) */
void __cdecl16far FUN_2000_346c(uint param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  iVar2 = param_1 * 0x18;
  if (*(char *)(iVar2 + 0x2583) != '\x01') {
    return;
  }
  iVar3 = param_1 * 0x20;
  iVar1 = *(int *)(iVar3 + 0xb69);
  uVar4 = *(undefined2 *)0x3364;
  *(int *)(iVar2 + 0x2586) = *(int *)(iVar2 + 0x2586) + *(int *)((*(byte *)0x3be4 & 3) * 2 + 0x2e62)
  ;
  if (*(int *)(iVar2 + 0x2586) < iVar1) {
    return;
  }
  if (*(char *)0xde != '\0') {
    unaff_CS = 0x844;
    func_0x0000844b();
  }
  *(int *)0xae9 = *(int *)0xae9 + *(int *)(iVar3 + 0xb67);
  uVar4 = *(undefined2 *)0x3364;
  *(undefined2 *)(iVar2 + 0x2586) = 0;
  *(undefined1 *)(iVar2 + 0x2583) = 2;
  *(undefined2 *)(iVar2 + 0x2588) = 4;
  if ((*(byte *)(iVar3 + 0xb4c) & 0x80) != 0) {
    uVar4 = *(undefined2 *)0x3398;
    *(int *)0xaf1 = *(int *)0xaf1 + 1;
    if (*(int *)0xaf1 == *(int *)0x15bc) {
      uVar4 = 0xe;
    }
    else {
      if (*(int *)0x15bc <= *(int *)0xaf1) goto LAB_2000_354e;
      uVar4 = 0xf;
    }
    func_0x000104e4(unaff_CS,uVar4,0,0);
    unaff_CS = 0x975;
  }
LAB_2000_354e:
  func_0x00000bc2(unaff_CS,1,param_2,param_1);
  iVar2 = (int)param_1 >> 1;
  if ((param_1 & 1) == 0) {
    *(byte *)(iVar2 + 0x284) = *(byte *)(iVar2 + 0x284) & 0xf6 | 6;
    return;
  }
  *(byte *)(iVar2 + 0x284) = *(byte *)(iVar2 + 0x284) & 0xf | 0x60;
  return;
}
