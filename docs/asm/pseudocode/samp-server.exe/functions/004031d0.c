/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004031d0
 * Name: FUN_004031d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004031d0(uint *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (uint *)0x0) {
    *param_2 = 0;
    return 0x19;
  }
  uVar5 = *param_1;
  if (uVar5 < 0x1000000) {
    iVar4 = 0;
    while (uVar5 != 0) {
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      uVar5 = param_1[iVar1];
    }
  }
  else {
    puVar2 = param_1;
    do {
      uVar5 = *puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
    } while ((char)uVar5 != '\0');
    uVar3 = (int)puVar2 - ((int)param_1 + 1);
    uVar5 = *(uint *)((int)param_1 + (uVar3 & 0xfffffffc));
    iVar4 = uVar3 - (uVar3 & 3);
    if ((uVar5 & 0xff000000) != 0) {
      do {
        uVar5 = uVar5 << 8;
        iVar4 = iVar4 + 1;
      } while ((uVar5 & 0xff000000) != 0);
      *param_2 = iVar4;
      return 0;
    }
  }
  *param_2 = iVar4;
  return 0;
}


/* END FUNCTION 0x004031d0 */
