/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2760
 * Name: FUN_100d2760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d2760(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *param_1;
  FUN_100e2ff0(iVar2,3);
  if ((*(byte *)(param_1[200] + 0x44) & 0x10) != 0) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  param_1[0xba] = 0;
  if (*(int *)(iVar2 + 0x630) != 0) {
    (*(code *)PTR__free_101554bc)(param_1[0xce]);
    param_1[0xce] = 0;
    iVar1 = FUN_100cd220("User-Agent: %s\r\n",*(undefined4 *)(iVar2 + 0x630));
    param_1[0xce] = iVar1;
    if (iVar1 == 0) {
      return 0x1b;
    }
  }
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  uVar3 = FUN_100d8500();
  *(undefined8 *)(param_1 + 0x62) = uVar3;
  if (param_1[0x66] == -1) {
    param_1[0xad] = 0;
    iVar2 = FUN_100dc420(param_1,param_1[0x14]);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    FUN_100e2ff0(iVar2,4);
    FUN_100e2ff0(iVar2,5);
    param_1[0xad] = 1;
    *param_2 = 1;
    FUN_100dbbc0(param_1,param_1[0x66]);
    FUN_100d0ef0(param_1);
  }
  uVar3 = FUN_100d8500();
  *(undefined8 *)(param_1 + 0x62) = uVar3;
  return 0;
}


/* END FUNCTION 0x100d2760 */
