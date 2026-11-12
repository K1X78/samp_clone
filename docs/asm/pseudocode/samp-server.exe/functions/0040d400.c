/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d400
 * Name: FUN_0040d400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040d400(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  
  FUN_0040d250((int)in_EAX);
  puVar2 = unaff_EBX;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_EAX = *puVar2;
    puVar2 = puVar2 + 1;
    in_EAX = in_EAX + 1;
  }
  *(undefined2 *)(unaff_EBX + 7) = 1;
  unaff_EBX[8] = 0;
  unaff_EBX[9] = 0;
  return;
}


/* END FUNCTION 0x0040d400 */
