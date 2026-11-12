/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a20e0
 * Name: FUN_100a20e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a20e0(int *param_1,int param_2,float param_3,float param_4,float param_5)

{
  if (param_2 == 0) {
    if (*param_1 != 0) {
      FUN_100b1f10(&DAT_1011eb40,1);
      *param_1 = 0;
    }
    FUN_100a20b0();
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (param_2 < 1000) {
    FUN_100a20c0(param_2);
    return;
  }
  if (param_2 < 2000) {
    FUN_100b1f10(&DAT_1011eaf0,(double)param_3,(double)param_4,(double)param_5,param_2);
    return;
  }
  FUN_100b1f10(&DAT_1011eb40,1);
  FUN_100b1f10(&DAT_1011eb04,1,param_2);
  FUN_100b1f10(&DAT_1011eb54,1,(double)param_3,(double)param_4,(double)param_5);
  *param_1 = 1;
  return;
}


/* END FUNCTION 0x100a20e0 */
