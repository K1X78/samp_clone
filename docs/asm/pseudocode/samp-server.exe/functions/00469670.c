/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469670
 * Name: FUN_00469670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00469670(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = param_1[0x10];
  *(undefined1 *)(uVar5 + (int)param_1) = 0x80;
  uVar2 = uVar5 + 1;
  if (uVar5 < 0x38) {
    if (uVar2 < 0x38) {
      puVar6 = (undefined4 *)(uVar2 + (int)param_1);
      for (uVar5 = 0x38 - uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = 0x38 - uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
  }
  else {
    if (uVar2 < 0x40) {
      puVar6 = (undefined4 *)(uVar2 + (int)param_1);
      for (uVar5 = 0x40 - uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = 0x40 - uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    FUN_00469140((int)param_1,(int)param_1);
    puVar6 = param_1;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  if (param_1[0x10] * -8 - 1U < (uint)param_1[0x11]) {
    param_1[0x12] = param_1[0x12] + 1;
  }
  iVar3 = param_1[0x10] * 8 + param_1[0x11];
  *(char *)((int)param_1 + 0x3f) = (char)iVar3;
  param_1[0x11] = iVar3;
  *(char *)((int)param_1 + 0x3e) = (char)((uint)iVar3 >> 8);
  *(char *)(param_1 + 0xf) = (char)((uint)iVar3 >> 0x18);
  uVar1 = param_1[0x12];
  *(char *)((int)param_1 + 0x3d) = (char)((uint)iVar3 >> 0x10);
  *(undefined1 *)((int)param_1 + 0x3b) = *(undefined1 *)(param_1 + 0x12);
  *(char *)((int)param_1 + 0x3a) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 0x39) = (char)((uint)uVar1 >> 0x10);
  *(char *)(param_1 + 0xe) = (char)((uint)uVar1 >> 0x18);
  FUN_00469140((int)param_1,(int)param_1);
  uVar5 = 0;
  do {
    bVar4 = ('\x03' - (char)uVar5) * '\b';
    *(char *)(param_2 + uVar5) = (char)((uint)param_1[0x13] >> (bVar4 & 0x1f));
    *(char *)(param_2 + 4 + uVar5) = (char)((uint)param_1[0x14] >> (bVar4 & 0x1f));
    *(char *)(param_2 + 8 + uVar5) = (char)((uint)param_1[0x15] >> (bVar4 & 0x1f));
    *(char *)(param_2 + 0xc + uVar5) = (char)((uint)param_1[0x16] >> (bVar4 & 0x1f));
    *(char *)(param_2 + 0x10 + uVar5) = (char)((uint)param_1[0x17] >> (bVar4 & 0x1f));
    *(char *)(param_2 + 0x14 + uVar5) = (char)((uint)param_1[0x18] >> (bVar4 & 0x1f));
    *(char *)(param_2 + 0x18 + uVar5) = (char)((uint)param_1[0x19] >> (bVar4 & 0x1f));
    uVar5 = uVar5 + 1;
    *(char *)(param_2 + 0x1b + uVar5) = (char)((uint)param_1[0x1a] >> (bVar4 & 0x1f));
  } while (uVar5 < 4);
  return;
}


/* END FUNCTION 0x00469670 */
