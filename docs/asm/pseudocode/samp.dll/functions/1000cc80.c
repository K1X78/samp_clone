/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000cc80
 * Name: FUN_1000cc80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __thiscall FUN_1000cc80(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    bVar4 = uVar1 != 0;
    do {
      if (bVar4) {
        iVar2 = *(int *)(*param_1 + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      if ((*(int *)(iVar2 + 0x10) == param_2) && (*(char *)(iVar2 + 7) == '\x01')) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while (uVar3 != uVar1);
  }
  return 0;
}


/* END FUNCTION 0x1000cc80 */
