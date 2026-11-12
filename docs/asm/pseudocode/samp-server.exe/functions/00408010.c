/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408010
 * Name: FUN_00408010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00408010(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = DAT_004ed540;
  if (DAT_004ed540 != (code *)0x0) {
    iVar3 = FUN_00407390();
    uVar2 = DAT_004ed544;
    DAT_004ed540 = (code *)0x0;
    FUN_00407e90(DAT_004ed530);
    (*pcVar1)(uVar2,iVar3,iVar3 >> 0x1f,param_1);
    FUN_00407e50(DAT_004ed530);
    DAT_004ed544 = uVar2;
  }
  DAT_004ed540 = pcVar1;
  return;
}


/* END FUNCTION 0x00408010 */
