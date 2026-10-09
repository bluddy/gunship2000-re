/* GS2.GS2 2000:31ec undefined FUN_2000_31ec(void) */
void __cdecl16far FUN_2000_31ec(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  
  iVar3 = param_1 * 0x18;
  if (*(char *)(iVar3 + 0x2583) != '\x01') {
    return;
  }
  iVar4 = param_1 * 0x20;
  iVar1 = (int)*(char *)(iVar4 + 0xb6b);
  if (2 < iVar1) {
    iVar1 = 2;
  }
  uVar7 = 0x37f;
  uVar2 = func_0x00005828();
  if ((uVar2 & 1) == 0) {
    uVar2 = (uint)*(byte *)(param_3 * 0x18 + iVar1 + 0xea);
  }
  else if ((int)uVar2 < 0) {
    uVar2 = (uint)*(byte *)(param_3 * 0x18 + iVar1 + 0xea);
    uVar2 = uVar2 - ((int)uVar2 >> 2);
  }
  else {
    uVar2 = (uint)*(byte *)(param_3 * 0x18 + iVar1 + 0xea);
    uVar2 = ((int)uVar2 >> 2) + uVar2;
  }
  if (0 < param_4) {
    do {
      *(int *)(iVar3 + 0x2586) = *(int *)(iVar3 + 0x2586) + uVar2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    unaff_DS = 0x406a;
  }
  if (*(int *)(iVar3 + 0x2586) < *(int *)(iVar4 + 0xb69)) {
    return;
  }
  if (*(char *)0xde != '\0') {
    bVar6 = *(byte *)(iVar4 + 0xb58);
    uVar2 = (uint)bVar6;
    if (uVar2 == 0x21) {
LAB_2000_332c:
      uVar8 = 0x25;
LAB_2000_3332:
      uVar7 = 0x844;
      func_0x0000844b(0x37f,uVar8);
    }
    else {
      if (uVar2 == 0x21 || bVar6 < 0x21) {
        if ((0x17 < bVar6) && (uVar2 == 0x19 || (int)(uVar2 - 0x18) < 1)) {
          uVar8 = 0x27;
          goto LAB_2000_3332;
        }
      }
      else {
        if (uVar2 == 0xd2) {
          uVar8 = 0x4a;
          goto LAB_2000_3332;
        }
        if (uVar2 == 0xe2) goto LAB_2000_332c;
      }
      if ((*(byte *)0x593c == param_2) || (*(char *)(param_2 * 0x46 + 0x489) == '\x01')) {
        uVar8 = 0x10;
      }
      else {
        uVar8 = 0xf;
      }
      uVar7 = 0x844;
      func_0x0000844b(0x37f,uVar8);
    }
  }
  *(int *)0xae9 = *(int *)0xae9 + *(int *)(iVar4 + 0xb67);
  if ((*(int *)0x15e8 == 3) && ((*(byte *)(iVar4 + 0xb4c) & 0x10) != 0)) {
    iVar1 = *(int *)0x15fa;
    uVar8 = *(undefined2 *)0x3392;
    *(int *)0xaed = *(int *)0xaed + 1;
    if (*(int *)0xaed < iVar1) goto LAB_2000_33c7;
    uVar8 = 0x10;
  }
  else {
    if ((*(int *)0x1626 != 3) ||
       (((*(byte *)(iVar4 + 0xb4c) & 0x20) == 0 ||
        (iVar1 = *(int *)0x1638, uVar8 = *(undefined2 *)0x3394, *(int *)0xaef = *(int *)0xaef + 1,
        *(int *)0xaef < iVar1)))) goto LAB_2000_33c7;
    uVar8 = 0x11;
  }
  func_0x000104e4(uVar7,uVar8,param_2,0);
  uVar7 = 0x975;
LAB_2000_33c7:
  uVar8 = *(undefined2 *)0x3364;
  *(undefined2 *)(iVar3 + 0x2586) = 0;
  *(undefined1 *)(iVar3 + 0x2583) = 2;
  *(undefined2 *)(iVar3 + 0x2588) = 4;
  func_0x00000bc2(uVar7,1,param_2,param_1);
  iVar3 = (int)param_1 >> 1;
  if ((param_1 & 1) == 0) {
    if ((*(byte *)(param_2 * 0x20 + 0xb56) & 0x20) == 0) {
      bVar6 = 7;
    }
    else {
      bVar6 = (char)param_2 + 1;
    }
    *(byte *)(iVar3 + 0x284) = *(byte *)(iVar3 + 0x284) & 0xf0 | bVar6;
    return;
  }
  if ((*(byte *)(param_2 * 0x20 + 0xb56) & 0x20) == 0) {
    cVar5 = '\a';
  }
  else {
    cVar5 = (char)param_2 + '\x01';
  }
  *(byte *)(iVar3 + 0x284) = *(byte *)(iVar3 + 0x284) & 0xf | cVar5 << 4;
  return;
}
