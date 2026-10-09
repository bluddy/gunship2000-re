/* GS.GS2 2000:f6d4 undefined FUN_2000_f6d4(void) */
undefined2 __cdecl16far FUN_2000_f6d4(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  func_0x00000eb0();
  iVar1 = func_0x00020f44(0xbf);
  iVar2 = ((iVar1 - *(int *)0x2972 / 2) + *(int *)(*(int *)0xc358 + 1)) - *(int *)0xc364;
  iVar1 = func_0x00020f6a(0x20f4,iVar2);
  if ((*(int *)0xc4d8 == 9999) ||
     (iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)0xc4d8,*(undefined2 *)0xc4da,iVar2,
                              ((iVar1 - *(int *)0x2974 / 2) + *(int *)(*(int *)0xc358 + 3)) -
                              *(int *)0xc366,*(undefined2 *)0x2972,*(undefined2 *)0x2974),
     iVar1 == 0)) {
    if ((*(int *)0xc4e6 == 9999) ||
       (iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)0xc4e6,*(undefined2 *)0xc4e8,iVar2,
                                *(undefined2 *)0x2974,*(undefined2 *)0x2972), iVar1 == 0)) {
      if ((*(int *)0xc4f6 == 9999) ||
         (iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)0xc4f6,*(undefined2 *)0xc4f8,iVar2,
                                  *(undefined2 *)0x2974,*(undefined2 *)0x2972), iVar1 == 0)) {
        if ((*(int *)0xc50a == 9999) ||
           (iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)0xc50a,*(undefined2 *)0xc50c,iVar2,
                                    *(undefined2 *)0x2974,*(undefined2 *)0x2972), iVar1 == 0)) {
          if (((*(int *)0xc368 != 9999) &&
              (iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)0xc368,*(undefined2 *)0xc36a,iVar2,
                                       *(undefined2 *)0x2974,*(undefined2 *)0x2972), iVar1 != 0)) &&
             ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc4f0 * 0x27 + 0x24) & 2) == 0)) {
            func_0x00022c94(0x20f4,0xc368,0);
            return 0xffff;
          }
          if (((*(int *)0xbc70 != 9999) &&
              (iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)0xbc70,*(undefined2 *)0xbc72,iVar2,
                                       *(undefined2 *)0x2974,*(undefined2 *)0x2972), iVar1 != 0)) &&
             ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc504 * 0x27 + 0x24) & 2) == 0)) {
            func_0x00022c94(0x20f4,0xbc70,1);
            return 0xffff;
          }
          iVar1 = 0;
          while( true ) {
            if (*(int *)0xc018 <= iVar1) {
              *(undefined1 *)0xe290 = 0x50;
              return 0;
            }
            iVar3 = *(int *)0x2972;
            iVar1 = func_0x0002118e(0x20f4,*(undefined2 *)(iVar1 * 0xb + -0x435c),
                                    *(undefined2 *)(iVar1 * 0xb + -0x435a),iVar2,
                                    *(undefined2 *)0x2974);
            if (iVar1 != 0) break;
            iVar1 = iVar3 + 1;
          }
          iVar1 = func_0x00022808(0x20f4,iVar3);
          if (iVar1 == 0) {
            func_0x000212b0(0x20f4,*(undefined2 *)0xa0c,*(undefined2 *)0xa0e);
            return 0xffff;
          }
          if (*(int *)0xc01c != 0) {
            iVar1 = -0x62c;
            func_0x000214fc(0x20f4,*(int *)0xc01c * 9 + 0x2976);
            func_0x00026cfc(0x20f4);
          }
          *(int *)0xc01c = iVar1;
          if ((uint)(*(char *)((int)*(undefined4 *)0xb85c +
                               *(int *)(*(int *)0xc018 * 0xb + -0x4360) * 8 + 2) == '\x01') !=
              *(uint *)0xc01a) {
            *(uint *)0xc01a = (uint)(*(int *)0xc01a == 0);
            func_0x000214fc(0x20f4,0x2a18);
            func_0x000214fc(0x20f4,0x2a21);
          }
          func_0x000214fc(0x20f4,*(int *)0xc01c * 9 + 0x2976);
          func_0x00022290(0x20f4,*(undefined2 *)0xc018);
          *(undefined1 *)0xe290 = 0x50;
          func_0x000219cc(0x20f4);
          return 0xffff;
        }
        func_0x00022b4c(0x20f4,0xc504,0xbc70,1);
        if (*(int *)0xbc7d % 2 == 0) {
          func_0x000212b0(0x20f4,*(undefined2 *)0x9f8,*(undefined2 *)0x9fa);
        }
        else {
          func_0x000212b0(0x20f4,*(undefined2 *)0x9f4,*(undefined2 *)0x9f6);
        }
      }
      else {
        func_0x00022b4c(0x20f4,0xc4f0,0xc368,0);
        if (*(int *)0xc375 % 2 == 0) {
          func_0x000212b0(0x20f4,*(undefined2 *)0x9f8,*(undefined2 *)0x9fa);
        }
        else {
          func_0x000212b0(0x20f4,*(undefined2 *)0x9f4,*(undefined2 *)0x9f6);
        }
      }
    }
    else {
      func_0x00022f9c(0x20f4,0xc4e0,10);
    }
  }
  else {
    func_0x00022f9c(0x20f4,0xc4d2,0);
    FUN_2000_da46();
  }
  return 0xffff;
}
