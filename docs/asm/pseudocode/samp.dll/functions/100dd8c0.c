/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd8c0
 * Name: FUN_100dd8c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dd8c0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = 0;
  if ((*(byte *)(unaff_ESI + 0x48) & 2) != 0) {
    iVar2 = 4;
  }
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  if (iVar2 < *(int *)(unaff_ESI + 0x4c)) {
    if (*(code **)(unaff_ESI + 0x18) == (code *)0x0) {
      return 2;
    }
    iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x20),0,0,0);
    if (iVar1 == -1) {
      return 2;
    }
    if ((iVar1 < 0) || (2 < iVar1)) {
      return 1;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  *(int *)(unaff_ESI + 0x4c) = iVar2;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  return 0;
}


/* END FUNCTION 0x100dd8c0 */
