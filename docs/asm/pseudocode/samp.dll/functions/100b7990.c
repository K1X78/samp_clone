/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7990
 * Name: FUN_100b7990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7990(int param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (param_2 == '\0') {
        *(byte *)(iVar2 + 0x4a8) = *(byte *)(iVar2 + 0x4a8) | 8;
        pbVar1 = (byte *)(*(int *)(param_1 + 0x4c) + 0x428);
        *pbVar1 = *pbVar1 & 0xbf;
        return;
      }
      *(byte *)(iVar2 + 0x4a8) = *(byte *)(iVar2 + 0x4a8) & 0xf7;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4c) + 0x428);
      *pbVar1 = *pbVar1 | 0x40;
    }
  }
  return;
}


/* END FUNCTION 0x100b7990 */
