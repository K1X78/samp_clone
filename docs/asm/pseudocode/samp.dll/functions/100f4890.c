/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4890
 * Name: FUN_100f4890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f4890(byte *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *local_504;
  undefined1 local_500 [256];
  undefined1 local_400 [1024];
  
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  pbVar2 = param_1;
  if (*param_2 != 0) {
    while( true ) {
      local_504 = pbVar2;
      bVar1 = *local_504;
      while ((bVar1 != 0 && (iVar4 = _isspace((uint)bVar1), iVar4 != 0))) {
        local_504 = local_504 + 1;
        bVar1 = *local_504;
      }
      iVar4 = FUN_100f8080(local_504,local_500,local_400,&local_504);
      if (iVar4 == 0) {
        return 0x43;
      }
      iVar4 = FUN_100de830(local_500,"stale");
      if ((iVar4 != 0) && (iVar4 = FUN_100de830(local_400,&DAT_1012a85c), iVar4 != 0)) break;
      bVar1 = *local_504;
      while ((bVar1 != 0 && (iVar4 = _isspace((uint)bVar1), iVar4 != 0))) {
        local_504 = local_504 + 1;
        bVar1 = *local_504;
      }
      pbVar2 = local_504;
      if (*local_504 == 0x2c) {
        pbVar2 = local_504 + 1;
      }
    }
    FUN_100f4830(param_2);
  }
  iVar4 = FUN_100d9960(param_1,((int)pbVar3 - (int)(param_1 + 1)) + 1);
  *param_2 = iVar4;
  if (iVar4 == 0) {
    return 0x1b;
  }
  param_2[1] = (int)pbVar3 - (int)(param_1 + 1);
  return 0;
}


/* END FUNCTION 0x100f4890 */
