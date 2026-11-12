/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ab00
 * Name: FUN_0044ab00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0044ab00(int *param_1,int *param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; param_2 != (int *)0x0; param_2 = (int *)param_2[8]) {
    if (((*(byte *)(param_2 + 2) == param_3) && (*(byte *)((int)param_2 + 9) == param_5)) &&
       (iVar1 = FUN_00410230(param_2[4]), iVar1 != 0)) {
      FUN_0044aa60(param_1,param_2,param_6,param_7,param_8,param_9);
    }
  }
  return;
}


/* END FUNCTION 0x0044ab00 */
