/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f090
 * Name: FUN_0040f090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040f090(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 unaff_EDI;
  
  for (puVar1 = *(undefined4 **)(*(int *)(in_EAX + 0xc) + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x18) == param_2) {
      *(undefined4 *)(puVar1[2] + 0x18) = unaff_EDI;
    }
  }
  for (puVar1 = *(undefined4 **)(*(int *)(in_EAX + 0xc) + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x14) == param_2) {
      *(undefined4 *)(puVar1[2] + 0x14) = unaff_EDI;
    }
  }
  return;
}


/* END FUNCTION 0x0040f090 */
