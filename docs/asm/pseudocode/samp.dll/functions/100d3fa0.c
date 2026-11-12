/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d3fa0
 * Name: FUN_100d3fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d3fa0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int in_EAX;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  iVar3 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  pcVar2 = _strchr(*(char **)(in_EAX + 0xa0),0x40);
  iVar1 = *(int *)(in_EAX + 0xa0);
  if (pcVar2 != (char *)0x0) {
    *(char **)(in_EAX + 0xa0) = pcVar2 + 1;
    if (*(int *)(param_1 + 0x544) != 2) {
      iVar4 = FUN_100d18c0(iVar1,pcVar2 + 1 + (-1 - iVar1),&local_c,&local_8,
                           -(uint)((*(uint *)(*(int *)(in_EAX + 800) + 0x44) & 0x400) != 0) &
                           (uint)&local_4);
      iVar3 = local_c;
      if (iVar4 == 0) {
        if (local_c != 0) {
          *(undefined4 *)(in_EAX + 0x2e0) = 1;
          *(undefined4 *)(in_EAX + 0x2a0) = 1;
          iVar4 = FUN_100eb040(param_1,local_c,0,&local_c,0,0);
          if (iVar4 != 0) goto LAB_100d40e8;
          (*(code *)PTR__free_101554bc)(*param_2);
          *param_2 = local_c;
        }
        if (local_8 != 0) {
          iVar4 = FUN_100eb040(param_1,local_8,0,&local_c,0,0);
          if (iVar4 != 0) goto LAB_100d40e8;
          (*(code *)PTR__free_101554bc)(*param_3);
          *param_3 = local_c;
        }
        if (local_4 != 0) {
          iVar4 = FUN_100eb040(param_1,local_4,0,&local_c,0,0);
          if (iVar4 == 0) {
            (*(code *)PTR__free_101554bc)(*param_4);
            *param_4 = local_c;
          }
        }
      }
    }
  }
LAB_100d40e8:
  (*(code *)PTR__free_101554bc)(iVar3);
  (*(code *)PTR__free_101554bc)(local_8);
  (*(code *)PTR__free_101554bc)(local_4);
  return iVar4;
}


/* END FUNCTION 0x100d3fa0 */
