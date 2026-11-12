/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e970
 * Name: FUN_0044e970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong FUN_0044e970(void)

{
  uint uVar1;
  uint uVar2;
  uint extraout_ECX;
  int unaff_EBX;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  LARGE_INTEGER local_8;
  
  if (DAT_004ed580 == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_004ed578);
    DAT_004ed580 = '\x01';
  }
  QueryPerformanceCounter(&local_8);
  lVar3 = __allmul(local_8.s.LowPart,local_8.s.HighPart,1000,0);
  uVar2 = DAT_004ed57c;
  uVar1 = DAT_004ed578;
  uVar4 = __alldvrm((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),DAT_004ed578,DAT_004ed57c);
  local_8.s.HighPart = (LONG)((ulonglong)uVar4 >> 0x20);
  lVar3 = __allmul(extraout_ECX,unaff_EBX,1000,0);
  lVar3 = __alldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),uVar1,uVar2);
  lVar5 = __allmul((uint)uVar4,local_8.s.HighPart,1000,0);
  return lVar3 + lVar5;
}


/* END FUNCTION 0x0044e970 */
