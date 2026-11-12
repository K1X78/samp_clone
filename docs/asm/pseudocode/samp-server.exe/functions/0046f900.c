/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f900
 * Name: thunk_FUN_0046da90
 * Status: ok
 * Single JMP forwarder to 0x0046da90; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall thunk_FUN_0046da90(int *param_1)

{
  int iVar1;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar1 = FUN_00401710(param_1,(byte *)"OnGameModeExit",(int *)&piStack_4);
  if (iVar1 == 0) {
    FUN_00401c90(param_1,(uint *)&piStack_4,(int)piStack_4);
  }
  FUN_0046af90(*(int *)(DAT_004fc438 + 4));
  if (*(void **)(DAT_004fc438 + 0x3c) != (void *)0x0) {
    FUN_00482ec0(*(void **)(DAT_004fc438 + 0x3c),(int)param_1);
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_0046fc20(param_1);
    FUN_00469c80(DAT_004fc440,param_1);
    FUN_00407de0();
    FUN_00407360();
    FUN_00407de0();
    FUN_00407de0();
    FUN_00407de0();
    FUN_00404b60();
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  return;
}


/* END FUNCTION 0x0046f900 */
