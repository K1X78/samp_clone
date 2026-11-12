/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10042500
 * Name: FUN_10042500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10042500(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  uVar1 = FUN_1002e2b0();
  FUN_10043570(uVar1);
  FUN_10038930();
  *(undefined1 *)(param_1 + 0xd80) = 1;
  if ((param_4 == (undefined4 *)0x0) && (param_5 == (undefined4 *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      if (param_3 == (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0xd7f) = 1;
        FUN_10042200();
        return;
      }
      goto LAB_100425e6;
    }
LAB_10042574:
    if (param_3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0xd5b) = *param_2;
      puVar3 = (undefined4 *)(param_1 + 0xd5f);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  else if (param_2 != (undefined4 *)0x0) goto LAB_10042574;
  if ((param_4 != (undefined4 *)0x0) && (param_5 != (undefined4 *)0x0)) {
    local_10 = *param_4;
    local_c = param_4[1];
    local_8 = param_4[2];
    local_4 = param_4[3];
    local_20 = *param_5;
    local_1c = param_5[1];
    local_18 = param_5[2];
    local_14 = param_5[3];
    FUN_10040780(&local_10,&local_20);
  }
LAB_100425e6:
  *(undefined1 *)(param_1 + 0xd7f) = 0;
  return;
}


/* END FUNCTION 0x10042500 */
