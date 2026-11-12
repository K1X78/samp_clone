/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492160
 * Name: FUN_00492160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00492160(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  LARGE_INTEGER local_8;
  
  if (DAT_0051c07c == 0) {
    DAT_0051c07c = 1;
    DAT_0051c078 = QueryPerformanceFrequency(&local_8);
    if (DAT_0051c078 == 0) goto LAB_0049220f;
    _DAT_0051c070 = local_8.s.LowPart;
    _DAT_0051c074 = local_8.s.HighPart;
  }
  if (DAT_0051c078 != 0) {
    QueryPerformanceCounter(&local_8);
    uVar2 = DAT_0051c064;
    uVar3 = DAT_0051c060;
    if ((DAT_0051c068 & 1) == 0) {
      DAT_0051c068 = DAT_0051c068 | 1;
      uVar2 = local_8.s.HighPart;
      uVar3 = local_8.s.LowPart;
    }
    DAT_0051c060 = local_8.s.LowPart;
    DAT_0051c064 = local_8.s.HighPart;
    return (float10)CONCAT44((local_8.s.HighPart - uVar2) - (uint)(local_8.s.LowPart < (uint)uVar3),
                             local_8.s.LowPart - uVar3) /
           (float10)CONCAT44(_DAT_0051c074,_DAT_0051c070);
  }
LAB_0049220f:
  DVar1 = timeGetTime();
  fVar4 = (float10)(int)DVar1;
  if ((int)DVar1 < 0) {
    fVar4 = fVar4 + (float10)4294967296.0;
  }
  fVar4 = fVar4 * (float10)0.001;
  if ((DAT_0051c068 & 2) != 0) {
    fVar5 = (float10)_DAT_0051c058;
    _DAT_0051c058 = (double)fVar4;
    return fVar4 - fVar5;
  }
  DAT_0051c068 = DAT_0051c068 | 2;
  _DAT_0051c058 = (double)fVar4;
  return fVar4 - fVar4;
}


/* END FUNCTION 0x00492160 */
