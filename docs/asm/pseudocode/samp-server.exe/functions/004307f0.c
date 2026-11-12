/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004307f0
 * Name: FUN_004307f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004307f0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  uint extraout_ECX;
  int iVar4;
  
  pcVar1 = (char *)FUN_0041ffb0();
  FUN_0041ffb0();
  iVar4 = 3;
  FUN_0040de20(param_1);
  uVar2 = extraout_ECX;
  if (pcVar1 != (char *)0x0) {
    do {
      while( true ) {
        if (*pcVar1 == '\0') {
          return;
        }
        do {
          pcVar1 = pcVar1 + uVar2;
          uVar2 = FUN_00410a30(&param_3);
        } while (param_3 == 0x95);
        iVar4 = iVar4 + 1;
        if ((param_3 != 0x76) && (param_3 != 0x68)) break;
        iVar4 = 0;
      }
    } while ((iVar4 != 2) || (((param_3 != 0x87 && (param_3 != 0x2d)) && (param_3 != 5))));
    pvVar3 = (void *)FUN_00418920((undefined **)"%.*s\"%w\"%s");
    FUN_0042fcb0(param_1,pvVar3,(void *)0xffffffff);
  }
  return;
}


/* END FUNCTION 0x004307f0 */
