/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e310
 * Name: FUN_1002e310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong FUN_1002e310(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  LARGE_INTEGER local_8;
  
  if (DAT_10156bac == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_10156ba4);
    DAT_10156bac = '\x01';
  }
  QueryPerformanceCounter(&local_8);
  uVar3 = __allmul(local_8.s.LowPart,local_8.s.HighPart,1000,0);
  uVar2 = DAT_10156ba8;
  uVar1 = DAT_10156ba4;
  uVar3 = __alldvrm(uVar3,DAT_10156ba4,DAT_10156ba8);
  local_8.s.HighPart = (LONG)((ulonglong)uVar3 >> 0x20);
  uVar4 = __allmul(extraout_ECX,unaff_EBX,1000,0);
  lVar5 = __alldiv(uVar4,uVar1,uVar2);
  lVar6 = __allmul((int)uVar3,local_8.s.HighPart,1000,0);
  return lVar5 + lVar6;
}


/* END FUNCTION 0x1002e310 */
