/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b1e0
 * Name: FUN_0049b1e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0049b1e0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined1 local_30 [48];
  
  if (param_3 == 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint_x86.h",0x613);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  *param_4 = (int)(CONCAT44(param_1,param_2) / (ulonglong)param_3);
  *param_5 = (int)(CONCAT44(param_1,param_2) % (ulonglong)param_3);
  return;
}


/* END FUNCTION 0x0049b1e0 */
