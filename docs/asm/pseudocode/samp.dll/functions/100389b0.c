/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100389b0
 * Name: FUN_100389b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100389b0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = param_4;
  uVar3 = 0;
  if (*(short *)(param_1 + 7) != 0) {
    iVar4 = 0;
    do {
      if ((*(char *)(*(int *)(param_1 + 0x334) + iVar4) != '\0') &&
         (*(int *)(*(int *)(param_1 + 0x334) + iVar4 + 0xc62) == 8)) {
        if (cVar1 == '\0') {
          cVar2 = FUN_100331a0(&param_2);
        }
        else {
          if (cVar1 != '\x01') goto LAB_10038a05;
          cVar2 = FUN_100331d0(&param_2);
        }
        if (cVar2 != '\0') {
          return 1;
        }
      }
LAB_10038a05:
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc69;
    } while (uVar3 < *(ushort *)(param_1 + 7));
  }
  return 0;
}


/* END FUNCTION 0x100389b0 */
