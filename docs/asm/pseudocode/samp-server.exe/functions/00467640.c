/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467640
 * Name: FUN_00467640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00467640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5e94);
  uVar2 = 0;
  if (-1 < iVar1) {
    do {
      if (((ushort)uVar2 < 2000) && (*(int *)(param_1 + 0x2014 + (uVar2 & 0xffff) * 4) == 1)) {
        FUN_00489b60(*(undefined4 **)(param_1 + 0x3f54 + (uVar2 & 0xffff) * 4));
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00467640 */
