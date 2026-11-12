/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468c80
 * Name: FUN_00468c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_00468c80(char *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint extraout_ECX;
  uint uVar6;
  int extraout_ECX_00;
  int extraout_ECX_01;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    FUN_00468c60(*param_2);
    uVar6 = extraout_ECX;
    do {
      iVar3 = FUN_00468c60((char)uVar6);
      if ((char)iVar3 == extraout_DL) break;
      pbVar1 = (byte *)(param_1 + 1);
      uVar6 = (uint)*pbVar1;
      param_1 = param_1 + 1;
    } while (*pbVar1 != 0);
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    FUN_00468c60(*param_1);
    iVar3 = FUN_00468c60(*param_2);
    if (extraout_DL_00 == (char)iVar3) {
      iVar3 = extraout_ECX_00;
      do {
        if (*(char *)(iVar3 + 1) == '\0') {
          return param_1;
        }
        iVar4 = FUN_00468c60(param_1[(iVar3 + 1) - (int)param_2]);
        iVar5 = FUN_00468c60(extraout_DL_01);
        iVar3 = extraout_ECX_01;
      } while ((char)iVar4 == (char)iVar5);
    }
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}


/* END FUNCTION 0x00468c80 */
