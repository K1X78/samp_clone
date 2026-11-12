/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004886d0
 * Name: FUN_004886d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004886d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0xd00) = 0xffff;
  puVar1 = (undefined4 *)(param_1 + 0x800);
  iVar2 = 0x100;
  do {
    puVar1[-0x200] = 0;
    puVar1[-0x100] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x004886d0 */
