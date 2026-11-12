/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100018b0
 * Name: FUN_100018b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100018b0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < *param_1) {
    piVar2 = param_1 + 0x7d1;
    do {
      if (param_2 == *piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= *param_1);
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),0xffff);
}


/* END FUNCTION 0x100018b0 */
