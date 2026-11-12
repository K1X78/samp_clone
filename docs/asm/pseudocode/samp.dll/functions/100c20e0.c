/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c20e0
 * Name: FUN_100c20e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c20e0(void)

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
    uVar1 = *(uint *)((int)unaff_ESI + 5);
    *unaff_ESI = uVar2;
    uVar3 = -(unaff_EBX >> ((byte)in_EAX & 0x1f) & 1) & uVar2;
    *(uint *)((int)unaff_ESI + 5) = uVar1 + uVar3;
    *(uint *)((int)unaff_ESI + 9) = *(int *)((int)unaff_ESI + 9) + (uint)CARRY4(uVar1,uVar3);
    if (uVar2 < 0x1000000) {
      *unaff_ESI = uVar2 << 8;
      FUN_100c2020();
    }
  } while (in_EAX != 0);
  return;
}


/* END FUNCTION 0x100c20e0 */
