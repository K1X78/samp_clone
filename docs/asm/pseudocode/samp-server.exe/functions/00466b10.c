/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466b10
 * Name: FUN_00466b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00466b10(int param_1)

{
  int iVar1;
  bool bVar2;
  int extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x30d50);
  uVar3 = 0;
  iVar4 = 0;
  if (-1 < iVar1) {
    piVar5 = (int *)(param_1 + 0x2de6c);
    do {
      if (((((ushort)uVar3 < 1000) && (*(int *)(param_1 + 0x24de4 + (uVar3 & 0xffff) * 4) != 0)) &&
          (bVar2 = FUN_00466020((ushort)uVar3), param_1 = extraout_ECX, uVar3 = extraout_EDX, bVar2)
          ) && (*piVar5 == 0)) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
    } while ((int)uVar3 <= iVar1);
  }
  return iVar4;
}


/* END FUNCTION 0x00466b10 */
