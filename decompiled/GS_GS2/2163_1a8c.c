/* GS.GS2 2163:1a8c undefined FUN_2163_1a8c(void) */
void __cdecl16far FUN_2163_1a8c(int param_1)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int aiStack_c [4];
  
  aiStack_c[3] = 0x30c7;
  FUN_10bf_02c0();
  aiStack_c[0] = 0x19a8;
  aiStack_c[1] = 0x19b7;
  if (param_1 != 0) {
    if (*(char *)0x93d5 != '\0') {
      *(undefined1 *)0x93d5 = 0;
      aiStack_c[3] = 7;
      aiStack_c[2] = 5;
      aiStack_c[1] = 0x19a8;
      aiStack_c[0] = 0x10bf;
      FUN_24e6_088a();
    }
    return;
  }
  if ((*(char *)0x93d4 == '\0') && (*(int *)0xb60f == 6)) {
    aiStack_c[3] = 0xc;
    aiStack_c[2] = 3;
    aiStack_c[1] = 0xc;
    aiStack_c[0] = 0x10bf;
    FUN_24e6_088a();
    return;
  }
  if (*(char *)0x93d9 != '\0') {
    aiStack_c[3] = 7;
    aiStack_c[2] = 3;
    aiStack_c[1] = 0x1a3a;
    aiStack_c[0] = 0x10bf;
    FUN_24e6_088a();
    return;
  }
  aiStack_c[3] = 7;
  aiStack_c[2] = (-(uint)(*(char *)0x93d4 == '\0') & 2) + 3;
  aiStack_c[1] = aiStack_c[*(char *)0x93d4];
  aiStack_c[0] = 0x10bf;
  FUN_24e6_088a();
  return;
}
