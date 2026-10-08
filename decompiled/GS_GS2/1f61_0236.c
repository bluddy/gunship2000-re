/* GS.GS2 1f61:0236 undefined FUN_1f61_0236(void) */
undefined2 __cdecl16far FUN_1f61_0236(void)

{
  undefined2 unaff_DS;
  undefined2 local_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x1f61;
  local_6 = 0xf851;
  FUN_10bf_02c0();
  puStack_4 = (undefined2 *)0x0;
  local_6 = *(undefined2 *)0x866c;
  FUN_10bf_24ea(*(undefined2 *)0x864a,*(undefined2 *)0x866a);
  puStack_4 = &local_6;
  local_6 = 0x10bf;
  FUN_1f61_05dc();
  puStack_4 = (undefined2 *)*(undefined2 *)0x864a;
  local_6 = 4;
  FUN_10bf_0828(&local_6,1);
  puStack_4 = (undefined2 *)*(undefined2 *)0x864a;
  local_6 = 0x10bf;
  FUN_10bf_05f6();
  return *(undefined2 *)0x8694;
}
