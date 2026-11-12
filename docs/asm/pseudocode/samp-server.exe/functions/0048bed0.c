/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048bed0
 * Name: FUN_0048bed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048bed0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  uint *unaff_ESI;
  
  do {
    uVar2 = *unaff_ESI >> 1;
    in_EAX = in_EAX + -1;
    uVar1 = unaff_ESI[2];
    *unaff_ESI = uVar2;
    uVar3 = -(unaff_EBX >> ((byte)in_EAX & 0x1f) & 1) & uVar2;
    unaff_ESI[2] = uVar1 + uVar3;
    unaff_ESI[3] = unaff_ESI[3] + (uint)CARRY4(uVar1,uVar3);
    if (uVar2 < 0x1000000) {
      *unaff_ESI = uVar2 << 8;
      FUN_0048be10();
    }
  } while (in_EAX != 0);
  return;
}


/* END FUNCTION 0x0048bed0 */
