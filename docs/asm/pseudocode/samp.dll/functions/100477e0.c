/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100477e0
 * Name: FUN_100477e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100477e0(int *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  ushort uVar8;
  ushort local_14 [2];
  uint local_10;
  uint local_c;
  int local_8;
  
  FUN_10046d30();
  piVar4 = param_1;
  FUN_1001f530(local_14,0x10,1);
  uVar8 = 0;
  if (local_14[0] != 0) {
    cVar7 = (char)param_1;
    do {
      uVar3 = piVar4[2];
      iVar1 = uVar3 + 1;
      if (iVar1 <= *piVar4) {
        uVar6 = uVar3 & 0x80000007;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
        }
        bVar2 = *(byte *)(((int)uVar3 >> 3) + piVar4[3]);
        piVar4[2] = iVar1;
        local_8 = iVar1;
        if ((bVar2 & (byte)(0x80 >> ((byte)uVar6 & 0x1f))) == 0) {
          cVar7 = '\0';
        }
        else {
          cVar7 = '\x01';
        }
      }
      cVar5 = FUN_1001f470(&local_10,0x10,1);
      if (cVar5 == '\0') {
        return 0;
      }
      if (cVar7 == '\0') {
        cVar5 = FUN_1001f470(&local_c,0x10,1);
        if (cVar5 == '\0') {
          return 0;
        }
        if ((ushort)local_c < (ushort)local_10) {
          return 0;
        }
      }
      else {
        local_c = local_10;
      }
      param_1 = (int *)CONCAT22((short)local_c,(short)local_10);
      FUN_10046d20(&param_1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_14[0]);
  }
  return 1;
}


/* END FUNCTION 0x100477e0 */
