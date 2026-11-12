/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00435bb0
 * Name: FUN_00435bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00435bb0(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar2 = FUN_0040fc30(*in_EAX);
  FUN_0042cdb0((byte)iVar2,0);
  iVar1 = in_EAX[0x11];
  in_EAX[0x11] = iVar1 + 2;
  FUN_00420800(iVar2,iVar1,*(int *)(param_1 + 4));
  FUN_004356f0(in_EAX,param_1,iVar1);
  FUN_00420910();
  return;
}


/* END FUNCTION 0x00435bb0 */
