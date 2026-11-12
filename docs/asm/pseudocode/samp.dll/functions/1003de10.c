/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003de10
 * Name: FUN_1003de10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1003de10(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar1 = FUN_1003c2a0(param_1,param_2,0,0);
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    puVar4 = (ushort *)(iVar1 + 0x710);
    do {
      if (*puVar4 == 0xffff) break;
      iVar2 = iVar2 + (uint)*puVar4;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar3 < 5);
    if (0 < iVar3) {
      return iVar2 / iVar3;
    }
  }
  return -1;
}


/* END FUNCTION 0x1003de10 */
