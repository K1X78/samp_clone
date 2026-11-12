/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434300
 * Name: FUN_00434300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __fastcall FUN_00434300(int param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  void *pvVar2;
  
  if ((in_EAX != 0) &&
     (puVar1 = (undefined4 *)(*(int *)(in_EAX + 0x3c) + -0x28 + param_1 * 0x28),
     (*(byte *)(puVar1 + 7) & 1) == 0)) {
    pvVar2 = (void *)FUN_00419760();
    if (pvVar2 != (void *)0x0) {
      FUN_00419710(puVar1);
      FUN_004300e0(pvVar2);
      FUN_0040e150((int)pvVar2);
    }
    return pvVar2;
  }
  return (void *)0x0;
}


/* END FUNCTION 0x00434300 */
