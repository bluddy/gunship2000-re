/* GS.GS2 1000:0230 undefined FUN_1000_0230(void) */
void __cdecl16far FUN_1000_0230(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 uStack_8;
  
  FUN_10bf_02c0();
  for (uStack_8 = 0; uStack_8 < *(int *)0x76b0; uStack_8 = uStack_8 + 1) {
    iVar2 = uStack_8 * 0x26;
    if (*(char *)(iVar2 + 0x7476) == param_1) {
      cVar1 = *(char *)(iVar2 + 0x748f);
      if (cVar1 != '\0') {
        *(char *)(iVar2 + 0x749a) = *(char *)(iVar2 + 0x749a) + '\x01';
        if (cVar1 <= *(char *)(iVar2 + 0x749a)) {
          *(undefined1 *)(iVar2 + 0x749a) = 0;
        }
        *(undefined1 *)(iVar2 + 0x7489) = 0;
        *(undefined1 *)(iVar2 + 0x7487) = 0;
      }
    }
  }
  return;
}
