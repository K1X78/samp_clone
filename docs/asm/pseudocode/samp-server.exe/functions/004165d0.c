/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004165d0
 * Name: FUN_004165d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004165d0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX * 0x10 + 0xc + *(int *)(param_1 + 8));
  if ((*(byte *)(iVar2 + 0x4a) & 2) != 0) {
    for (puVar3 = *(undefined4 **)(iVar2 + 0xc); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      if (*(int *)(puVar3[2] + 0x1c) != 0) {
        FUN_004163b0();
      }
    }
    pbVar1 = (byte *)(*(int *)(in_EAX * 0x10 + 0xc + *(int *)(param_1 + 8)) + 0x4a);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return;
}


/* END FUNCTION 0x004165d0 */
