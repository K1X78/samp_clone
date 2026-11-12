/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416620
 * Name: FUN_00416620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_00416620(void *this,uint param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = in_EAX;
  if (*param_4 <= *param_3) {
    puVar1 = FUN_004129a0(param_3,(param_2 + *param_4 * 2) * param_1,(int)this,in_EAX);
    if (puVar1 == (undefined4 *)0x0) {
      *param_5 = -1;
      return in_EAX;
    }
    uVar2 = FUN_004080b0((int)this);
    *param_4 = (int)uVar2 / (int)param_1;
  }
  puVar3 = (undefined4 *)(*param_3 * param_1 + (int)puVar1);
  for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *param_5 = *param_3;
  *param_3 = *param_3 + 1;
  return puVar1;
}


/* END FUNCTION 0x00416620 */
