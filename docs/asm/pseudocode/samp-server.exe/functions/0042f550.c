/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f550
 * Name: FUN_0042f550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0042f550(void *this,int param_1)

{
  byte *in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  iVar3 = 0;
  ppuVar4 = &PTR_s_full_column_names_004b3410;
  do {
    iVar1 = FUN_00408450(in_EAX,*ppuVar4);
    if (iVar1 == 0) {
      iVar3 = *(int *)this;
      iVar1 = FUN_0041c720();
      if (iVar1 != 0) {
        if (param_1 == 0) {
          FUN_0042f4d0(*ppuVar4,(uint)((*(uint *)(iVar3 + 0xc) & (uint)ppuVar4[1]) != 0),0);
          return 1;
        }
        puVar5 = ppuVar4[1];
        if (*(char *)(iVar3 + 0x1c) == '\0') {
          puVar5 = (undefined *)((uint)puVar5 & 0xfbffffff);
        }
        uVar2 = FUN_0040fb00();
        if ((char)uVar2 == '\0') {
          uVar2 = *(uint *)(iVar3 + 0xc) & ~(uint)puVar5;
        }
        else {
          uVar2 = *(uint *)(iVar3 + 0xc) | (uint)puVar5;
        }
        *(uint *)(iVar3 + 0xc) = uVar2;
        FUN_00414e70(0,0x7a);
      }
      return 1;
    }
    iVar3 = iVar3 + 1;
    ppuVar4 = ppuVar4 + 2;
  } while (iVar3 < 0xe);
  return 0;
}


/* END FUNCTION 0x0042f550 */
