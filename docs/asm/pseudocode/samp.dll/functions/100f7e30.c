/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f7e30
 * Name: FUN_100f7e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f7e30(void)

{
  uint *in_EAX;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *unaff_EBX;
  int iVar4;
  int local_8;
  
  iVar4 = (int)unaff_EBX - (int)in_EAX;
  local_8 = 0x20;
  do {
    uVar3 = 0;
    puVar2 = unaff_EBX;
    for (uVar1 = *(uint *)(iVar4 + (int)in_EAX); uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 ^ *puVar2;
      }
      puVar2 = puVar2 + 1;
    }
    *in_EAX = uVar3;
    in_EAX = in_EAX + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


/* END FUNCTION 0x100f7e30 */
