/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5b00
 * Name: FUN_100c5b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100c5b00(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  LARGE_INTEGER local_8;
  
  if (DAT_102acaac == 0) {
    DAT_102acaac = 1;
    DAT_102acaa8 = QueryPerformanceFrequency(&local_8);
    if (DAT_102acaa8 == 0) goto LAB_100c5baf;
    _DAT_102acaa0 = local_8.s.LowPart;
    _DAT_102acaa4 = local_8.s.HighPart;
  }
  if (DAT_102acaa8 != 0) {
    QueryPerformanceCounter(&local_8);
    uVar2 = DAT_102aca94;
    uVar3 = DAT_102aca90;
    if ((DAT_102aca98 & 1) == 0) {
      DAT_102aca98 = DAT_102aca98 | 1;
      uVar2 = local_8.s.HighPart;
      uVar3 = local_8.s.LowPart;
    }
    DAT_102aca90 = local_8.s.LowPart;
    DAT_102aca94 = local_8.s.HighPart;
    return (float10)CONCAT44((local_8.s.HighPart - uVar2) - (uint)(local_8.s.LowPart < (uint)uVar3),
                             local_8.s.LowPart - uVar3) /
           (float10)CONCAT44(_DAT_102acaa4,_DAT_102acaa0);
  }
LAB_100c5baf:
  DVar1 = timeGetTime();
  fVar4 = (float10)(int)DVar1;
  if ((int)DVar1 < 0) {
    fVar4 = fVar4 + (float10)4294967296.0;
  }
  fVar4 = fVar4 * (float10)0.001;
  if ((DAT_102aca98 & 2) != 0) {
    fVar5 = (float10)_DAT_102aca88;
    _DAT_102aca88 = (double)fVar4;
    return fVar4 - fVar5;
  }
  DAT_102aca98 = DAT_102aca98 | 2;
  _DAT_102aca88 = (double)fVar4;
  return fVar4 - fVar4;
}


/* END FUNCTION 0x100c5b00 */
