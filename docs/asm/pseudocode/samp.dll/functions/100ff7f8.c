/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ff7f8
 * Name: FUN_100ff7f8
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ff7f8(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x38);
  _FindAndUnlinkFrame(*(undefined4 *)(unaff_EBP + -0x3c));
  p_Var1 = __getptd();
  p_Var1->_unexpected = *(void **)(unaff_EBP + -0x40);
  p_Var1 = __getptd();
  p_Var1->_translator = *(void **)(unaff_EBP + -0x44);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((unaff_ESI[5] == 0x19930520 || (unaff_ESI[5] == 0x19930521)))) &&
     ((*(int *)(unaff_EBP + -0x48) == 0 && (*(int *)(unaff_EBP + -0x20) != 0)))) {
    iVar2 = IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      __abnormal_termination();
      ___DestructExceptionObject();
    }
  }
  return;
}


/* END FUNCTION 0x100ff7f8 */
