/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b000
 * Name: FUN_0040b000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040b000(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  
  uVar1 = *(uint *)(in_EAX + 0xc);
  iVar2 = *(int *)(*(int *)(in_EAX + 0x10) + 100);
  iVar5 = 0;
  if (0 < iVar2) {
    puVar4 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 0x10) + 0x60) + 0x10);
    do {
      if (uVar1 <= (uint)puVar4[1]) {
        bVar3 = FUN_00409e90((uint *)*puVar4);
        if (CONCAT31(extraout_var,bVar3) == 0) {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar5 < iVar2);
  }
  return 0;
}


/* END FUNCTION 0x0040b000 */
