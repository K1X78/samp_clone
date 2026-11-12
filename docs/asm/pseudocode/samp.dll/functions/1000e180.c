/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000e180
 * Name: FUN_1000e180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000e180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int local_120;
  undefined4 local_11c;
  undefined4 local_117;
  undefined4 local_10f;
  undefined1 local_107 [263];
  
  cVar1 = FUN_1000c830(param_2,param_3,&local_120);
  if (cVar1 == '\0') {
    if (DAT_102aca10 != 0) {
      FUN_10067b60(DAT_102aca10,"DownloadRedirect: Can\'t fill download info!");
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1340) = 0;
    local_120 = FUN_100f9cc9(local_107,&DAT_10117d30);
    if (local_120 == 0) {
      if (DAT_102aca10 != 0) {
        FUN_10067b60(DAT_102aca10,"DownloadRedirect: Can\'t open temp file for writing!");
        return;
      }
    }
    else {
      FUN_1000e0a0(&local_120,param_4);
      if (DAT_102ac9e8 != 0) {
        FUN_1006a720(local_11c,local_10f,0,0,local_117,0xffffffff,0);
      }
      *(undefined4 *)(param_1 + 0x213) = 1;
      iVar2 = FUN_1000bde0();
      if (0 < iVar2) {
        *(undefined4 *)(param_1 + 0x213) = 2;
      }
    }
  }
  return;
}


/* END FUNCTION 0x1000e180 */
