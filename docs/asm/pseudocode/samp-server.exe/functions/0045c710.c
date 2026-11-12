/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c710
 * Name: FUN_0045c710
 * Status: ok
 * Single JMP forwarder to 0x0045ba30; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045c710(int *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      _free((void *)param_1[1]);
    }
    else {
      _Memory = (void *)param_1[1];
      do {
        pvVar1 = *(void **)((int)_Memory + 8);
        _free(_Memory);
        _Memory = pvVar1;
      } while (pvVar1 != (void *)param_1[1]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* END FUNCTION 0x0045c710 */
