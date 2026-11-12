/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c7e0
 * Name: FUN_1000c7e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1000c7e0(int *param_1,char param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    bVar4 = uVar1 != 0;
    do {
      if ((bVar4) && (iVar3 = *(int *)(*param_1 + uVar2 * 4), iVar3 != 0)) {
        if (param_2 == '\x01') {
          iVar3 = *(int *)(iVar3 + 0x46);
        }
        else {
          if (param_2 != '\x02') goto LAB_1000c81a;
          iVar3 = *(int *)(iVar3 + 0x4a);
        }
        if (iVar3 == param_3) {
          return uVar2;
        }
      }
LAB_1000c81a:
      uVar2 = uVar2 + 1;
      bVar4 = uVar2 < uVar1;
    } while (uVar2 != uVar1);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x1000c7e0 */
