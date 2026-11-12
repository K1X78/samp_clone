/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b500
 * Name: FUN_0040b500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x0040b554) */

int __cdecl FUN_0040b500(uint param_1)

{
  int iVar1;
  int unaff_ESI;
  longlong lVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  if ((3 < *(byte *)(unaff_ESI + 0xe)) && (**(int **)(unaff_ESI + 0x38) != 0)) {
    iVar1 = FUN_00407b40();
    lVar2 = __allmul(*(uint *)(unaff_ESI + 0x84),(int)*(uint *)(unaff_ESI + 0x84) >> 0x1f,param_1,0)
    ;
    if (iVar1 != 0) {
      return iVar1;
    }
    if (lVar2 == CONCAT44(local_4,local_8)) {
      return 0;
    }
    if (lVar2 < CONCAT44(local_4,local_8)) {
      iVar1 = FUN_00407b10();
    }
    else {
      iVar1 = FUN_00407af0();
    }
    if (iVar1 == 0) {
      *(uint *)(unaff_ESI + 0x20) = param_1;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0040b500 */
