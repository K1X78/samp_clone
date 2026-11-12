/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e920
 * Name: FUN_0040e920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040e920(undefined4 param_1,int param_2)

{
  int in_EAX;
  
  if (*(char *)(param_2 + 8) != '\0') {
    if (*(byte *)(in_EAX + 0x15) < 8) {
      *(undefined4 *)(in_EAX + 0x18 + (uint)*(byte *)(in_EAX + 0x15) * 4) =
           *(undefined4 *)(param_2 + 0x10);
      *(char *)(in_EAX + 0x15) = *(char *)(in_EAX + 0x15) + '\x01';
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}


/* END FUNCTION 0x0040e920 */
