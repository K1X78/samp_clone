/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424c70
 * Name: FUN_00424c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00424c70(undefined4 param_1)

{
  bool bVar1;
  char *in_EAX;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (in_EAX != (char *)0x0) {
    if (*in_EAX == '\x1a') {
      *in_EAX = '^';
    }
    else {
      bVar1 = FUN_00424ba0(param_1);
      iVar3 = CONCAT31(extraout_var,bVar1);
      if (iVar3 == 0) {
        iVar2 = FUN_00415ba0((int)in_EAX);
        if (iVar2 == 0) {
          FUN_00418b00((undefined **)"invalid name: \"%s\"");
          return 1;
        }
      }
    }
  }
  return iVar3;
}


/* END FUNCTION 0x00424c70 */
