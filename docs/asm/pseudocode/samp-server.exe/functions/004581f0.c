/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004581f0
 * Name: FUN_004581f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004581f0(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  do {
    iVar3 = 0;
    do {
      uVar1 = FUN_0045af90();
      param_1[iVar3] = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    param_1[3] = param_1[3] | 0x80000000;
    *param_1 = *param_1 | 1;
    uVar2 = FUN_004576d0(param_1,5);
  } while ((char)uVar2 == '\0');
  return;
}


/* END FUNCTION 0x004581f0 */
