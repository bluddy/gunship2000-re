/* GS2.GS2 1000:9e04 undefined FUN_1000_9e04(void) */
undefined2 __cdecl16far FUN_1000_9e04(void)

{
  char cVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined1 local_16 [20];
  
  if ((*(int *)0x3108 == 1) && (*(int *)0x3104 == 0)) {
    func_0x0000377e();
    cVar1 = *(char *)0x3bbe;
  }
  else {
    func_0x0000377e(0x1000,local_16);
    func_0x000037b4(0x2a2,local_16);
    cVar1 = *(char *)0x3bbe;
  }
  if (cVar1 == '\0') {
    func_0x00007bac(0x2a2,0,*(undefined2 *)0x18cc,64000,0,local_16);
    return 0;
  }
  uVar2 = func_0x0000304f(0x2a2,65000,64000,0,local_16);
  func_0x00007bac(0x2a2,uVar2);
  func_0x00005187(0x7aa,0,0,0x140,200,0);
  func_0x00005119(0x37f,uVar2,0,0,4);
  func_0x0000303c(0x37f,uVar2);
  return 0;
}
