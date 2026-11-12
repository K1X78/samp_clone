/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463220
 * Name: FUN_00463220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00463220(void *this,char *param_1,int param_2,void *param_3)

{
  char cVar1;
  void *this_00;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint local_128;
  char *local_124;
  uint local_120 [3];
  byte *local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b12cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00463110(this,(int *)&stack0x00000010);
  if ((char)uVar2 == '\0') {
    ExceptionList = local_c;
    return;
  }
  puVar3 = (undefined4 *)FUN_004630c0(this,(int *)&stack0x00000010);
  this_00 = (void *)*puVar3;
  if (param_1 == (char *)0x0) {
    local_124 = param_1;
    FUN_0044e080(param_3,(byte *)&local_124,0x10,'\x01');
    ExceptionList = local_c;
    return;
  }
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if (0 < param_2) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (param_2 <= (int)pcVar4 - (int)(param_1 + 1)) {
      uVar2 = param_2 - 1;
      goto LAB_004632d9;
    }
  }
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = (int)pcVar4 - (int)(param_1 + 1);
LAB_004632d9:
  FUN_0044e570(this_00,(int)param_1,uVar2,local_120);
  local_128 = local_120[0];
  FUN_0044e080(param_3,(byte *)&local_128,0x10,'\x01');
  FUN_0044df40(param_3,local_114,local_120[0] & 0xffff,'\x01');
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00463220 */
