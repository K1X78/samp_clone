/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b5c0
 * Name: FUN_0049b5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0049b5c0(void *this,void *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_194;
  int local_190 [100];
  
  piVar6 = local_190;
  for (iVar4 = 100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *(int *)this;
    this = (int *)((int)this + 4);
    piVar6 = piVar6 + 1;
  }
  puVar1 = (undefined4 *)((int)param_1 + 4);
  puVar2 = puVar1;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    puVar2 = (undefined4 *)*puVar1;
  }
  puVar5 = puVar1;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_0049ae60(param_1,&local_194,(int)puVar5,*(int *)((int)param_1 + 0x14) + (int)puVar2);
  if ((1 < param_2) && (param_2 < 0x11)) {
    do {
      FUN_0049b4c0(local_190,param_2,&local_194);
      puVar5 = puVar1;
      puVar2 = puVar1;
      if (0xf < *(uint *)((int)param_1 + 0x18)) {
        puVar5 = (undefined4 *)*puVar1;
        puVar2 = (undefined4 *)*puVar1;
      }
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)((int)puVar2 - (int)puVar5);
      }
      FUN_0049aec0(param_1,(uint)puVar2,1);
      uVar3 = 0;
      while (local_190[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (99 < uVar3) {
          return;
        }
      }
    } while( true );
  }
  return;
}


/* END FUNCTION 0x0049b5c0 */
