/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009df0
 * Name: FUN_10009df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10009df0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_444 [6];
  byte local_43e [278];
  undefined1 local_328 [276];
  undefined1 local_214 [260];
  char local_110 [244];
  void *pvStack_1c;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112be6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  local_43e[1] = 0;
  if ((0 < *(int *)(param_1 + 0x3cd)) && (*(int *)(param_1 + 0x3cd) < 7)) {
    local_43e[0] = 0;
    FUN_1001f470(local_43e + 1,8,1);
    FUN_1001f470(local_43e,8,1);
    FUN_1001f960(local_214,local_43e[0]);
    local_214[local_43e[0]] = 0;
    FUN_100571b0(local_110,local_214);
    pcVar2 = local_110;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_1001f1f0();
    local_4 = CONCAT31(local_4._1_3_,1);
    local_444[0] = 0xc;
    FUN_1001faa0(local_444,8,1);
    local_444[0] = (undefined1)((int)pcVar2 - (int)(local_110 + 1));
    FUN_1001faa0(local_444,8,1);
    FUN_1001fb50(local_110,(int)pcVar2 - (int)(local_110 + 1) & 0xff);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))(local_328,0,8,0);
    uStack_14 = uStack_14 & 0xffffff00;
    FUN_1001f390();
    uStack_14 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = pvStack_1c;
    return;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009df0 */
