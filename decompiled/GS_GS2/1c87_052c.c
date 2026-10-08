/* GS.GS2 1c87:052c undefined FUN_1c87_052c(void) */
void __cdecl16far FUN_1c87_052c(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x8574 < *(int *)0x8562) {
    *(undefined2 *)0x8574 = *(undefined2 *)0x8562;
  }
  if (*(int *)0x8566 < *(int *)0x8574) {
    *(undefined2 *)0x8574 = *(undefined2 *)0x8562;
    *(int *)0x8576 = *(int *)0x8576 + *(int *)0x8572;
  }
  if (*(int *)0x8576 < *(int *)0x8564) {
    *(undefined2 *)0x8576 = *(undefined2 *)0x8564;
  }
  if (*(int *)0x8568 < *(int *)0x8576) {
    *(int *)0x8576 = *(int *)0x8568 - *(int *)0x8572;
  }
  return;
}
