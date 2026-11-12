/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d880
 * Name: FUN_0040d880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040d880(uint param_1)

{
  int *piVar1;
  int *unaff_EBX;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar1 = unaff_EBX;
  if (0 < unaff_EBX[1]) {
    do {
      piVar3 = piVar1 + 2;
      if (((0x1f < iVar2) || ((param_1 & 1 << ((byte)iVar2 & 0x1f)) == 0)) && (*piVar3 != 0)) {
        if ((code *)piVar1[3] != (code *)0x0) {
          (*(code *)piVar1[3])(*piVar3);
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar3;
    } while (iVar2 < unaff_EBX[1]);
  }
  return;
}


/* END FUNCTION 0x0040d880 */
