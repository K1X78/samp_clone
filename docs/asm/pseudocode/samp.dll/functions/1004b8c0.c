/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b8c0
 * Name: FUN_1004b8c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004b8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_8;
  undefined1 local_4;
  
  cVar1 = FUN_1004b2a0(&param_1);
  local_8 = param_1;
  if (cVar1 == '\0') {
    FUN_1004b690(param_1);
  }
  local_4 = 0x10;
  uVar7 = 0;
  iVar3 = FUN_1004ade0();
  cVar1 = param_4;
  if (iVar3 != 0) {
    do {
      puVar4 = (undefined4 *)FUN_1004adc0(uVar7);
      if (cVar1 == '\x01') {
        cVar2 = FUN_100331d0(*puVar4);
joined_r0x1004b936:
        if (cVar2 != '\0') {
          uVar5 = FUN_1004a8d0(&param_1,&param_4);
          if (param_4 == '\0') {
            FUN_1004a970(&local_8,&local_8);
          }
          else {
            iVar3 = FUN_1004a9f0(uVar5);
            *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 0x10;
          }
        }
      }
      else if (cVar1 == '\0') {
        cVar2 = FUN_100331a0(*puVar4);
        goto joined_r0x1004b936;
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_1004ade0();
    } while (uVar7 < uVar6);
  }
  return;
}


/* END FUNCTION 0x1004b8c0 */
