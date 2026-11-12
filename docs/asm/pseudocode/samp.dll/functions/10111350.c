/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111350
 * Name: FUN_10111350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * FUN_10111350(int param_1)

{
  SIZE_T SVar1;
  _MEMORY_BASIC_INFORMATION _Stack_3c;
  short *psStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_101330f8;
  puStack_10 = &LAB_100f93a4;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffffac;
  if (param_1 == 0) {
    psStack_20 = (short *)&DAT_00010000;
  }
  else {
    psStack_20 = (short *)(param_1 + 0x10000);
  }
  ExceptionList = &pvStack_14;
  _memset(&_Stack_3c,0,0x1c);
  do {
    SVar1 = VirtualQuery(psStack_20,&_Stack_3c,0x1c);
    if (SVar1 == 0) {
      ExceptionList = pvStack_14;
      return (short *)0x0;
    }
    if ((_Stack_3c.State == 0x1000) && ((_Stack_3c.Protect & 0x100) == 0)) {
      if (*psStack_20 == 0x5a4d) {
        if (*(int *)((int)psStack_20 + *(int *)(psStack_20 + 0x1e)) == 0x4550) {
          ExceptionList = pvStack_14;
          return psStack_20;
        }
        uStack_8 = 0xffffffff;
      }
      else {
        uStack_8 = 0xffffffff;
      }
    }
    psStack_20 = (short *)((int)_Stack_3c.BaseAddress + _Stack_3c.RegionSize);
  } while( true );
}


/* END FUNCTION 0x10111350 */
