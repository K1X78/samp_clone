/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad56b
 * Name: __CopyMan
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iVar1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x004ad56b */
