/* GS.GS2 2000:cbbe undefined FUN_2000_cbbe(void) */
uint __cdecl16far FUN_2000_cbbe(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  func_0x00000eb0();
  *(undefined2 *)0x9be2 = 0;
  uVar3 = (uint)(param_1 == 0);
  uVar5 = uVar3;
  if (uVar3 == 0) {
    uVar3 = func_0x0000382a(0xbf,param_1,0,8);
  }
  *(undefined1 *)0x9bda = 0xff;
  uVar3 = CONCAT11((char)(uVar3 >> 8),*(undefined1 *)0xbb9c) & 0xff14;
  cVar2 = '\x01' - ((char)uVar3 == '\0');
  uVar3 = CONCAT11((char)(uVar3 >> 8),cVar2);
  *(char *)0x9be1 = cVar2;
  if (*(char *)0xace9 == '\0') {
    uVar5 = 0xcc27;
    uVar3 = func_0x0001bfca(0xbf);
    if ((uVar3 == 0) && ((*(byte *)0xbb9c & 3) != 0)) {
      if (((*(byte *)0xbb9c & 1) == 0) ||
         (((((*(byte *)0xbb9c & 2) == 0 || ((*(byte *)0xbb9c & 0x80) == 0)) ||
           (*(char *)0xad13 < '\x02')) || (uVar7 = 0, *(char *)0xacda != '\0')))) {
        if (*(char *)0xad13 < '\x02') {
          uVar3 = 2;
          uVar7 = uVar3;
        }
        else {
          uVar3 = 1;
          uVar7 = uVar3;
        }
      }
      for (; (int)uVar7 < 6; uVar7 = uVar7 + 1) {
        uVar3 = *(uint *)(uVar7 * 2 + 0x58be);
        if (((int)uVar3 >> 0xf <= *(int *)0xad22) &&
           (((int)uVar3 >> 0xf < *(int *)0xad22 || (uVar3 <= *(uint *)0xad20)))) {
          iVar4 = *(char *)(uVar7 + 0xace2) + 1;
          uVar6 = (undefined1)uVar7;
          if (iVar4 < *(char *)(uVar7 + 0xacda)) {
            if (uVar5 != 0) {
              *(undefined1 *)0x9bda = uVar6;
              return 0xffff;
            }
            *(char *)(uVar7 + 0xace2) = *(char *)(uVar7 + 0xace2) + '\x01';
          }
          else {
            if (uVar5 != 0) {
              *(undefined1 *)0x9bda = uVar6;
              return uVar7;
            }
            uVar1 = *(undefined2 *)0xad2a;
            *(undefined2 *)0xad2c = *(undefined2 *)0xad28;
            *(undefined2 *)0xad2e = uVar1;
            *(undefined1 *)(uVar7 + 0xace2) = 0;
            *(char *)(uVar7 + 0xacda) = *(char *)(uVar7 + 0xacda) + '\x01';
            *(char *)(uVar7 + param_1) = *(char *)(uVar7 + param_1) + '\x01';
            iVar4 = *(int *)(uVar7 * 2 + 0x58ce);
            *(int *)0x9be2 = *(int *)0x9be2 + iVar4;
          }
          uVar3 = CONCAT11((char)((uint)iVar4 >> 8),uVar6);
          *(undefined1 *)0x9bda = uVar6;
          break;
        }
      }
    }
  }
  else if ((uVar5 == 0) && (*(char *)0xace1 == '\0')) {
    *(char *)0xace1 = *(char *)0xace1 + '\x01';
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  if ((uVar5 == 0) && (*(char *)0x9be1 != '\0')) {
    *(char *)0xace0 = *(char *)0xace0 + '\x01';
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  return uVar3;
}
