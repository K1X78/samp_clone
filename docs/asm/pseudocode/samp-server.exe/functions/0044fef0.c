/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044fef0
 * Name: FUN_0044fef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044fef0(void *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = (uint)*(byte *)((int)this + 0x33a);
  if (param_1 == (undefined4 *)0x0) {
    *param_2 = uVar1;
    return;
  }
  if ((int)uVar1 < (int)*param_2) {
    *param_2 = uVar1;
  }
  uVar1 = *param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)((int)this + 0x23a);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}


/* END FUNCTION 0x0044fef0 */
