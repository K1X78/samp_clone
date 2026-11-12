/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eef50
 * Name: FUN_100eef50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eef50(byte *param_1,undefined4 *param_2,int param_3,longlong *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  byte *local_4;
  
  puVar2 = (undefined4 *)FUN_100fdc77();
  *puVar2 = 0;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  bVar1 = *param_1;
  while ((bVar1 != 0 && (iVar3 = _isspace((uint)bVar1), iVar3 != 0))) {
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (*param_1 == 0x2d) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 2;
  }
  lVar5 = __strtoi64((char *)param_1,(char **)&local_4,param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_4;
  }
  piVar4 = (int *)FUN_100fdc77();
  if (*piVar4 == 0x22) {
    return 1;
  }
  if (param_1 == local_4) {
    return 2;
  }
  *param_4 = lVar5;
  return 0;
}


/* END FUNCTION 0x100eef50 */
