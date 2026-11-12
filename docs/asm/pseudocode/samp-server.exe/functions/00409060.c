/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409060
 * Name: FUN_00409060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00409060(undefined4 param_1,int *param_2)

{
  int *in_EAX;
  int iVar1;
  int unaff_EDI;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2[1];
    }
    *param_2 = *param_2 + 1;
    param_2[1] = (int)in_EAX;
    if (iVar1 != 0) {
      *in_EAX = iVar1;
      in_EAX[1] = *(int *)(iVar1 + 4);
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar1 + 4) = in_EAX;
        *(int **)(iVar1 + 4) = in_EAX;
        return;
      }
      *(int **)(unaff_EDI + 8) = in_EAX;
      *(int **)(iVar1 + 4) = in_EAX;
      return;
    }
  }
  *in_EAX = *(int *)(unaff_EDI + 8);
  if (*(int *)(unaff_EDI + 8) != 0) {
    *(int **)(*(int *)(unaff_EDI + 8) + 4) = in_EAX;
  }
  in_EAX[1] = 0;
  *(int **)(unaff_EDI + 8) = in_EAX;
  return;
}


/* END FUNCTION 0x00409060 */
