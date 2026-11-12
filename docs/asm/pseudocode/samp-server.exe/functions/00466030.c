/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466030
 * Name: FUN_00466030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00466030(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x30d50);
  uVar2 = 0;
  if (-1 < iVar1) {
    piVar3 = (int *)(param_1 + 0x25d84);
    do {
      if ((((ushort)uVar2 < 1000) && (*(int *)(param_1 + 0x24de4 + (uVar2 & 0xffff) * 4) != 0)) &&
         (*piVar3 != 0)) {
        FUN_00484b70(*piVar3);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00466030 */
