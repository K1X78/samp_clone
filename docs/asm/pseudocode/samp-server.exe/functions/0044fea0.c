/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044fea0
 * Name: FUN_0044fea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044fea0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (0xff < (int)param_2) {
    param_2 = 0xff;
  }
  if (param_1 != (undefined4 *)0x0) {
    if (0 < (int)param_2) {
      puVar2 = (undefined4 *)((int)this + 0x23a);
      for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    *(char *)((int)this + 0x33a) = (char)param_2;
    return;
  }
  *(undefined1 *)((int)this + 0x33a) = 0;
  return;
}


/* END FUNCTION 0x0044fea0 */
