/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fad0
 * Name: FUN_0042fad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042fad0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  int local_30;
  
  FUN_0040c2c0();
  FUN_0040c2c0();
  piVar3 = &local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  FUN_0042c4d0(&local_30,0x7fffffff);
  uVar1 = FUN_0042fa00(&local_30);
  if (uVar1 == 0) {
    *(undefined1 *)(*(int *)(unaff_EBX + 4) + 0x11) = 0;
  }
  FUN_0040c340();
  FUN_0040c340();
  return uVar1;
}


/* END FUNCTION 0x0042fad0 */
