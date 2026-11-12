/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7670
 * Name: FUN_100a7670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100a7670(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar1 = _calloc(0x44,1);
  uVar5 = FUN_100a7630(param_1);
  if ((undefined4 *)uVar5 != (undefined4 *)0x0) {
    iVar2 = FUN_100b39d0((int)((ulonglong)uVar5 >> 0x20));
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)uVar5;
      puVar4 = puVar1;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 **)(PTR_DAT_10152ae0 + param_2 * 4) = puVar1;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x100a7670 */
