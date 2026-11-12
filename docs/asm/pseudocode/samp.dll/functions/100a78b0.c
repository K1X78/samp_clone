/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a78b0
 * Name: FUN_100a78b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a78b0(undefined4 param_1,uint param_2)

{
  int *_Memory;
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x40000 < param_2) {
    return 0;
  }
  _Memory = _calloc(1,param_2);
  FUN_100b1a40(param_1,_Memory,param_2);
  if (*_Memory != 0x334c4f43) {
    if (DAT_102aca10 != 0) {
      FUN_10067b60(DAT_102aca10,"[Error] not a COL3 collision");
    }
    _free(_Memory);
    return 0;
  }
  iVar1 = FUN_100b6390();
  if (iVar1 == 0) {
    if (DAT_102aca10 == 0) goto LAB_100a796a;
    pcVar3 = "[Error] model loader failed to allocated a new col.";
  }
  else {
    iVar2 = FUN_100b63c0(_Memory,param_2,iVar1);
    if (iVar2 != 0) {
      FUN_100b4230(DAT_101e0448,iVar1);
      _free(_Memory);
      return 1;
    }
    if (DAT_102aca10 == 0) goto LAB_100a796a;
    pcVar3 = "[Error] model loader failed to load col.";
  }
  FUN_10067b60(DAT_102aca10,pcVar3);
LAB_100a796a:
  _free(_Memory);
  return 0;
}


/* END FUNCTION 0x100a78b0 */
