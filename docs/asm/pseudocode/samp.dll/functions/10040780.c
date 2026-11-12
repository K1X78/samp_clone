/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040780
 * Name: FUN_10040780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10040780(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined1 *)(param_1 + 0x80) = 1;
  cVar3 = FUN_100395b0(param_2,param_3);
  puVar1 = (undefined4 *)(param_1 + 0xf1);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0xc1) = *param_2;
    *(undefined4 *)(param_1 + 0xc5) = param_2[1];
    *(undefined4 *)(param_1 + 0xc9) = param_2[2];
    *(undefined4 *)(param_1 + 0xcd) = param_2[3];
    *puVar1 = *param_3;
    *(undefined4 *)(param_1 + 0xf5) = param_3[1];
    *(undefined4 *)(param_1 + 0xf9) = param_3[2];
    *(undefined4 *)(param_1 + 0xfd) = param_3[3];
  }
  else {
    *puVar1 = *param_2;
    *(undefined4 *)(param_1 + 0xf5) = param_2[1];
    *(undefined4 *)(param_1 + 0xf9) = param_2[2];
    *(undefined4 *)(param_1 + 0xfd) = param_2[3];
    *(undefined4 *)(param_1 + 0xc1) = *param_3;
    *(undefined4 *)(param_1 + 0xc5) = param_3[1];
    *(undefined4 *)(param_1 + 0xc9) = param_3[2];
    *(undefined4 *)(param_1 + 0xcd) = param_3[3];
  }
  puVar4 = (undefined4 *)(param_1 + 0xc1);
  local_10 = *puVar4;
  local_c = *(undefined4 *)(param_1 + 0xc5);
  local_8 = *(undefined4 *)(param_1 + 0xc9);
  local_4 = *(undefined4 *)(param_1 + 0xcd);
  FUN_10039610(&local_10);
  local_20 = *puVar1;
  local_1c = *(undefined4 *)(param_1 + 0xf5);
  local_18 = *(undefined4 *)(param_1 + 0xf9);
  local_14 = *(undefined4 *)(param_1 + 0xfd);
  FUN_10039610(&local_20);
  iVar2 = param_1 + 0xa1;
  FUN_1003ae80(&local_10,&local_20,iVar2);
  FUN_1003cad0(iVar2,param_1);
  thunk_FUN_1003d390(param_1,iVar2,param_1 + 0x81);
  FUN_1003cbb0(puVar4,puVar1,param_1 + 0x121);
  iVar2 = param_1 + 0x20;
  FUN_1003ae80(puVar4,puVar1,iVar2);
  FUN_1003f8b0(iVar2,param_1 + 0x40);
  FUN_1003c860(iVar2,param_1 + 0x60);
  FUN_1003fcc0(puVar4,param_1 + 0xd1);
  FUN_1003ce50(puVar4,param_1 + 0xe1);
  FUN_1003fcc0(puVar1,param_1 + 0x101);
  FUN_1003ce50(puVar1,param_1 + 0x111);
  return;
}


/* END FUNCTION 0x10040780 */
