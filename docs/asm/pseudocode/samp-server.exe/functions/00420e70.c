/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420e70
 * Name: FUN_00420e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00420e70(void *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_00416430();
  if (pcVar1 != (char *)0x0) {
    iVar2 = FUN_0041c720();
    if (iVar2 != 0) {
      iVar2 = FUN_0041ab60(0x20,(&PTR_s_BEGIN_004b3138)[param_1],pcVar1,0);
      if (iVar2 == 0) {
        FUN_004197c0(0,param_1,0x20,pcVar1,-1);
        return;
      }
    }
    FUN_00408130(*(int *)this);
  }
  return;
}


/* END FUNCTION 0x00420e70 */
