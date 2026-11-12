/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404ac0
 * Name: FUN_00404ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00404ac0(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_004ca084 == 0xcaa938db) {
    DAT_004ca084 = FID_conflict___time32((undefined4 *)0x0);
  }
  uVar1 = DAT_004ca084;
  DAT_004ca084 = DAT_004ca084 * 0x41c64e6d + 0x3039;
  uVar2 = uVar1 & 0xffff;
  uVar1 = (uVar2 * 0x4e6d + 0x3039 >> 0x10) + (uVar1 >> 0x10) * -0x3e39b193 + uVar2 * 0x41c6 &
          0x7fffffff;
  if (*(uint *)(param_2 + 4) != 0) {
    uVar1 = uVar1 % *(uint *)(param_2 + 4);
  }
  return uVar1;
}


/* END FUNCTION 0x00404ac0 */
