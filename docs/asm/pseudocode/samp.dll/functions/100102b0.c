/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100102b0
 * Name: FUN_100102b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100102b0(undefined4 *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort local_12c [2];
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011306b;
  local_c = ExceptionList;
  uVar3 = (int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,uVar3 + 1,0);
  local_4 = 0;
  if (uVar3 != 0) {
    puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    uVar2 = 0;
    if (uVar3 / 10 != 0) {
      do {
        FUN_1001f470(local_12c,0x10,1);
        FUN_1001f470(&local_128,0x20,1);
        FUN_1001f470(local_124,0x20,1);
        if (local_12c[0] < 0x3ec) {
          if (local_12c[0] == *puVar1) {
            *(undefined4 *)(puVar1 + 0x179d) = local_128;
          }
          else if (*(undefined4 **)(puVar1 + (uint)local_12c[0] * 2 + 0x13) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar1 + (uint)local_12c[0] * 2 + 0x13) = local_128;
          }
          if (local_12c[0] == *puVar1) {
            *(undefined4 *)(puVar1 + 0x179b) = local_124[0];
          }
          else if ((local_12c[0] < 0x3ed) && (*(int *)(puVar1 + (uint)local_12c[0] * 2 + 0x13) != 0)
                  ) {
            *(undefined4 *)(*(int *)(puVar1 + (uint)local_12c[0] * 2 + 0x13) + 0xc) = local_124[0];
          }
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffff) < uVar3 / 10);
    }
    if (DAT_102ac9dc != 0) {
      FUN_1006e760();
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100102b0 */
