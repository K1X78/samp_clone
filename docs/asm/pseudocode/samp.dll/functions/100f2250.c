/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2250
 * Name: FUN_100f2250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100f2250(char *param_1)

{
  char *in_EAX;
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  for (pcVar1 = param_1; ((pcVar1 < in_EAX && ('/' < *pcVar1)) && (*pcVar1 < ':'));
      pcVar1 = pcVar1 + 1) {
  }
  pcVar3 = param_1 + 10;
  if (pcVar1 == pcVar3) {
    pcVar3 = "00";
  }
  else if ((int)pcVar1 - (int)pcVar3 != 2) {
    return 0;
  }
  if (in_EAX <= pcVar1) {
    return 0;
  }
  if (*pcVar1 == 'Z') {
    pcVar1 = "GMT";
    in_EAX = "";
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  uVar2 = FUN_100cd220("%u%.2s-%.2s-%.2s %.2s:%.2s:%.2s %.*s",0x14 - (uint)('4' < *param_1),param_1,
                       param_1 + 2,param_1 + 4,param_1 + 6,param_1 + 8,pcVar3,
                       (int)in_EAX - (int)pcVar1,pcVar1);
  return uVar2;
}


/* END FUNCTION 0x100f2250 */
