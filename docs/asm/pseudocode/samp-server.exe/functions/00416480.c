/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416480
 * Name: FUN_00416480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00416480(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x200);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar1 = *(int *)(iVar1 + 0x10) + -0x18 + *(int *)(iVar1 + 0xc) * 0x18;
    uVar3 = FUN_00416430();
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    cVar2 = FUN_0040efb0();
    *(char *)(iVar1 + 0x16) = cVar2;
  }
  return;
}


/* END FUNCTION 0x00416480 */
