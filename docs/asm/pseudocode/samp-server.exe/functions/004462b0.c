/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004462b0
 * Name: FUN_004462b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004462b0(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  
  iVar1 = *param_1;
  piVar2 = FUN_0041a470(iVar1,*(undefined4 **)(param_2 + 0x1c),0);
  uVar7 = extraout_ECX;
  if (param_3 != (undefined4 *)0x0) {
    iVar3 = FUN_00420310(iVar1,param_3,0);
    psVar4 = FUN_0041b4e0();
    if (psVar4 == (short *)0x0) {
      FUN_0040fce0(iVar1,(int)piVar2);
    }
    else {
      pcVar5 = FUN_00412a70();
      *(char **)(psVar4 + 8) = pcVar5;
      *(int **)(psVar4 + 0xc) = piVar2;
    }
    piVar2 = FUN_0041bff0(param_1,(int)psVar4,iVar3,0,0,0,0,0,0);
    uVar7 = extraout_ECX_00;
  }
  pbVar6 = (byte *)FUN_0040fcc0(uVar7,param_4,9);
  FUN_00443d60(param_1,piVar2,pbVar6);
  FUN_0040fce0(iVar1,(int)piVar2);
  return;
}


/* END FUNCTION 0x004462b0 */
