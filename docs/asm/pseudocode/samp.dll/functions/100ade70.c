/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ade70
 * Name: FUN_100ade70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ade70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar3 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x2b0) == '\0') {
        iVar3 = FUN_100a70f0();
      }
      else {
        iVar3 = FUN_100a7110(*(char *)(param_1 + 0x2b0));
      }
      iVar1 = *(int *)(param_1 + 0x2a4);
      iVar2 = *(int *)(iVar1 + 0x58c);
      if (((iVar2 != 0) && ((*(uint *)(iVar1 + 0x46c) & 0x100) != 0)) &&
         (*(int *)(iVar2 + 0x460) == iVar1)) {
        *(bool *)(iVar2 + 0x514) = *(short *)(iVar3 + 0x24) != 0;
      }
    }
  }
  return;
}


/* END FUNCTION 0x100ade70 */
