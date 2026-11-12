/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091cf0
 * Name: FUN_10091cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10091cf0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_1 + 1);
  param_2 = param_2 - (int)pcVar1;
  *param_1 = &PTR_FUN_1011d6f0;
  iVar2 = 0x200;
  do {
    if (pcVar1[param_2] == '\0') {
      if (iVar2 != 0) goto LAB_10091d24;
      break;
    }
    *pcVar1 = pcVar1[param_2];
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar1 = pcVar1 + -1;
LAB_10091d24:
  *pcVar1 = '\0';
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x90] = 0x3f800000;
  param_1[0x8b] = 0x3f800000;
  param_1[0x86] = 0x3f800000;
  param_1[0x81] = 0x3f800000;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  return;
}


/* END FUNCTION 0x10091cf0 */
