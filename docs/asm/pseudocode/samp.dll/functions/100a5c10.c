/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a5c10
 * Name: FUN_100a5c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a5c10(undefined4 param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (0x17 < param_2) {
    if (DAT_102aca3c != 0) {
      __snprintf(&DAT_1018f388,0x100,"SA-MP: FrameNode name was too long (%u). SA-MP must exit.",
                 param_2);
      ShowWindow(_DAT_00c97c1c,6);
      MessageBoxA((HWND)0x0,&DAT_1018f388,"SA-MP",0x30);
    }
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = (*(code *)0x72fa50)(param_1,param_2,param_3,0);
  return uVar2;
}


/* END FUNCTION 0x100a5c10 */
