/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423340
 * Name: FUN_00423340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00423340(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0040b8c0(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_0040a5f0();
    if (iVar2 == 1) {
      FUN_0040a340();
      FUN_0040d150();
      return 0;
    }
    iVar2 = FUN_00423250();
    if (iVar2 == 0) {
      (**(code **)(param_1 + 0x9c))(iVar1);
    }
    FUN_00427080(iVar1);
  }
  FUN_0040d150();
  return iVar2;
}


/* END FUNCTION 0x00423340 */
