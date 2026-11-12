/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004079e0
 * Name: FUN_004079e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004079e0(void)

{
  uint *in_EAX;
  int iVar1;
  float10 extraout_ST0;
  ulonglong uVar2;
  
  if (*(char *)((int)in_EAX + 0x29) == '\0') {
    FUN_004076b0();
    __allrem(*in_EAX + 43200000,in_EAX[1] + (uint)(0xfd6cd1ff < *in_EAX),86400000,0);
    uVar2 = FUN_004a0540();
    iVar1 = (int)uVar2;
    in_EAX[5] = iVar1 / 0xe10;
    *(double *)(in_EAX + 8) = (double)(extraout_ST0 - (float10)iVar1);
    in_EAX[6] = (iVar1 % 0xe10) / 0x3c;
    *(undefined1 *)((int)in_EAX + 0x29) = 1;
    *(double *)(in_EAX + 8) = (double)((iVar1 % 0xe10) % 0x3c) + *(double *)(in_EAX + 8);
  }
  return;
}


/* END FUNCTION 0x004079e0 */
