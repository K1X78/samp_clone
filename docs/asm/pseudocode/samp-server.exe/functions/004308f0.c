/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004308f0
 * Name: FUN_004308f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_004308f0(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  int *piVar4;
  
  pvVar3 = (void *)*param_1;
  bVar1 = *(byte *)((int)pvVar3 + 0x7c);
  bVar2 = *(byte *)(*(int *)(*(int *)((int)pvVar3 + 8) + 0xc) + 0x49);
  piVar4 = FUN_0041b6e0((int)pvVar3,(uint)bVar1,bVar2);
  if ((bVar1 == 0) &&
     (((piVar4 == (int *)0x0 || (piVar4[3] == 0)) &&
      (piVar4 = FUN_0042ef10(bVar2,pvVar3), piVar4 == (int *)0x0)))) {
    FUN_00418b00((undefined **)"no such collation sequence: %s");
  }
  return piVar4;
}


/* END FUNCTION 0x004308f0 */
