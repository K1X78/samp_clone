/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003bd80
 * Name: FUN_1003bd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_1003bd80(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined2 param_8,undefined4 param_9)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  if ((((param_2 == 0) || (param_3 < 0)) || (param_1[0xcd] == 0)) || ((char)param_1[1] == '\x01')) {
    return 0;
  }
  if ((char)param_9 == '\0') {
    uVar4 = 0x1013;
    cVar1 = FUN_100331a0(&DAT_1013c7cc);
    if (cVar1 != '\0') {
      return 0;
    }
    if ((*(int *)((int)param_1 + 0xc1a) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0x5c))(param_7,CONCAT22(uVar4,param_8)), iVar2 == -1)) {
      uVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0xc1a))
                        (param_2,param_3 * 8,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  FUN_1003aa40(param_2,param_3 * 8,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return 1;
}


/* END FUNCTION 0x1003bd80 */
