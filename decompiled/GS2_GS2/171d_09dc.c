/* GS2.GS2 171d:09dc undefined FUN_171d_09dc(void) */
/* WARNING: Removing unreachable block (ram,0x00017c69) */

int __cdecl16far
FUN_171d_09dc(undefined1 *param_1,uint param_2,uint param_3,undefined2 param_4,undefined2 param_5,
             uint param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  uint uStack_12;
  uint uStack_10;
  undefined2 local_e;
  int iStack_c;
  uint uStack_a;
  uint uStack_8;
  undefined1 uStack_5;
  uint uStack_4;
  
  *(undefined2 *)0x4600 = 0;
  *(undefined2 *)0x45fe = 0;
  *(undefined2 *)0x45fc = 0;
  *(undefined2 *)0x4604 = 0;
  *(undefined2 *)0x4602 = 0;
  if ((param_6 & 2) == 0) {
    *(undefined2 *)0x45f8 = param_4;
    *(undefined2 *)0x45fa = param_5;
    cVar4 = FUN_171d_08dc(8);
  }
  else {
    iVar5 = FUN_12a2_0c10(0x171d,param_4,0,&local_e);
    if (iVar5 != 0) {
      return iVar5;
    }
    cVar4 = FUN_171d_096a(8,local_e);
  }
  *(int *)0x4608 = -(int)cVar4;
  *(undefined2 *)0x4606 = 9;
  uStack_10 = 0x100;
  uStack_12 = 0xffff;
  cVar4 = '\0';
  uStack_4 = 0x2ac;
  puVar7 = (undefined2 *)0x2ac;
  do {
    *puVar7 = 0xffff;
    *(char *)(puVar7 + 1) = cVar4;
    cVar4 = cVar4 + '\x01';
    puVar7 = (undefined2 *)((int)puVar7 + 3);
  } while (puVar7 < (undefined2 *)0x1aac);
  uStack_a = 0;
  iVar5 = 0;
  do {
    puVar3 = param_1;
    if ((((param_6 & 1) == 0) && (param_3 == 0)) && (param_2 <= uStack_a)) goto LAB_171d_0c20;
    if (iVar5 == 0) {
      if ((param_6 & 2) == 0) {
        uStack_8 = FUN_171d_08dc(DAT_506a_4606);
      }
      else {
        uStack_8 = FUN_171d_096a(DAT_506a_4606,local_e);
      }
      uStack_4 = uStack_8;
      if ((param_6 & 1) != 0) {
        uVar6 = DAT_506a_4600 << 1 | (uint)(DAT_506a_45fe < 0);
        if ((param_3 < uVar6) || ((param_3 <= uVar6 && (param_2 <= (uint)(DAT_506a_45fe << 1))))) {
LAB_171d_0c20:
          if ((param_6 & 2) != 0) {
            FUN_12a2_0bd8(local_e);
          }
          return 0;
        }
      }
      if (uStack_8 == uStack_10) {
        *(undefined1 *)0x1aac = uStack_5;
        iVar5 = 1;
        uStack_4 = uStack_12;
      }
      iVar2 = uStack_4 * 3;
      iVar1 = *(int *)(iVar2 + 0x2ac);
      iStack_c = iVar5;
      while (iVar1 != -1) {
        *(undefined1 *)(iStack_c + 0x1aac) = *(undefined1 *)(iVar2 + 0x2ae);
        iStack_c = iStack_c + 1;
        uStack_4 = *(uint *)(iVar2 + 0x2ac);
        iVar2 = uStack_4 * 3;
        iVar1 = *(int *)(iVar2 + 0x2ac);
      }
      uStack_5 = *(undefined1 *)(uStack_4 * 3 + 0x2ae);
      *(undefined1 *)(uStack_10 * 3 + 0x2ae) = uStack_5;
      if ((undefined1 *)param_1 == (undefined1 *)0xffff) {
        param_1._2_2_ = param_1._2_2_ + 0x1000;
      }
      param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
      *puVar3 = uStack_5;
      *(uint *)(uStack_10 * 3 + 0x2ac) = uStack_12;
      uStack_10 = uStack_10 + 1;
      uStack_12 = uStack_8;
      if (((uint)(1 << ((byte)DAT_506a_4606 & 0x1f)) <= uStack_10) &&
         (DAT_506a_4606 = DAT_506a_4606 + 1, DAT_506a_4608 < DAT_506a_4606)) {
        DAT_506a_4606 = 9;
        uStack_10 = 0x100;
        uStack_12 = 0xffff;
        puVar7 = (undefined2 *)0x2ac;
        do {
          *puVar7 = 0xffff;
          puVar7 = (undefined2 *)((int)puVar7 + 3);
        } while (puVar7 < (undefined2 *)0x1aac);
      }
    }
    else {
      iStack_c = iVar5 + -1;
      if ((undefined1 *)param_1 == (undefined1 *)0xffff) {
        param_1._2_2_ = param_1._2_2_ + 0x1000;
      }
      param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
      *puVar3 = *(undefined1 *)(iVar5 + 0x1aab);
    }
    uStack_a = uStack_a + 1;
    iVar5 = iStack_c;
  } while( true );
}
