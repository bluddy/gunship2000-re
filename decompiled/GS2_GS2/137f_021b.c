/* GS2.GS2 137f:021b undefined FUN_137f_021b(void) */
void __cdecl16far
FUN_137f_021b(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0xea;
  *(undefined2 *)0xea = param_1;
  UNLOCK();
  *(undefined2 *)0xf2 = uVar1;
  LOCK();
  uVar1 = *(undefined2 *)0xec;
  *(undefined2 *)0xec = param_3;
  UNLOCK();
  *(undefined2 *)0xf4 = uVar1;
  LOCK();
  uVar1 = *(undefined2 *)0xee;
  *(undefined2 *)0xee = param_2;
  UNLOCK();
  *(undefined2 *)0xf6 = uVar1;
  LOCK();
  uVar1 = *(undefined2 *)0xf0;
  *(undefined2 *)0xf0 = param_4;
  UNLOCK();
  *(undefined2 *)0xf8 = uVar1;
  return;
}
