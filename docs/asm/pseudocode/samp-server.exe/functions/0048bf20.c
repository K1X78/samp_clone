/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048bf20
 * Name: FUN_0048bf20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048bf20(int param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  uint *in_EAX;
  uint uVar5;
  ushort *unaff_EDI;
  
  uVar3 = *unaff_EDI;
  uVar5 = (*in_EAX >> 0xb) * (uint)uVar3;
  if (param_1 == 0) {
    *in_EAX = uVar5;
    sVar4 = (short)(0x800 - uVar3 >> 5);
  }
  else {
    puVar1 = in_EAX + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar5;
    in_EAX[3] = in_EAX[3] + (uint)CARRY4(uVar2,uVar5);
    *in_EAX = *in_EAX - uVar5;
    sVar4 = -(uVar3 >> 5);
  }
  *unaff_EDI = uVar3 + sVar4;
  if (*in_EAX < 0x1000000) {
    *in_EAX = *in_EAX << 8;
    FUN_0048be10();
    return;
  }
  return;
}


/* END FUNCTION 0x0048bf20 */
