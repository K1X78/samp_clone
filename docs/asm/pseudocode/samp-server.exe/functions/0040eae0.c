/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040eae0
 * Name: FUN_0040eae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040eae0(undefined4 param_1,int param_2)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(in_EAX + 0x68);
  iVar2 = 10;
  do {
    if (*(int *)(puVar1 + 8) == param_2) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x0040eae0 */
