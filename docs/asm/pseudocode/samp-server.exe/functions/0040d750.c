/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d750
 * Name: FUN_0040d750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040d750(uint param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int in_EAX;
  
  if ((param_1 != 0) && (in_EAX != 0)) {
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = *(undefined1 *)(iVar3 + 0x1e);
    uVar1 = param_1 + in_EAX * 0x28;
    for (; param_1 < uVar1; param_1 = param_1 + 0x28) {
      if ((*(ushort *)(param_1 + 0x1c) & 0x2460) == 0) {
        if (*(int *)(param_1 + 0x24) != 0) {
          FUN_00408130(iVar3);
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        FUN_0040d250(param_1);
      }
      *(undefined2 *)(param_1 + 0x1c) = 1;
    }
    *(undefined1 *)(iVar3 + 0x1e) = uVar2;
  }
  return;
}


/* END FUNCTION 0x0040d750 */
