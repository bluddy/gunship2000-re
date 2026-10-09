/* GS.GS2 3000:4370 undefined FUN_3000_4370(void) */
void __cdecl16far FUN_3000_4370(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  func_0x00000eb0();
  iVar1 = *(int *)0xc024;
  if (0x24 < iVar1) {
    iVar1 = 0x24;
  }
  *(int *)0xc024 = iVar1;
  func_0x0000c8c0(0xbf,0x880,0,0,0x140,200,0xffff);
  func_0x0000c9f6(0xc87,*param_1 + 3,*param_2 + 1);
  func_0x0000c980(0xc87,3);
  func_0x0000c928(0xc87,10);
  func_0x00016a62(0xc87,0x880,*param_1,((-1 - *(int *)0xc024) / 2) * 8 + *param_2 + -1,0xbd,
                  ((*(int *)0xc024 + 1) / 2) * 8 + 1,7);
  uVar2 = 0x1658;
  func_0x00016e72(0x1658,0x880,*param_1 + 0x5e,*param_2 + ((-1 - *(int *)0xc024) / 2) * 8,
                  *param_1 + 0x5e,*param_2 + -2,8);
  if (*(int *)0xc024 % 2 != 0) {
    iVar1 = *(int *)0xc024 * 8;
    *(undefined2 *)(iVar1 + -0x3c6c) = 0;
    *(undefined2 *)(iVar1 + -0x3c70) = 0;
    *(undefined2 *)(iVar1 + -0x3c72) = 0;
  }
  iVar1 = 0;
  while (iVar1 < *(int *)0xc024) {
    iVar3 = 8;
    func_0x0001f64a(uVar2,*param_1 + 2,*param_1 + 2,8);
    iVar1 = 8;
    uVar2 = 0x1da4;
    func_0x0001f64a(0x1da4,iVar3 + 1,*param_1 + 0x61,8,8,*param_1 + 0x61);
  }
  FUN_3000_1008();
  return;
}
