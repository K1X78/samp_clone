/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a2a1d
 * Name: __store_str
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall __store_str(int *param_1,char *param_2)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *(char *)*param_1 = *param_2;
    *param_1 = *param_1 + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}


/* END FUNCTION 0x004a2a1d */
