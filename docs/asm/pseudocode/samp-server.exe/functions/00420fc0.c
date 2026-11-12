/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420fc0
 * Name: FUN_00420fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420fc0(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar2 = FUN_0040dda0(*param_3);
  if ((CONCAT31(extraout_var,uVar2) != 5) &&
     (iVar3 = FUN_004154a0(param_1,(void *)0x1c), iVar3 != 0)) {
    iVar4 = FUN_0040de20((int)param_1);
    cVar1 = *(char *)(iVar3 + 0x19);
    *(undefined1 *)(iVar3 + 0x19) = 1;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar4 + 0x48);
    if (cVar1 != '\0') {
      if (param_2 == 2) {
        pcVar5 = (char *)FUN_0041ffb0();
        uVar6 = FUN_0041ff70();
      }
      else {
        pcVar5 = ",";
        uVar6 = 1;
      }
      FUN_00412af0(pcVar5,uVar6);
    }
    pcVar5 = (char *)FUN_0041ffb0();
    uVar6 = FUN_0041ff70();
    FUN_00412af0(pcVar5,uVar6);
  }
  return;
}


/* END FUNCTION 0x00420fc0 */
