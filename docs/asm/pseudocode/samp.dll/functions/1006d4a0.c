/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d4a0
 * Name: FUN_1006d4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006d4a0(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144 [48];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_104 [260];
  
  if (DAT_102aca24 != 0) {
    iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
    uVar1 = *(ushort *)(param_1 + 4);
    if ((((uVar1 < 0x835) && (*(int *)(iVar2 + 4 + (uint)uVar1 * 4) != 0)) && (uVar1 < 0x835)) &&
       (((*(int *)(iVar2 + 4 + (uint)uVar1 * 4) != 0 &&
         (*(int *)(iVar2 + 0x20d4 + (uint)uVar1 * 4) != 0)) &&
        (fVar4 = (float10)FUN_1009efd0(), fVar4 < (float10)150.0 != (fVar4 == (float10)150.0))))) {
      FUN_1009e950();
      local_150 = local_114;
      local_14c = local_110;
      local_148 = local_10c;
      FUN_100717c0(local_144,0x3f800000);
      fVar4 = (float10)FUN_1009efd0();
      uVar3 = FUN_1009ee70((double)fVar4);
      _sprintf(local_104,"[id: %d, type: %d]\nDistance: %.2fm\n",(uint)*(ushort *)(param_1 + 4),
               uVar3);
      FUN_1006b6b0();
      FUN_1006b6d0(&local_150,local_104,0xffd47b75,1,0);
      FUN_1006b6c0();
    }
  }
  return;
}


/* END FUNCTION 0x1006d4a0 */
