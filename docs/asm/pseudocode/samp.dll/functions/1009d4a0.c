/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d4a0
 * Name: FUN_1009d4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009d4a0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 local_40 [48];
  undefined1 local_10 [16];
  
  *param_1 = param_2;
  if (param_2 != 0) {
    FUN_1009e950(local_40);
    cVar1 = FUN_100b46e0(local_10);
    if (cVar1 != '\0') {
      FUN_1009d3d0(local_10,local_10,100,1);
    }
  }
  return;
}


/* END FUNCTION 0x1009d4a0 */
