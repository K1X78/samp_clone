/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3d60
 * Name: FUN_100e3d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e3d60(uint param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  byte *in_EAX;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  int unaff_ESI;
  int iVar8;
  byte abStack_10 [5];
  byte bStack_b;
  byte *local_8;
  char *pcStack_4;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 == 0) {
    pbVar2 = in_EAX;
    do {
      bVar6 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar6 != 0);
    param_1 = (int)pbVar2 - (int)(in_EAX + 1);
  }
  if (param_1 < 0x40000000) {
    local_8 = in_EAX;
    pcVar3 = (char *)(*(code *)PTR__malloc_101554b8)((param_1 * 4) / 3 + 4);
    pcVar5 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      while (pcStack_4 = pcVar5, param_1 != 0) {
        iVar8 = 0;
        iVar4 = 0;
        do {
          if (param_1 == 0) {
            abStack_10[iVar4] = 0;
          }
          else {
            bVar6 = *local_8;
            iVar8 = iVar8 + 1;
            local_8 = local_8 + 1;
            abStack_10[iVar4] = bVar6;
            param_1 = param_1 - 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        bStack_b = (abStack_10[0] & 3) << 4 | abStack_10[1] >> 4;
        bVar6 = (abStack_10[1] & 0xf) << 2 | abStack_10[2] >> 6;
        bVar7 = abStack_10[0] >> 2;
        if (iVar8 == 1) {
          FUN_100cc780(pcVar3,5,"%c%c==",(int)*(char *)((uint)bVar7 + unaff_ESI),
                       (int)*(char *)((uint)bStack_b + unaff_ESI));
        }
        else if (iVar8 == 2) {
          FUN_100cc780(pcVar3,5,"%c%c%c=",(int)*(char *)((uint)bVar7 + unaff_ESI),
                       (int)*(char *)((uint)bStack_b + unaff_ESI),
                       (int)*(char *)((uint)bVar6 + unaff_ESI));
        }
        else {
          FUN_100cc780(pcVar3,5,"%c%c%c%c",(int)*(char *)((uint)bVar7 + unaff_ESI),
                       (int)*(char *)((uint)bStack_b + unaff_ESI),
                       (int)*(char *)((uint)bVar6 + unaff_ESI),
                       (int)*(char *)((uint)(abStack_10[2] & 0x3f) + unaff_ESI));
        }
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcStack_4;
      }
      *pcVar3 = '\0';
      *param_2 = pcVar5;
      (*(code *)PTR__free_101554bc)(0);
      pcVar3 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *param_3 = (int)pcVar5 - (int)pcVar3;
      return 0;
    }
    return 0x1b;
  }
  return 0x1b;
}


/* END FUNCTION 0x100e3d60 */
