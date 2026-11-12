/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436060
 * Name: FUN_00436060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00436060(int param_1,int param_2,undefined1 param_3,int param_4,int *param_5)

{
  int in_EAX;
  int iVar1;
  int *unaff_ESI;
  
  *unaff_ESI = 0;
  iVar1 = FUN_0041e030();
  if (iVar1 == 0) {
    iVar1 = FUN_0041d7c0();
    return iVar1;
  }
  FUN_00407e50(*(int *)(in_EAX + 0x44));
  FUN_0040c380(in_EAX);
  iVar1 = FUN_00435d60(param_1,param_2,param_3,param_4,unaff_ESI,param_5);
  if (iVar1 == 0x11) {
    FUN_00434350((int *)*unaff_ESI);
    iVar1 = FUN_00435d60(param_1,param_2,param_3,param_4,unaff_ESI,param_5);
  }
  FUN_0040c430();
  FUN_00407e90(*(int *)(in_EAX + 0x44));
  return iVar1;
}


/* END FUNCTION 0x00436060 */
