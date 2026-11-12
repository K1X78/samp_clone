/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101092c2
 * Name: ___mbspbrk_mt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * ___mbspbrk_mt(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    pcVar2 = _strpbrk((char *)param_2,(char *)param_3);
  }
  else {
    pbVar4 = param_3;
    if (*param_2 != 0) {
LAB_10109315:
      do {
        if (*pbVar4 != 0) {
          bVar1 = *pbVar4;
          if ((*(byte *)(bVar1 + 0x1d + param_1) & 4) == 0) {
            pbVar3 = pbVar4;
            if (bVar1 != *param_2) goto LAB_10109314;
          }
          else if (((bVar1 != *param_2) || (pbVar4[1] != param_2[1])) &&
                  (pbVar3 = pbVar4 + 1, *pbVar3 != 0)) {
LAB_10109314:
            pbVar4 = pbVar3 + 1;
            goto LAB_10109315;
          }
        }
        if (((*pbVar4 != 0) ||
            (((*(byte *)(*param_2 + 0x1d + param_1) & 4) != 0 &&
             (param_2 = param_2 + 1, *param_2 == 0)))) ||
           (param_2 = param_2 + 1, pbVar4 = param_3, *param_2 == 0)) break;
      } while( true );
    }
    pcVar2 = (char *)(-(uint)(*param_2 != 0) & (uint)param_2);
  }
  return pcVar2;
}


/* END FUNCTION 0x101092c2 */
