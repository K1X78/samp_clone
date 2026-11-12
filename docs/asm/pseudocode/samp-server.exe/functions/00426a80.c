/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426a80
 * Name: FUN_00426a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00426a80(undefined4 *param_1,int *param_2,int *param_3,char *param_4)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 *puVar7;
  int local_c;
  
  piVar3 = param_3;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)*param_1;
  puVar7 = (undefined4 *)param_3[3];
  local_c = 0;
  if (0 < *param_3) {
    do {
      pcVar2 = (char *)*puVar7;
      param_3 = (int *)FUN_0040e340((int *)*param_2);
      if ((int)param_3 < 1) {
        iVar5 = FUN_0040e6e0(pcVar2,(uint *)&param_3);
        if (iVar5 == 0) {
          *(undefined2 *)((int)puVar7 + 0xe) = 0;
          bVar4 = FUN_00424ba0(extraout_ECX);
          if (CONCAT31(extraout_var,bVar4) != 0) {
            return 1;
          }
        }
        else {
          if ((int)param_3 < 1) {
            FUN_00419e90();
            return 1;
          }
          *(short *)((int)puVar7 + 0xe) = (short)param_3;
        }
      }
      else {
        *(short *)((int)puVar7 + 0xe) = (short)param_3;
      }
      local_c = local_c + 1;
      puVar7 = puVar7 + 5;
    } while (local_c < *piVar3);
  }
  uVar6 = FUN_00424af0(piVar1,param_2,param_4);
  return uVar6;
}


/* END FUNCTION 0x00426a80 */
