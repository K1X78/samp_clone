/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030050
 * Name: FUN_10030050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 *
FUN_10030050(char *param_1,char param_2,char *param_3,char param_4,char *param_5,char *param_6,
            char *param_7,char param_8,char param_9,char param_10,char param_11,undefined1 param_12)

{
  char *_Source;
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Source = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011491b;
  local_c = ExceptionList;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    ExceptionList = &local_c;
    cVar1 = FUN_1002f520(&param_1);
    if (cVar1 == '\0') {
      puVar2 = operator_new(0xc0);
      local_4 = 0;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)0x0;
      }
      else {
        param_1 = puVar2;
        FUN_10029cd0();
      }
      local_4 = 0xffffffff;
      param_1 = puVar2;
      _strncpy(puVar2 + 0x68,_Source,0x20);
      puVar2[0x88] = 0;
      if ((char)param_3 == '\0') {
        puVar2[3] = 0;
      }
      else {
        _strncpy(puVar2 + 3,param_6,0x20);
        puVar2[0x23] = 0;
      }
      if (param_2 == '\0') {
        puVar2[0x23] = 0;
      }
      else {
        _strncpy(puVar2 + 0x23,param_5,0x20);
        puVar2[0x43] = 0;
      }
      if (param_4 == '\0') {
        puVar2[0x43] = 0;
      }
      else {
        _strncpy(puVar2 + 0x43,param_7,0x20);
        puVar2[99] = 0;
      }
      *puVar2 = 1;
      if ((char)param_3 == '\0') {
        puVar2[99] = 0;
        puVar2[100] = 0;
        puVar2[0x65] = 0;
        puVar2[0x66] = 0;
      }
      else {
        puVar2[99] = param_8;
        puVar2[100] = param_9;
        puVar2[0x65] = param_10;
        puVar2[0x66] = param_11;
      }
      *(undefined4 *)(puVar2 + 0x88) = 0;
      *(undefined4 *)(puVar2 + 0x98) = 0;
      puVar2[0x67] = param_12;
      puVar2[2] = param_4;
      puVar2[1] = param_2;
      param_3 = puVar2 + 0x68;
      FUN_1002ff40(&param_3,&param_1);
      if ((((param_8 == '\0') && (param_9 == '\0')) && (param_10 == '\0')) && (param_11 == '\0')) {
        *(undefined4 *)(puVar2 + 0x8c) = 0xffffffff;
      }
      else {
        uVar3 = FUN_10028a60("__systemId",2);
        *(undefined4 *)(puVar2 + 0x8c) = uVar3;
      }
      if (puVar2[0x65] != '\0') {
        uVar3 = FUN_10028a60("__lastPingResponseTime",0);
        *(undefined4 *)(puVar2 + 0x90) = uVar3;
        uVar3 = FUN_10028a60("__nextPingSendTime",0);
        *(undefined4 *)(puVar2 + 0x94) = uVar3;
        ExceptionList = local_c;
        return puVar2 + 0x9c;
      }
      *(undefined4 *)(puVar2 + 0x90) = 0xffffffff;
      *(undefined4 *)(puVar2 + 0x94) = 0xffffffff;
      ExceptionList = local_c;
      return puVar2 + 0x9c;
    }
  }
  ExceptionList = local_c;
  return (undefined1 *)0x0;
}


/* END FUNCTION 0x10030050 */
