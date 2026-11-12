/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ec20
 * Name: FUN_0040ec20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040ec20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if ((unaff_ESI != 0) && (*(byte *)(param_2 + 0x15) < 8)) {
    iVar1 = 0;
    iVar2 = param_2 + 0x60;
    do {
      if (*(int *)(iVar2 + 0x10) == unaff_ESI) {
        *(undefined1 *)(iVar2 + 8) = 1;
        return;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < 10);
    *(int *)(param_2 + 0x18 + (uint)*(byte *)(param_2 + 0x15) * 4) = unaff_ESI;
    *(char *)(param_2 + 0x15) = *(char *)(param_2 + 0x15) + '\x01';
  }
  return;
}


/* END FUNCTION 0x0040ec20 */
