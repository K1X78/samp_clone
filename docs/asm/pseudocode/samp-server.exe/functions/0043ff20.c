/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043ff20
 * Name: FUN_0043ff20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0043ff20(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  do {
    if ((int)param_3 < 1) {
      return 0;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    uVar6 = __allrem(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),0x3fc,0);
    iVar1 = (int)uVar6;
    uVar4 = param_3;
    if ((int)(0x3fcU - iVar1) <= (int)param_3) {
      uVar4 = 0x3fcU - iVar1;
    }
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_0043aa50(0x400);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xc0a;
      }
      *puVar2 = 0;
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 4) = puVar2;
      }
      else {
        *puVar5 = puVar2;
      }
      *(undefined4 **)(param_1 + 0x10) = puVar2;
    }
    puVar5 = param_2;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 4 + iVar1);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    uVar3 = *(uint *)(param_1 + 8);
    param_2 = (undefined4 *)((int)param_2 + uVar4);
    param_3 = param_3 - uVar4;
    *(uint *)(param_1 + 8) = uVar3 + uVar4;
    *(uint *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar3,uVar4);
  } while( true );
}


/* END FUNCTION 0x0043ff20 */
