/* GS.GS2 2000:f2dc undefined FUN_2000_f2dc(void) */
undefined2 __cdecl16far FUN_2000_f2dc(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 ***pppuVar5;
  undefined2 unaff_DS;
  undefined2 ***local_c;
  undefined2 ***local_a;
  undefined2 ***local_8;
  
  pppuVar5 = (undefined2 ***)0xbf;
  func_0x00000eb0();
  *(undefined2 *)0xc024 = 0;
  if (*(int *)0xc516 != 9999) {
    local_8 = (undefined2 ***)0x0;
    local_a = (undefined2 ***)*(undefined2 *)0xc512;
    local_c = (undefined2 ***)0xbf;
    pppuVar5 = (undefined2 ***)0x20f4;
    func_0x000224c4();
  }
  iVar2 = *(int *)0xc024 * 8;
  *(undefined2 *)(iVar2 + -0x3c6e) = 0xffff;
  uVar1 = *(undefined2 *)0x97a;
  *(undefined2 *)(iVar2 + -0x3c72) = *(undefined2 *)0x978;
  *(undefined2 *)(iVar2 + -0x3c70) = uVar1;
  *(int *)0xc024 = *(int *)0xc024 + 1;
  for (iVar2 = 0; iVar2 < *(int *)0xb8c8; iVar2 = iVar2 + 1) {
    uVar1 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar3 = (int)*(undefined4 *)0xb860;
    if ((*(uint *)(iVar3 + iVar2 * 0x27 + 0x25) & 0x200) == 0) {
      if ((*(uint *)(iVar3 + iVar2 * 0x27 + 0x25) & 0x400) != 0) {
        iVar3 = 0;
        while (*(uint *)((int)*(undefined4 *)0xb860 + iVar2 * 0x27 + 0x19) !=
               (uint)*(byte *)(iVar3 * 8 + (int)*(undefined4 *)0xb85c)) {
          iVar3 = iVar3 + 1;
        }
        do {
          iVar4 = *(int *)0xc024 * 8;
          *(int *)(iVar4 + -0x3c6c) = iVar2;
          *(int *)(iVar4 + -0x3c6e) = iVar3;
          uVar1 = *(undefined2 *)0xa27a;
          *(int *)(iVar4 + -0x3c72) =
               (uint)*(byte *)((int)*(undefined4 *)0xb85c + iVar3 * 8 + 1) * 0x1b + *(int *)0xa278 +
               2;
          *(undefined2 *)(iVar4 + -0x3c70) = uVar1;
          *(int *)0xc024 = *(int *)0xc024 + 1;
          iVar3 = iVar3 + 1;
        } while (*(char *)(iVar3 * 8 + (int)*(undefined4 *)0xb85c) == -1);
      }
    }
    else {
      iVar3 = 0;
      while (*(uint *)((int)*(undefined4 *)0xb860 + iVar2 * 0x27 + 0x19) !=
             (uint)*(byte *)(iVar3 * 8 + (int)*(undefined4 *)0xb85c)) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = *(int *)0xc024 * 8;
      *(int *)(iVar4 + -0x3c6c) = iVar2;
      *(int *)(iVar4 + -0x3c6e) = iVar3;
      uVar1 = *(undefined2 *)0xa25e;
      *(int *)(iVar4 + -0x3c72) =
           *(int *)((int)*(undefined4 *)0xb860 + iVar2 * 0x27 + 0x19) * 0x1a + *(int *)0xa25c + 1;
      *(undefined2 *)(iVar4 + -0x3c70) = uVar1;
      *(int *)0xc024 = *(int *)0xc024 + 1;
    }
  }
  local_8 = &local_c;
  local_a = &local_a;
  local_c = pppuVar5;
  func_0x00024370();
  local_8 = (undefined2 ***)*(undefined2 *)0xa06;
  local_a = (undefined2 ***)*(undefined2 *)0xa04;
  local_c = (undefined2 ***)0x20f4;
  func_0x000212b0();
  local_8 = (undefined2 ***)0xffff;
  local_a = (undefined2 ***)0xc8;
  local_c = (undefined2 ***)0x140;
  func_0x0000c8c0(0x20f4,0x880,0,0);
  local_8 = (undefined2 ***)0xa;
  local_a = (undefined2 ***)0xc87;
  local_c = (undefined2 ***)0xf4a0;
  func_0x0000c928();
  local_8 = (undefined2 ***)0x0;
  local_a = &local_c;
  local_c = &local_a;
  iVar2 = func_0x00025248(0xc87,&local_8);
  if (iVar2 != 0) {
    if ((('\x01' < *(char *)0xe28c) && (*(int *)0xc4d8 != 9999)) &&
       ((*(uint *)((int)*(undefined4 *)0xb860 +
                   *(int *)(((uint)local_8 & 0xff) * 8 + -0x3c6c) * 0x27 + 0x25) & 0x200) != 0)) {
      if (*(int *)0xc516 != 9999) {
        local_8 = (undefined2 ***)0x1;
        local_a = (undefined2 ***)*(undefined2 *)0xc512;
        local_c = (undefined2 ***)0x20f4;
        func_0x000224c4();
      }
      local_8 = (undefined2 ***)*(undefined2 *)0xa72;
      local_a = (undefined2 ***)*(undefined2 *)0xa70;
      local_c = (undefined2 ***)0x20f4;
      func_0x000212b0();
      if (*(char *)0xe28c == '\x02') {
        local_8 = (undefined2 ***)0x2957;
        local_a = (undefined2 ***)0x20f4;
        local_c = (undefined2 ***)0xf549;
        func_0x0000ca66();
      }
      else {
        local_8 = (undefined2 ***)*(undefined2 *)0xa25e;
        local_a = (undefined2 ***)
                  (*(int *)((int)*(undefined4 *)0xb860 + *(int *)0xc4d2 * 0x27 + 0x19) * 0x1a +
                   *(int *)0xa25c + 1);
        local_c = (undefined2 ***)0x2964;
        func_0x0000ca66(0x20f4);
      }
      return 0;
    }
    if ((char)local_8 != '\0') {
      local_8 = (undefined2 ***)*(undefined2 *)(((uint)local_8 & 0xff) * 8 + -0x3c6e);
      local_a = (undefined2 ***)0x20f4;
      local_c = (undefined2 ***)0xf58f;
      iVar2 = func_0x00027b8c();
      if (iVar2 == 0) {
        if (*(int *)0xc516 != 9999) {
          local_8 = (undefined2 ***)0x1;
          local_a = (undefined2 ***)*(undefined2 *)0xc512;
          local_c = (undefined2 ***)0x20f4;
          func_0x000224c4();
        }
        return 0;
      }
    }
    *(undefined2 *)0xc516 = 9999;
    local_8 = (undefined2 ***)0xca;
    local_a = (undefined2 ***)0x6;
    local_c = (undefined2 ***)0x50;
    func_0x0000c8c0(0x20f4,0x8a4,0xd6,0x42);
    local_8 = (undefined2 ***)0xf;
    local_a = (undefined2 ***)0xc87;
    local_c = (undefined2 ***)0xf5d6;
    func_0x0000c928();
    iVar2 = ((uint)local_8 & 0xff) * 8;
    local_8 = (undefined2 ***)*(uint *)(iVar2 + -0x3c70);
    local_a = (undefined2 ***)*(undefined2 *)(iVar2 + -0x3c72);
    local_c = (undefined2 ***)0x2968;
    uVar1 = func_0x0000ca66(0xc87);
    if ((char)local_8 != '\0') {
      iVar2 = ((uint)local_8 & 0xff) * 8;
      *(undefined2 *)0xc510 = *(undefined2 *)(iVar2 + -0x3c6c);
      local_8 = (undefined2 ***)*(undefined2 *)(iVar2 + -0x3c6e);
      *(undefined2 *)0xc512 = local_8;
      local_a = (undefined2 ***)0xc87;
      local_c = (undefined2 ***)0xf616;
      uVar1 = func_0x00023a48();
      *(undefined2 *)0xc514 = uVar1;
      *(undefined2 *)0xc516 = 1;
      local_8 = (undefined2 ***)0x1;
      local_a = (undefined2 ***)*(undefined2 *)0xc512;
      local_c = (undefined2 ***)0x20f4;
      func_0x000224c4();
      local_8 = (undefined2 ***)*(undefined2 *)0xa8e;
      local_a = (undefined2 ***)*(undefined2 *)0xa8c;
      local_c = (undefined2 ***)0x20f4;
      uVar1 = func_0x000212b0();
    }
    return uVar1;
  }
  if (*(int *)0xc516 != 9999) {
    local_8 = (undefined2 ***)0x1;
    local_a = (undefined2 ***)*(undefined2 *)0xc512;
    local_c = (undefined2 ***)0x20f4;
    func_0x000224c4();
  }
  *(undefined2 *)0xc516 = 9999;
  return 0;
}
