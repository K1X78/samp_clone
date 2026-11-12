/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055c80
 * Name: FUN_10055c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10055c80(int param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 1) != '\0') {
    cVar1 = FUN_100331a0(&DAT_10140210);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)FUN_10055640();
      *puVar2 = param_2;
      *(undefined2 *)(puVar2 + 1) = param_3;
      FUN_10055680();
    }
  }
  return;
}


/* END FUNCTION 0x10055c80 */
