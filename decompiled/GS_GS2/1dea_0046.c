/* GS.GS2 1dea:0046 undefined FUN_1dea_0046(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1dea_0046(void)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_DX;
  undefined2 unaff_DS;
  undefined1 *puVar6;
  
  FUN_10bf_02c0();
  FUN_2000_000c();
  uVar5 = _DAT_0000_04f6;
  if (*(char *)0x8611 == '\0') {
    uVar5 = FUN_1dea_1048(0x14);
    *(undefined2 *)0x9f18 = uVar5;
    *(undefined2 *)0x9f1a = in_DX;
  }
  else {
    *(undefined2 *)0x9f18 = _DAT_0000_04f4;
    *(undefined2 *)0x9f1a = uVar5;
  }
  if (((*(char *)0x860f == '\0') && (*(char *)0x861e == '\0')) && (*(char *)0x861d == '\0')) {
    FUN_27d1_0e56(0x2000);
  }
  iVar4 = FUN_1bca_0066();
  if (iVar4 != 0) {
    FUN_10bf_092e(0x7e4);
    FUN_10bf_01d5(2);
  }
  *(int *)0x9f00 = (int)*(char *)0xbbe2;
  bVar1 = *(byte *)0xbbe3;
  *(uint *)0x9f02 = bVar1 & 0x7f;
  if ((bVar1 & 0x7f) == 0x44) {
    *(undefined2 *)0x9f02 = 0x52;
  }
  *(uint *)0x8c8 = (uint)(*(char *)0xbbe5 != '\0');
  pcVar2 = (code *)swi(0x33);
  cVar3 = (*pcVar2)();
  if (cVar3 != '\0') {
    pcVar2 = (code *)swi(0x33);
    (*pcVar2)();
    *(byte *)0x8c8 = *(byte *)0x8c8 | 2;
  }
  if ((*(byte *)0xbbe4 & 0x60) == 0x40) {
    uVar5 = 0x1d;
  }
  else {
    uVar5 = 0x43;
  }
  *(undefined2 *)0x9f04 = uVar5;
  if (*(int *)0x8c8 != 0) {
    FUN_1ef4_0000(*(undefined2 *)0xbbe6,*(undefined2 *)0xbbe8,*(undefined2 *)0xbbea,
                  *(undefined2 *)0xbbec,*(undefined2 *)0xbbee);
  }
  FUN_1d02_000a();
  FUN_2741_06ca();
  FUN_1f61_060e();
  *(undefined1 *)0x861a = 0;
  if (*(int *)0x9f02 != 0x4e) {
    FUN_2658_034c(0x811);
    puVar6 = (undefined1 *)0xe02d;
    FUN_2658_0497();
    *puVar6 = *(undefined1 *)0x9f02;
    FUN_2658_034c(puVar6);
    FUN_2658_0497();
    if ((*(int *)0x9f02 == 0x4e) || (*(int *)0x9f02 == 0x49)) {
      thunk_EXT_FUN_0000_0000(0x2658,0,0);
    }
    else {
      thunk_EXT_FUN_0000_0000
                (0x2658,0,0,0,*(undefined2 *)0xbc00,*(undefined2 *)0xbc02,*(undefined2 *)0xbc04);
    }
    *(undefined1 *)0x861a = 1;
    if ((*(char *)0x8618 != '\0') && ((*(byte *)0xbbe4 & 0x60) == 0x40)) {
      FUN_1dea_0f3a();
    }
  }
  if (*(char *)0xe287 == '\x01') {
    FUN_23ed_0016();
  }
  else if (*(char *)0xe287 == '\x02') {
    FUN_23ed_0044();
  }
  *(undefined2 *)0xbc3c = 0;
  *(undefined2 *)0xb836 = 0;
  *(undefined1 *)0xe276 = 0;
  return;
}
