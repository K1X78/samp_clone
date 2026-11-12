/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c0b0
 * Name: FUN_0048c0b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0048c0b0(void *this,int param_1)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar4 = 0x100;
  iVar1 = 0;
  uVar2 = (uint)this | 0x100;
  do {
    uVar3 = uVar2 << 1;
    iVar1 = iVar1 + *(int *)(unaff_EDI +
                            ((uint)(*(ushort *)
                                     (param_1 + ((uVar2 >> 8) + (uVar4 & in_EAX << 1) + uVar4) * 2)
                                   >> 4) ^ (int)-(uVar2 >> 7 & 1) >> 4 & 0x7fU) * 4);
    uVar4 = uVar4 & ~((uVar2 ^ in_EAX) << 1);
    uVar2 = uVar3;
    in_EAX = in_EAX << 1;
  } while (uVar3 < 0x10000);
  return iVar1;
}


/* END FUNCTION 0x0048c0b0 */
