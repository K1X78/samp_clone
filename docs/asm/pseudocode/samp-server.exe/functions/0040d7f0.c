/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d7f0
 * Name: FUN_0040d7f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040d7f0(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  
  piVar1 = (int *)*in_EAX;
  piVar1[5] = in_EAX[2];
  piVar1[3] = in_EAX[3];
  piVar1[0x13] = in_EAX[4];
  piVar1[0x12] = in_EAX[5];
  piVar1[0xd] = in_EAX[6];
  *(short *)((int)piVar1 + 0x32) = (short)in_EAX[7];
  iVar2 = *piVar1;
  *(int *)(iVar2 + 0x30) = in_EAX[0xc];
  *(int *)(iVar2 + 0x34) = in_EAX[0xd];
  piVar1[0x1b] = in_EAX[0xe];
  return in_EAX[1];
}


/* END FUNCTION 0x0040d7f0 */
