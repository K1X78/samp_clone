/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004676e0
 * Name: FUN_004676e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004676e0(void *this,ushort param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  float10 fVar9;
  
  iVar1 = *(int *)(DAT_004fc438 + 8);
  iVar5 = CONCAT22((short)((uint)DAT_004fc438 >> 0x10),param_1);
  uVar4 = 0xffff;
  if (param_1 < 2000) {
    uVar7 = (uint)param_1;
    iVar5 = *(int *)((int)this + uVar7 * 4 + 0x2014);
    if ((iVar5 != 0) && (iVar1 != 0)) {
      uVar2 = *(uint *)(iVar1 + 0x30d50);
      uVar8 = 0;
      _param_1 = 100000.0;
      uVar6 = uVar2;
      if (-1 < (int)uVar2) {
        uVar6 = 0;
        do {
          if (((uVar8 < 1000) && (*(int *)(iVar1 + 0x24de4 + uVar6 * 4) != 0)) &&
             (*(int *)(iVar1 + 0x2de6c + uVar6 * 4) == 0)) {
            iVar5 = *(int *)(iVar1 + 0x25d84 + uVar6 * 4);
            if (((*(char *)(iVar5 + 0x2f95) != '\0') && (*(char *)(iVar5 + 0x2f95) != '\t')) &&
               (*(char *)(uVar7 + 0x53d + iVar5) != '\0')) {
              pfVar3 = *(float **)((int)this + uVar7 * 4 + 0x3f54);
              fVar9 = FUN_004840f0(iVar5,*pfVar3,pfVar3[1],pfVar3[2]);
              if (fVar9 < (float10)_param_1) {
                _param_1 = (float)fVar9;
                uVar4 = uVar8;
              }
            }
          }
          uVar8 = uVar8 + 1;
          uVar6 = (uint)uVar8;
        } while ((int)uVar6 <= (int)uVar2);
      }
      return CONCAT22((short)(uVar6 >> 0x10),uVar4);
    }
  }
  return CONCAT22((short)((uint)iVar5 >> 0x10),0xffff);
}


/* END FUNCTION 0x004676e0 */
