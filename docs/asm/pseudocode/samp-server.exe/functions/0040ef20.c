/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ef20
 * Name: FUN_0040ef20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040ef20(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *extraout_ECX;
  int unaff_EBX;
  undefined4 *puVar5;
  
  iVar1 = -1;
  if (param_1 != (byte *)0x0) {
    uVar2 = FUN_00408380((char *)param_1);
    iVar1 = *(int *)(unaff_EBX + 4) + -1;
    puVar5 = (undefined4 *)(iVar1 * 0x10 + *(int *)(unaff_EBX + 8));
    while ((-1 < iVar1 &&
           ((uVar3 = FUN_00408380((char *)*puVar5), uVar2 != uVar3 ||
            (iVar4 = FUN_00408450(extraout_ECX,param_1), iVar4 != 0))))) {
      iVar1 = iVar1 + -1;
      puVar5 = puVar5 + -4;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0040ef20 */
