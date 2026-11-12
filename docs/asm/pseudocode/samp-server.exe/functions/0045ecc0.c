/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045ecc0
 * Name: FUN_0045ecc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0045ecc0(void *this,int param_1,int *param_2,uint param_3)

{
  void *this_00;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  ushort *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char local_9;
  void *local_8;
  void *local_4;
  
  puVar8 = (ushort *)(param_1 + 0x14);
  this_00 = (void *)((int)this + 0xa8);
  local_4 = this;
  uVar1 = FUN_0045c620(this_00,puVar8,&local_9);
  if (local_9 == '\0') {
    local_8 = operator_new(0x18);
    if (local_8 == (void *)0x0) {
      local_8 = (void *)0x0;
    }
    else {
      FUN_0045d790((undefined4 *)((int)local_8 + 8));
    }
    uVar1 = FUN_0045c6b0(this_00,puVar8,&local_8);
  }
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  FUN_0045c580((void *)(*piVar2 + 8),(uint *)(param_1 + 0x18),&param_1);
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  puVar10 = (undefined4 *)*piVar2;
  *puVar10 = param_2;
  puVar10[1] = param_3;
  uVar9 = *(uint *)((int)this + 0x30);
  piVar2 = param_2;
  if (uVar9 != 0) {
    piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
    piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),0);
    piVar2 = *(int **)(*piVar2 + 0x18);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      param_2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),0);
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      piVar2 = (int *)FUN_0045b300(*piVar2 + 8);
      if (piVar2 != *(int **)(*param_2 + 0x1c)) {
        piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
        uVar3 = FUN_0045b300(*piVar2 + 8);
        piVar2 = (int *)(uVar3 / uVar9);
        if (uVar3 % uVar9 == 0) {
          piVar2 = FUN_0045bd60((int *)((int)this + 0x728));
          param_2 = piVar2;
          piVar4 = (int *)FUN_0045b2f0(this_00,uVar1);
          piVar4 = (int *)FUN_0045b2f0((void *)(*piVar4 + 8),0);
          uVar9 = (*(int *)(*piVar4 + 0x30) + 7U >> 3) + 0xd;
          pvVar5 = operator_new(uVar9);
          piVar2[0xd] = (int)pvVar5;
          piVar2[0xc] = uVar9 * 8;
          *(undefined1 *)piVar2[0xd] = 0x5c;
          piVar4 = (int *)FUN_0045b2f0(this_00,uVar1);
          uVar6 = FUN_0045b300(*piVar4 + 8);
          *(undefined4 *)(piVar2[0xd] + 1) = uVar6;
          *(undefined4 *)(piVar2[0xd] + 5) = *(undefined4 *)(param_1 + 0x1c);
          piVar4 = (int *)FUN_0045b2f0(this_00,uVar1);
          piVar4 = (int *)FUN_0045b2f0((void *)(*piVar4 + 8),0);
          *(uint *)(piVar2[0xd] + 9) = *(int *)(*piVar4 + 0x30) + 7U >> 3;
          piVar4 = (int *)FUN_0045b2f0(this_00,uVar1);
          piVar4 = (int *)FUN_0045b2f0((void *)(*piVar4 + 8),0);
          piVar7 = (int *)FUN_0045b2f0(this_00,uVar1);
          piVar7 = (int *)FUN_0045b2f0((void *)(*piVar7 + 8),0);
          uVar1 = *(int *)(*piVar4 + 0x30) + 7;
          puVar10 = *(undefined4 **)(*piVar7 + 0x34);
          puVar11 = (undefined4 *)(piVar2[0xd] + 0xd);
          for (uVar9 = uVar1 >> 5; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar1 = uVar1 >> 3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          piVar2 = (int *)FUN_0044e2a0((void *)((int)local_4 + 0xc),&param_2);
        }
      }
    }
  }
  return (uint)piVar2;
}


/* END FUNCTION 0x0045ecc0 */
