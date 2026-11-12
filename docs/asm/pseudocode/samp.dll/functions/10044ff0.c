/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044ff0
 * Name: FUN_10044ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10044ff0(int param_1,int *param_2,ushort *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  
  puVar5 = param_3;
  piVar4 = param_2;
  puVar1 = param_3 + 5;
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  param_2 = (int *)CONCAT31(param_2._1_3_,(char)*puVar1);
  FUN_1001faa0(&param_3,0x10,1);
  FUN_1001faa0(&param_2,*(undefined4 *)(param_1 + 0x403),1);
  iVar3 = *(int *)(puVar5 + 5);
  if (((iVar3 == 7) || (iVar3 == 10)) || (iVar3 == 9)) {
    FUN_1001faa0(puVar5 + 7,5,1);
    param_3 = (ushort *)(uint)*(ushort *)((int)puVar5 + 0xf);
    FUN_1001faa0(&param_3,0x10,1);
  }
  if (*(int *)((int)puVar5 + 0x17) == 0) {
    FUN_1001f9d0();
  }
  else {
    FUN_1001f9f0();
    param_3 = (ushort *)(uint)*(ushort *)((int)puVar5 + 0x11);
    FUN_1001faa0(&param_3,0x10,1);
    param_3 = *(ushort **)((int)puVar5 + 0x13);
    FUN_1001fbf0(&param_3,0x20,1);
    param_3 = *(ushort **)((int)puVar5 + 0x17);
    FUN_1001fbf0(&param_3,0x20,1);
  }
  param_3 = (ushort *)(uint)*(ushort *)((int)puVar5 + 0x2b);
  FUN_1001fbf0(&param_3,0x10,1);
  FUN_1001fbe0(*(undefined4 *)((int)puVar5 + 0x2f),*(int *)((int)puVar5 + 0x2b) + 7U >> 3);
  return *piVar4 - iVar2;
}


/* END FUNCTION 0x10044ff0 */
