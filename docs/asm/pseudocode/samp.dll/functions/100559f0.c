/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100559f0
 * Name: FUN_100559f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100559f0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    if (*(SOCKET *)(param_1 + 3) != 0xffffffff) {
      closesocket(*(SOCKET *)(param_1 + 3));
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
    }
    cVar1 = *(char *)(param_1 + 2);
    while (cVar1 != '\0') {
      FUN_10043560(0xf);
      cVar1 = *(char *)(param_1 + 2);
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        closesocket(**(SOCKET **)(*(int *)(param_1 + 7) + uVar2 * 4));
        _free(*(void **)(*(int *)(param_1 + 7) + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb));
    }
    FUN_10055390(0);
    FUN_10055520();
    FUN_10055520();
    FUN_100556e0();
    FUN_100558a0();
    FUN_100556e0();
    FUN_100556e0();
    return;
  }
  return;
}


/* END FUNCTION 0x100559f0 */
