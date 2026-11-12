/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c5b0
 * Name: FUN_0048c5b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0048c5b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  
  if (in_EAX == 0) {
    return *(int *)(param_1 + 0x30d34 +
                   ((*(ushort *)(param_1 + 0x325e8 + (param_2 * 0x10 + param_3) * 2) ^ 0x7f0) >> 4)
                   * 4) +
           *(int *)(param_1 + 0x30d34 +
                   (uint)(*(ushort *)(param_1 + 0x325a0 + param_2 * 2) >> 4) * 4);
  }
  iVar1 = *(int *)(param_1 + 0x30d34 +
                  ((*(ushort *)(param_1 + 0x325a0 + param_2 * 2) ^ 0x7f0) >> 4) * 4);
  if (in_EAX == 1) {
    return iVar1 + *(int *)(param_1 + 0x30d34 +
                           (uint)(*(ushort *)(param_1 + 0x325b8 + param_2 * 2) >> 4) * 4);
  }
  return iVar1 + *(int *)(param_1 + 0x30d34 +
                         ((uint)(*(ushort *)(param_1 + 0x325d0 + param_2 * 2) >> 4) ^
                         2 - in_EAX >> 4 & 0x7fU) * 4) +
                 *(int *)(param_1 + 0x30d34 +
                         ((*(ushort *)(param_1 + 0x325b8 + param_2 * 2) ^ 0x7f0) >> 4) * 4);
}


/* END FUNCTION 0x0048c5b0 */
