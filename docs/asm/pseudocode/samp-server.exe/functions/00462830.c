/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462830
 * Name: FUN_00462830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00462830(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1c);
  local_8 = (undefined1)((uint)uVar1 >> 0x18);
  local_7 = (undefined1)((uint)uVar1 >> 0x10);
  local_5 = (undefined1)uVar1;
  uVar2 = *(undefined4 *)((int)param_1 + 0x18);
  local_6 = (undefined1)((uint)uVar1 >> 8);
  local_4 = (undefined1)((uint)uVar2 >> 0x18);
  local_3 = (undefined1)((uint)uVar2 >> 0x10);
  local_2 = (undefined1)((uint)uVar2 >> 8);
  local_1 = (undefined1)uVar2;
  FUN_00462760(param_1,(undefined4 *)&DAT_004bb23c,1);
  uVar3 = *(uint *)((int)param_1 + 0x18);
  while ((uVar3 & 0x1f8) != 0x1c0) {
    FUN_00462760(param_1,(undefined4 *)&DAT_004bb238,1);
    uVar3 = *(uint *)((int)param_1 + 0x18);
  }
  FUN_00462760(param_1,(undefined4 *)&local_8,8);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)((int)param_1 + uVar3 + 0x60) =
         (char)(*(uint *)((int)param_1 + (uVar3 & 0xfffffffc) + 4) >>
               (('\x03' - ((byte)uVar3 & 3)) * '\b' & 0x1f));
    uVar3 = uVar4;
  } while (uVar4 < 0x14);
  puVar6 = (uint *)((int)param_1 + 0x20);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(uint *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  FUN_00460b40(param_1,(uint *)((int)param_1 + 4),(uint *)((int)param_1 + 0x20));
  return;
}


/* END FUNCTION 0x00462830 */
