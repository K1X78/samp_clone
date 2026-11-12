/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004108f0
 * Name: FUN_004108f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 __fastcall FUN_004108f0(byte param_1)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(in_EAX + *in_EAX * 4 + 3);
  if (uVar3 < 0x1a3) {
    while (*(short *)(&DAT_004b4968 + uVar3 * 2) != -0x4a) {
      iVar1 = (int)*(short *)(&DAT_004b4968 + uVar3 * 2) + (uint)param_1;
      if (((-1 < iVar1) && (iVar1 < 0x615)) && ((&DAT_004b4350)[iVar1] == param_1)) {
LAB_00410960:
        return *(undefined2 *)(&DAT_004b3720 + iVar1 * 2);
      }
      if (param_1 == 0) break;
      if ((0x42 < param_1) || ((&DAT_004b5418)[param_1] == 0)) {
        iVar2 = iVar1 - (uint)param_1;
        iVar1 = iVar2 + 0x43;
        if ((-1 < iVar1) && ((&DAT_004b4393)[iVar2] == 'C')) goto LAB_00410960;
        break;
      }
      param_1 = (&DAT_004b5418)[param_1];
      if (0x1a2 < uVar3) break;
    }
  }
  return *(undefined2 *)(&DAT_004b4f28 + uVar3 * 2);
}


/* END FUNCTION 0x004108f0 */
