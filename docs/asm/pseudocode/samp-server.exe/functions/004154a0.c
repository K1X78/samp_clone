/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004154a0
 * Name: FUN_004154a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004154a0(undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[0xc];
  if ((*(byte *)((int)puVar1 + 0x1d) & 0x20) == 0) {
    if ((int)param_2 < 1) {
      FUN_0040d1e0();
      puVar1[5] = 0;
      *(undefined2 *)(puVar1 + 7) = 1;
      return puVar1[5];
    }
    FUN_00414b80(param_2,(int)puVar1);
    *(undefined2 *)(puVar1 + 7) = 0x2000;
    *puVar1 = *param_1;
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar1[5];
      for (uVar2 = (uint)param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = (uint)param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  return puVar1[5];
}


/* END FUNCTION 0x004154a0 */
