/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415510
 * Name: FUN_00415510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00415510(void *this,undefined4 *param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 < 0) {
LAB_0041554c:
    if (param_4 != (undefined *)0x0) {
      (*(code *)param_4)(param_3);
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = 0;
LAB_00415532:
      puVar1 = FUN_004129a0(this,param_2 * 8 + 0x10,param_1[6],puVar1);
      if (puVar1 == (undefined4 *)0x0) goto LAB_0041554c;
      param_1[1] = puVar1;
      puVar4 = puVar1 + iVar3 * 2 + 2;
      for (uVar2 = (param_2 - iVar3) * 8 + 8U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar1[1] = param_2 + 1;
      *puVar1 = *param_1;
    }
    else {
      iVar3 = puVar1[1];
      if (iVar3 <= param_2) goto LAB_00415532;
    }
    if ((puVar1[param_2 * 2 + 2] != 0) && ((code *)puVar1[param_2 * 2 + 3] != (code *)0x0)) {
      (*(code *)puVar1[param_2 * 2 + 3])(puVar1[param_2 * 2 + 2]);
    }
    puVar1[param_2 * 2 + 2] = param_3;
    puVar1[param_2 * 2 + 3] = param_4;
  }
  return;
}


/* END FUNCTION 0x00415510 */
