/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431b20
 * Name: FUN_00431b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00431b20(void *this,undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  void *local_4;
  
  bVar1 = true;
  if (DAT_004ed55c != 0) {
    iVar3 = 0;
    local_4 = this;
    do {
      iVar2 = FUN_00407e10();
      FUN_00407e50(iVar2);
      if (iVar3 < DAT_004ed55c) {
        pcVar4 = *(code **)(DAT_004ed560 + iVar3 * 4);
      }
      else {
        pcVar4 = (code *)0x0;
        bVar1 = false;
      }
      FUN_00407e90(iVar2);
      local_4 = (void *)0x0;
      if ((pcVar4 != (code *)0x0) &&
         (iVar2 = (*pcVar4)(param_1,&local_4,&PTR_FUN_004b3170), iVar2 != 0)) {
        FUN_0042f990(1,(undefined **)"automatic extension loading failed: %s");
        bVar1 = false;
      }
      FUN_004080d0((int)local_4);
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}


/* END FUNCTION 0x00431b20 */
