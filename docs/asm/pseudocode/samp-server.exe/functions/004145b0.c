/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004145b0
 * Name: FUN_004145b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004145b0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  if (*(int *)(in_EAX + 0x30) != 0) {
    piVar6 = &local_c;
    piVar5 = &local_8;
    FUN_0040bd90();
    FUN_00414540(piVar5,piVar6);
    local_c = *(int *)(in_EAX + 0x30) - local_c;
    iVar1 = 0;
    do {
      if (local_c < (int)(uint)*(ushort *)(local_8 + iVar1 * 2)) {
        *(undefined2 *)(local_8 + iVar1 * 2) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x2000);
    uVar2 = ((local_8 + local_c * -4) - local_4) - 4;
    puVar4 = (undefined4 *)(local_c * 4 + 4 + local_4);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}


/* END FUNCTION 0x004145b0 */
