/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465fe0
 * Name: FUN_00465fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00465fe0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x30d50)) {
    piVar3 = (int *)(param_1 + 0x2de6c);
    do {
      if ((((ushort)uVar2 < 1000) && (*(int *)(param_1 + 0x24de4 + (uVar2 & 0xffff) * 4) != 0)) &&
         (*piVar3 != 0)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 <= *(int *)(param_1 + 0x30d50));
  }
  return iVar1;
}


/* END FUNCTION 0x00465fe0 */
