/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421570
 * Name: FUN_00421570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00421570(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  int *unaff_EDI;
  
  if ((*(uint *)(*unaff_EDI + 0xc) & 0x4000000) != 0) {
    for (piVar1 = (int *)FUN_0040f840(); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      piVar2 = FUN_00421070(unaff_ESI,piVar1,param_1);
      if (piVar2 != (int *)0x0) {
        FUN_0044aa60(unaff_EDI,piVar2,unaff_ESI,param_2,2,0);
      }
    }
  }
  return;
}


/* END FUNCTION 0x00421570 */
