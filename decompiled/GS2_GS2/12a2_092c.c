/* GS2.GS2 12a2:092c undefined FUN_12a2_092c(void) */
int __cdecl16far FUN_12a2_092c(int param_1)

{
  int iVar1;
  int iVar2;
  int in_DX;
  int iVar3;
  undefined2 unaff_DS;
  
  if ((param_1 < 0) || (*(int *)0x31ed <= param_1)) {
    *(undefined2 *)0x31e0 = 9;
    iVar1 = -1;
  }
  else {
    iVar2 = FUN_12a2_0552(param_1,0,0,1);
    if ((iVar2 == -1) && (in_DX == -1)) {
      iVar1 = -1;
    }
    else {
      iVar3 = in_DX;
      iVar1 = FUN_12a2_0552(param_1,0,0,2);
      if ((iVar1 != iVar2) || (iVar3 != in_DX)) {
        FUN_12a2_0552(param_1,iVar2,in_DX,0);
      }
    }
  }
  return iVar1;
}
