/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100874b0
 * Name: FUN_100874b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100874b0(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_104 [260];
  
  pcVar1 = *(char **)(*(int *)(param_1 + 8) + param_2 * 4);
  if (*pcVar1 != '\0') {
    iVar2 = FUN_100972b0(local_104,0x104,pcVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = D3DXCreateTextureFromFileExA
                      (*(undefined4 *)(param_1 + 0x20),local_104,0xffffffff,0xffffffff,0xffffffff,0,
                       0,1,0xffffffff,0xffffffff,0,&local_120,0,pcVar1 + 0x104);
    if (iVar2 < 0) {
      return iVar2;
    }
    *(undefined4 *)(pcVar1 + 0x108) = local_120;
    *(undefined4 *)(pcVar1 + 0x10c) = local_11c;
  }
  return 0;
}


/* END FUNCTION 0x100874b0 */
