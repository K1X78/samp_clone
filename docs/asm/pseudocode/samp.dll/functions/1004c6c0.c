/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004c6c0
 * Name: FUN_1004c6c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004c6c0(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4,char param_5
                 )

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char local_9;
  undefined4 local_8;
  char local_4;
  
  local_8 = param_1;
  FUN_1004b690(param_1);
  uVar6 = 0;
  iVar2 = FUN_1004ade0();
  if (iVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_1004adc0(uVar6);
      if (param_5 == '\x01') {
        cVar1 = FUN_100331d0(*puVar3);
joined_r0x1004c729:
        if ((cVar1 != '\0') && (cVar1 = FUN_1004b220(&param_1), cVar1 == '\0')) {
          uVar4 = FUN_1004a8d0(&param_1,&local_9);
          if (local_9 == '\0') {
            local_4 = (param_2 != '\0') + '\x01';
            FUN_1004a970(&local_8,&local_8);
          }
          else {
            iVar2 = FUN_1004a9f0(uVar4);
            *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 1;
            iVar2 = FUN_1004a9f0(uVar4);
            *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfd;
          }
        }
      }
      else if (param_5 == '\0') {
        cVar1 = FUN_100331a0(*puVar3);
        goto joined_r0x1004c729;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_1004ade0();
    } while (uVar6 < uVar5);
  }
  return;
}


/* END FUNCTION 0x1004c6c0 */
