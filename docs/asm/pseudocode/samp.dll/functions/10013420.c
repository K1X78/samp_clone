/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013420
 * Name: FUN_10013420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013420(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int local_128;
  uint local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101132fb;
  local_c = ExceptionList;
  iVar4 = 0;
  pcVar5 = (char *)(param_1 + 0xc004);
  piVar3 = (int *)(param_1 + 0x8004);
  piVar2 = (int *)(param_1 + 0xf008);
  ExceptionList = &local_c;
  do {
    if (piVar3[-0x2000] != 0) {
      if ((*pcVar5 == '\0') && (*piVar2 != 0xe)) {
        if (*piVar3 != 0) {
          *piVar3 = *piVar3 + -1;
        }
      }
      else {
        iVar1 = FUN_100b1f10(&DAT_10118144,piVar3[-0x2000]);
        if (iVar1 != 0) {
          FUN_1001f1f0();
          local_4 = 0;
          if (*pcVar5 == '\0') {
            local_128 = iVar4;
            FUN_1001faa0(&local_128,0x20,1);
            (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011816c,local_120,1,10,0,0);
          }
          else {
            local_124 = (uint)*(ushort *)(pcVar5 + 1);
            FUN_1001faa0(&local_124,0x10,1);
            (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10118170,local_120,1,10,0,0);
          }
          local_4 = 0xffffffff;
          FUN_1001f390();
        }
      }
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 5;
    piVar3 = piVar3 + 1;
    pcVar5 = pcVar5 + 3;
  } while (iVar4 < 0x1000);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10013420 */
