/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f3d0
 * Name: FUN_0042f3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f3d0(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004154a0(param_1,(void *)0x0);
  if (((puVar1 != (undefined8 *)0x0) && (-1 < *(int *)((int)puVar1 + 0x14))) &&
     ((0 < *(int *)((int)puVar1 + 0x14) || (*(int *)(puVar1 + 2) != 0)))) {
    if (*(char *)(puVar1 + 3) != '\0') {
      FUN_0042e970((int)param_1,"integer overflow",(void *)0xffffffff);
      return;
    }
    if (*(char *)((int)puVar1 + 0x19) != '\0') {
      FUN_0042e950(param_1,*puVar1);
      return;
    }
    FUN_0040ddd0(param_1,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((int)puVar1 + 0xc));
  }
  return;
}


/* END FUNCTION 0x0042f3d0 */
