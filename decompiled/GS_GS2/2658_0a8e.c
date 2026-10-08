/* GS.GS2 2658:0a8e undefined FUN_2658_0a8e(void) */
void __cdecl16far FUN_2658_0a8e(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  puVar2 = (undefined2 *)*(undefined2 *)0xc86c;
  if ((undefined2 *)*(undefined2 *)0x64c8 <= puVar2) {
    (*(code *)*(undefined2 *)0xc528)(0x2658);
    puVar2 = (undefined2 *)*(undefined2 *)0xc86c;
  }
  uVar1 = *puVar2;
  *(int *)0xc86c = (int)(puVar2 + 1);
  *(byte *)0x9c53 = (byte)uVar1 & 1;
  puVar2 = (undefined2 *)*(undefined2 *)0xc86c;
  if ((undefined2 *)*(undefined2 *)0x64c8 <= puVar2) {
    (*(code *)*(undefined2 *)0xc528)(0x2658,in_DX,in_CX,in_BX);
    puVar2 = (undefined2 *)*(undefined2 *)0xc86c;
  }
  uVar1 = *puVar2;
  *(int *)0xc86c = (int)(puVar2 + 1);
  *(undefined2 *)0x9c42 = uVar1;
  FUN_2658_0b0f();
  return;
}
