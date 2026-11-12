/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403610
 * Name: FUN_00403610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00403610(int *param_1,int *param_2,undefined4 *param_3,short *param_4,undefined4 *param_5,
            int param_6)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  
  if (param_6 == 0) {
    psVar4 = param_4;
    do {
      sVar1 = *psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
    } while ((char)sVar1 != '\0');
    iVar3 = (int)psVar4 - ((int)param_4 + 1);
  }
  else {
    iVar3 = FUN_0049f1be(param_4);
  }
  puVar2 = param_5;
  uVar5 = iVar3 + 1;
  if (param_5 != (undefined4 *)0x0) {
    uVar5 = iVar3 + 4U >> 2;
  }
  iVar3 = FUN_00403150(param_1,uVar5,param_2,(int *)&param_5);
  if (iVar3 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_5;
    }
    FUN_00403250(param_5,param_4,(int)puVar2,param_6,0x7fffffff);
    FUN_00401c50(param_1,*param_2);
  }
  return;
}


/* END FUNCTION 0x00403610 */
