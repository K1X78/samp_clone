/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c27c0
 * Name: FUN_100c27c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100c27c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  
  if (in_EAX == 0) {
    return *(int *)(param_1 + 0x30d29 +
                   ((*(ushort *)(param_1 + 0x325dd + (param_2 * 0x10 + param_3) * 2) ^ 0x7f0) >> 4)
                   * 4) +
           *(int *)(param_1 + 0x30d29 +
                   (uint)(*(ushort *)(param_1 + 0x32595 + param_2 * 2) >> 4) * 4);
  }
  iVar1 = *(int *)(param_1 + 0x30d29 +
                  ((*(ushort *)(param_1 + 0x32595 + param_2 * 2) ^ 0x7f0) >> 4) * 4);
  if (in_EAX == 1) {
    return iVar1 + *(int *)(param_1 + 0x30d29 +
                           (uint)(*(ushort *)(param_1 + 0x325ad + param_2 * 2) >> 4) * 4);
  }
  return iVar1 + *(int *)(param_1 + 0x30d29 +
                         ((uint)(*(ushort *)(param_1 + 0x325c5 + param_2 * 2) >> 4) ^
                         2 - in_EAX >> 4 & 0x7fU) * 4) +
                 *(int *)(param_1 + 0x30d29 +
                         ((*(ushort *)(param_1 + 0x325ad + param_2 * 2) ^ 0x7f0) >> 4) * 4);
}


/* END FUNCTION 0x100c27c0 */
