/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004416d0
 * Name: FUN_004416d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004416d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint local_4;
  
  local_4 = 0;
  iVar2 = FUN_00419e00();
  if (iVar2 != 0) {
    uVar3 = FUN_0041d7c0();
    return uVar3;
  }
  iVar2 = *param_1;
  FUN_00407e50(*(int *)(iVar2 + 0x44));
  uVar3 = FUN_00441560();
  puVar1 = (undefined4 *)0x0;
  do {
    if (uVar3 != 0x11) {
LAB_004417ad:
      uVar3 = FUN_004340c0(uVar3);
      FUN_00407e90(*(int *)(iVar2 + 0x44));
      return uVar3;
    }
    if (4 < (int)puVar1) {
      if (local_4 != 0) {
LAB_0044175c:
        if (((char)param_1[0x1a] != '\0') && (*(int *)(iVar2 + 0xd0) != 0)) {
          FUN_0041ffb0();
          FUN_00408130(iVar2);
          if (*(char *)(iVar2 + 0x1e) == '\0') {
            pcVar4 = FUN_00412a70();
            param_1[0x17] = (int)pcVar4;
            param_1[0x16] = local_4;
          }
          else {
            uVar3 = 7;
            param_1[0x17] = 0;
            param_1[0x16] = 7;
          }
        }
      }
      goto LAB_004417ad;
    }
    uVar3 = FUN_00436100(puVar1);
    local_4 = uVar3;
    if (uVar3 != 0) goto LAB_0044175c;
    FUN_004343b0(param_1);
    *(undefined1 *)((int)param_1 + 0x62) = 0;
    uVar3 = FUN_00441560();
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  } while( true );
}


/* END FUNCTION 0x004416d0 */
