/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004909d0
 * Name: FUN_004909d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004909d0(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  puVar1 = FUN_00490520(this,(int)param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    if ((uint)puVar1[9] < 0x10) {
      pbVar2 = (byte *)(puVar1 + 4);
    }
    else {
      pbVar2 = (byte *)puVar1[4];
    }
    uVar3 = FUN_004903a0(param_2,0,*(uint *)((int)param_2 + 0x14),pbVar2,puVar1[8]);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


/* END FUNCTION 0x004909d0 */
