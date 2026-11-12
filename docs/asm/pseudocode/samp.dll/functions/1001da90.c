/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001da90
 * Name: FUN_1001da90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001da90(undefined4 *param_1)

{
  char cVar1;
  ushort *puVar2;
  char *pcVar3;
  byte local_142;
  char local_141;
  ushort local_140 [2];
  char local_13c [304];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113e9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar2 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  FUN_1001f470(local_140,0x10,1);
  FUN_1001f470(&local_142,8,1);
  if (local_142 < 0x19) {
    FUN_1001f960(local_13c,local_142);
    FUN_1001f470(&local_141,8,1);
    local_13c[local_142] = '\0';
    if (((local_141 == '\x01') && (local_140[0] < 0x3ed)) &&
       (*(int *)(puVar2 + (uint)local_140[0] * 2 + 0x13) != 0)) {
      pcVar3 = local_13c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_1000b490(local_13c,(int)pcVar3 - (int)(local_13c + 1));
    }
    if (*puVar2 == local_140[0]) {
      pcVar3 = local_13c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_1000b490(local_13c,(int)pcVar3 - (int)(local_13c + 1));
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001da90 */
