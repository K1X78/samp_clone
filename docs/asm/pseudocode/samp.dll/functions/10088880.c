/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10088880
 * Name: FUN_10088880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10088880(int param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x150))) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x4d))) {
    puVar2 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x14c) + param_2 * 4) + 0x101 + param_3 * 0x81);
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _strncpy((char *)(*(int *)(*(int *)(param_1 + 0x14c) + param_2 * 4) + 0x101 + param_3 * 0x81),
             param_4,0x80);
  }
  return;
}


/* END FUNCTION 0x10088880 */
