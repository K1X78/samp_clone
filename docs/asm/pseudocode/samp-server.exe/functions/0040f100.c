/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f100
 * Name: FUN_0040f100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040f100(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_2 + 0xc);
  *puVar1 = 1000000;
  for (iVar2 = *(int *)(param_2 + 4); 4 < iVar2; iVar2 = iVar2 + -1) {
    puVar1[iVar2] = 5;
  }
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    puVar1[iVar2] = 0xb - iVar2;
  }
  if (*(char *)(param_2 + 0x18) != '\0') {
    puVar1[*(int *)(param_2 + 4)] = 1;
  }
  return;
}


/* END FUNCTION 0x0040f100 */
