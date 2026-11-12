/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ba90
 * Name: FUN_0048ba90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048ba90(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 < 0) {
    iVar4 = 5;
  }
  *param_1 = iVar4;
  if (param_1[1] == 0) {
    if (iVar4 < 6) {
      iVar3 = 1 << ((char)iVar4 * '\x02' + 0xeU & 0x1f);
    }
    else {
      iVar3 = ((iVar4 != 6) - 1 & 0xfe000000) + 0x4000000;
    }
    param_1[1] = iVar3;
  }
  if ((param_1[3] == 0) && ((uint)param_1[2] < (uint)param_1[1])) {
    uVar2 = 0xb;
    do {
      bVar1 = (byte)uVar2;
      if ((uint)param_1[2] <= (uint)(2 << (bVar1 & 0x1f))) {
        iVar3 = 2;
LAB_0048bb1a:
        param_1[1] = iVar3 << (bVar1 & 0x1f);
        break;
      }
      if ((uint)param_1[2] <= (uint)(3 << (bVar1 & 0x1f))) {
        iVar3 = 3;
        goto LAB_0048bb1a;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1f);
  }
  if (param_1[4] < 0) {
    param_1[4] = 3;
  }
  if (param_1[5] < 0) {
    param_1[5] = 0;
  }
  if (param_1[6] < 0) {
    param_1[6] = 2;
  }
  if (param_1[7] < 0) {
    param_1[7] = (uint)(4 < iVar4);
  }
  if (param_1[8] < 0) {
    param_1[8] = ((6 < iVar4) - 1 & 0xffffffe0) + 0x40;
  }
  if (param_1[9] < 0) {
    param_1[9] = (uint)(param_1[7] != 0);
  }
  if (param_1[10] < 0) {
    param_1[10] = 4;
  }
  if (param_1[0xb] == 0) {
    param_1[0xb] = (param_1[8] >> 1) + 0x10 >> (param_1[9] == 0);
  }
  if (param_1[0xd] < 0) {
    param_1[0xd] = 1;
  }
  return;
}


/* END FUNCTION 0x0048ba90 */
