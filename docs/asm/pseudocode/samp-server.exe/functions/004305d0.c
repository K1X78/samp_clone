/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004305d0
 * Name: FUN_004305d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004305d0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  uint extraout_ECX;
  
  pcVar1 = (char *)FUN_0041ffb0();
  FUN_0041ffb0();
  FUN_0040de20(param_1);
  uVar2 = extraout_ECX;
  if (pcVar1 != (char *)0x0) {
    do {
      if (*pcVar1 == '\0') {
        return;
      }
      do {
        pcVar1 = pcVar1 + uVar2;
        uVar2 = FUN_00410a30(&param_3);
      } while (param_3 == 0x95);
    } while ((param_3 != 0x16) && (param_3 != 0x79));
    pvVar3 = (void *)FUN_00418920((undefined **)"%.*s\"%w\"%s");
    FUN_0042fcb0(param_1,pvVar3,(void *)0xffffffff);
  }
  return;
}


/* END FUNCTION 0x004305d0 */
