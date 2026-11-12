/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026230
 * Name: FUN_10026230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_10026230(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined1 *)*param_1;
  uVar3 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    cVar1 = FUN_1001f3e0();
    if (cVar1 == '\0') {
      puVar2 = *(undefined1 **)(puVar2 + 5);
    }
    else {
      puVar2 = *(undefined1 **)(puVar2 + 9);
    }
    if ((*(int *)(puVar2 + 5) == 0) && (*(int *)(puVar2 + 9) == 0)) {
      if (uVar3 < param_4) {
        *(undefined1 *)(uVar3 + param_5) = *puVar2;
      }
      puVar2 = (undefined1 *)*param_1;
      uVar3 = uVar3 + 1;
    }
  }
  return uVar3;
}


/* END FUNCTION 0x10026230 */
