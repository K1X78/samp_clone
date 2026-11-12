/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410880
 * Name: FUN_00410880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00410880(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int *in_EAX;
  
  if (in_EAX != (int *)0x0) {
    do {
      if ((*(byte *)((int)in_EAX + 0x12) & 4) != 0) {
        return;
      }
      if ((*(int *)(param_2 + 0xc) != 0) && ((*(byte *)(*in_EAX + 2) & 1) == 0)) {
        return;
      }
      *(byte *)((int)in_EAX + 0x12) = *(byte *)((int)in_EAX + 0x12) | 4;
      if (in_EAX[1] < 0) {
        return;
      }
      in_EAX = (int *)(*(int *)(in_EAX[5] + 0x1c) + in_EAX[1] * 0x28);
      pcVar1 = (char *)((int)in_EAX + 0x13);
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 == '\0');
  }
  return;
}


/* END FUNCTION 0x00410880 */
