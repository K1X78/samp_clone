/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004560f0
 * Name: FUN_004560f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004560f0(void *this,undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 local_fc;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3 [8];
  undefined4 local_c0 [45];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00462940(local_c0);
  local_4 = 0;
  local_fc = 0xf;
  uVar4 = FUN_0044e910();
  if (*(uint *)((int)this + 0xd98) < (uint)uVar4) {
    FUN_004508e0((int)this);
  }
  FUN_00460b10((int)local_c0);
  FUN_00462760(local_c0,&param_1,4);
  FUN_00462760(local_c0,(undefined4 *)&param_2,2);
  FUN_00462760(local_c0,(undefined4 *)((int)this + 0xd9c),0x14);
  FUN_00462830(local_c0);
  puVar1 = (undefined4 *)FUN_00462930((int)local_c0);
  local_fb = *puVar1;
  local_f7 = puVar1[1];
  local_f3 = puVar1[2];
  local_ef = puVar1[3];
  local_eb = puVar1[4];
  local_e7 = *(undefined4 *)((int)this + 0xc3c);
  puVar1 = (undefined4 *)((int)this + 0xc5c);
  puVar3 = local_e3;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar4 = FUN_0044e910();
  FUN_00453ac0(this,(int)&local_fc,0x1c8,0,6,0,param_1,param_2,'\0','\0',(int)uVar4,0);
  local_4 = 0xffffffff;
  FUN_00462950(local_c0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004560f0 */
