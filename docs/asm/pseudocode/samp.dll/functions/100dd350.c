/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd350
 * Name: FUN_100dd350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100dd350(int param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  uint uVar3;
  char *unaff_EBX;
  char *pcVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 < in_EAX) {
    uVar5 = in_EAX - uVar3;
    pcVar4 = (char *)(param_1 + uVar3);
  }
  else {
    pcVar2 = unaff_EBX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = uVar3 - in_EAX;
    if ((uint)((int)pcVar2 - (int)(unaff_EBX + 1)) <= uVar3) {
      return 0;
    }
    pcVar4 = unaff_EBX + uVar3;
    uVar5 = ((int)pcVar2 - (int)(unaff_EBX + 1)) - uVar3;
  }
  if (param_4 < uVar5) {
    uVar5 = param_4;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_3 = param_3 + 4;
  }
  for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_3 = param_3 + 1;
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar5;
  return uVar5;
}


/* END FUNCTION 0x100dd350 */
