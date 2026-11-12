/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093120
 * Name: FUN_10093120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10093120(char *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*param_1 != '\0') {
    uVar2 = __alldiv(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 6),10,0);
    uVar1 = *(uint *)(param_1 + 10);
    *(uint *)(param_1 + 10) = uVar1 + (uint)uVar2;
    *(uint *)(param_1 + 0xe) =
         *(int *)(param_1 + 0xe) + (int)((ulonglong)uVar2 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar2)
    ;
  }
  return;
}


/* END FUNCTION 0x10093120 */
