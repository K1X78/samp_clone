/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062500
 * Name: FUN_10062500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10062500(int *param_1)

{
  if (((((*param_1 == DAT_1014033c) && (param_1[1] == DAT_10140340)) && (param_1[2] == DAT_10140344)
       ) && ((param_1[3] == DAT_10140348 && (param_1[4] == DAT_1014034c)))) && (DAT_102aca3c != 0))
  {
    *(int *)(DAT_102aca3c + 0x55) = *(int *)(DAT_102aca3c + 0x55) + 1;
  }
  if (((*param_1 == DAT_10140350) && (param_1[1] == DAT_10140354)) &&
     ((param_1[2] == DAT_10140358 &&
      (((param_1[3] == DAT_1014035c && (param_1[4] == DAT_10140360)) && (DAT_102aca3c != 0)))))) {
    *(int *)(DAT_102aca3c + 0x55) = *(int *)(DAT_102aca3c + 0x55) + 1;
  }
  if ((((*param_1 == DAT_10140364) && (param_1[1] == DAT_10140368)) &&
      ((param_1[2] == DAT_1014036c && ((param_1[3] == DAT_10140370 && (param_1[4] == DAT_10140374)))
       ))) && (DAT_102aca3c != 0)) {
    *(int *)(DAT_102aca3c + 0x55) = *(int *)(DAT_102aca3c + 0x55) + 1;
  }
  return;
}


/* END FUNCTION 0x10062500 */
