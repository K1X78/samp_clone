/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469610
 * Name: FUN_00469610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00469610(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      *(undefined1 *)(param_1 + *(int *)(param_1 + 0x40)) = *(undefined1 *)(uVar2 + param_2);
      iVar1 = *(int *)(param_1 + 0x40) + 1;
      *(int *)(param_1 + 0x40) = iVar1;
      if (iVar1 == 0x40) {
        FUN_00469140(param_1,param_1);
        if (0xfffffdff < *(uint *)(param_1 + 0x44)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        }
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) + 0x200;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}


/* END FUNCTION 0x00469610 */
