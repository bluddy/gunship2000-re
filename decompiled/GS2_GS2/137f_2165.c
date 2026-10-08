/* GS2.GS2 137f:2165 undefined FUN_137f_2165(void) */
void __cdecl16near FUN_137f_2165(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_BX;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  uVar1 = in_BX[1];
  uVar2 = uVar1;
  if ((int)in_BX[3] < (int)uVar1) {
    LOCK();
    uVar2 = in_BX[2];
    in_BX[2] = *in_BX;
    UNLOCK();
    *in_BX = uVar2;
    LOCK();
    uVar2 = in_BX[3];
    in_BX[3] = uVar1;
    UNLOCK();
    in_BX[1] = uVar2;
  }
  if (uVar2 < *(uint *)0x196a) {
    *(uint *)0x196a = uVar2;
  }
  puVar3 = (undefined2 *)0x1962;
  uVar2 = *in_BX - in_BX[2];
  if (*in_BX < in_BX[2]) {
    uVar2 = -uVar2;
    puVar3 = (undefined2 *)0x1966;
  }
  if (in_BX[3] - in_BX[1] < uVar2) {
    puVar3 = puVar3 + 1;
  }
  (*(code *)*puVar3)();
  return;
}
