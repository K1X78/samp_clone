/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d440
 * Name: FUN_0045d440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0045d440(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  puVar4 = (uint *)(param_1 + 0x6c);
  while( true ) {
    uVar1 = *puVar4;
    if (puVar4[1] < uVar1) {
      iVar3 = puVar4[2] - uVar1;
    }
    else {
      iVar3 = -uVar1;
    }
    iVar3 = puVar4[1] + iVar3;
    if (iVar3 != 0) break;
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 4;
    if (3 < uVar5) {
      iVar3 = thunk_FUN_0045b300(param_1 + 0x1c);
      if (iVar3 == 0) {
        bVar2 = FUN_0045b3b0(param_1 + 0x40);
        if (bVar2) {
          uVar5 = *(uint *)(param_1 + 0x10);
          if (*(uint *)(param_1 + 0x14) < uVar5) {
            iVar3 = *(int *)(param_1 + 0x18) - uVar5;
          }
          else {
            iVar3 = -uVar5;
          }
          if ((*(uint *)(param_1 + 0x14) + iVar3 == 0) && (*(int *)(param_1 + 4) == 0)) {
            iVar3 = FUN_0045b300(param_1 + 0xa8);
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


/* END FUNCTION 0x0045d440 */
