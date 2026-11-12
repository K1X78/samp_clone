/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419550
 * Name: FUN_00419550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00419550(undefined4 *param_1)

{
  int iVar1;
  undefined4 *extraout_EDX;
  undefined4 *unaff_ESI;
  
  iVar1 = 0;
  if ((*(char *)((int)unaff_ESI + 0xb) == '\0') && (unaff_ESI[0x2b] == 0)) {
    iVar1 = FUN_0040ba60();
    if (iVar1 == 0) {
      return 0xe;
    }
    iVar1 = FUN_00414640((void *)*unaff_ESI,unaff_ESI[0xe],extraout_EDX);
    if (iVar1 == 0) {
      *(undefined1 *)((int)unaff_ESI + 5) = 5;
      return 0;
    }
  }
  else {
    *param_1 = 1;
  }
  return iVar1;
}


/* END FUNCTION 0x00419550 */
