/* GS2.GS2 1000:f2bc undefined FUN_1000_f2bc(void) */
void __cdecl16far FUN_1000_f2bc(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  byte *pbStack_10;
  int iStack_e;
  char *pcStack_c;
  char *pcStack_a;
  byte *pbStack_8;
  byte *pbStack_6;
  
  iStack_e = 0;
  if ((*(byte *)0xb56 & 0x20) != 0) {
    pbStack_10 = (byte *)0xb56;
    pbStack_8 = (byte *)0x0;
    pcStack_a = (char *)0x601;
    pcStack_c = (char *)0x48d;
    do {
      if ((char *)0x5ea < pcStack_c) {
        return;
      }
      if ((iStack_e == param_1) ||
         (((pcStack_c != (char *)0x48d && (uVar6 = *(undefined2 *)0x32ec, pcStack_c[-4] == '\x01'))
          && ((*pcStack_c == param_1 || (*(char *)(*pcStack_c * 0x46 + 0x489) == '\x01')))))) {
        uVar6 = *(undefined2 *)0x3340;
        pbStack_8[0x1c48] = *pbStack_8 ^ (*pbStack_8 ^ pbStack_8[0x1c48]) & 7;
        pbVar8 = pbStack_8 + 0x1c48;
        pbVar9 = pbStack_8;
        for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
          pbVar2 = pbVar9;
          pbVar9 = pbVar9 + 2;
          pbVar1 = pbVar8;
          pbVar8 = pbVar8 + 2;
          *(undefined2 *)pbVar2 = *(undefined2 *)pbVar1;
        }
        uVar6 = *(undefined2 *)0x32f0;
        pcStack_a[8] = '\0';
        pbStack_6 = pbStack_8 + 5;
        cVar3 = *pcStack_a;
        cVar4 = pcStack_a[5];
        iVar7 = 0;
        do {
          uVar6 = *(undefined2 *)0x32ee;
          if ((pbStack_8[iVar7 + 1] != 0) && (cVar3 == '\x02')) {
            bVar5 = pbStack_8[iVar7 + 0xd];
            if ((bVar5 == 2) || ((cVar4 != '\0' && ((bVar5 & 2) != 0)))) {
              pbStack_6[0] = 0;
              pbStack_6[1] = 0;
            }
            else if (bVar5 == 3) {
              *(int *)pbStack_6 = *(int *)pbStack_6 >> 1;
            }
          }
          uVar6 = *(undefined2 *)0x32ee;
          if ((pbStack_8[iVar7 + 1] != 0) && (cVar4 == '\x02')) {
            bVar5 = pbStack_8[iVar7 + 0xd];
            if ((bVar5 == 1) || ((cVar3 != '\0' && ((bVar5 & 1) != 0)))) {
              pbStack_6[0] = 0;
              pbStack_6[1] = 0;
            }
            else if (bVar5 == 3) {
              *(int *)pbStack_6 = *(int *)pbStack_6 >> 1;
            }
          }
          pbStack_6 = pbStack_6 + 2;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 4);
      }
      pbStack_8 = pbStack_8 + 0x1e;
      pcStack_a = pcStack_a + 0xc;
      pcStack_c = pcStack_c + 0x46;
      iStack_e = iStack_e + 1;
      pbStack_10 = pbStack_10 + 0x20;
    } while ((*pbStack_10 & 0x20) != 0);
  }
  return;
}
