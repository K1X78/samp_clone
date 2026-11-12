/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ff90
 * Name: FUN_1001ff90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001ff90(undefined4 param_1,ushort param_2,undefined4 param_3,int *param_4,in_addr param_5,
                 undefined2 param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  inet_ntoa(param_5);
  uVar2 = (uint)param_2;
  iVar1 = *param_4;
  pcVar3 = inet_ntoa(param_5);
  (**(code **)(iVar1 + 8))
            (param_4,param_5.S_un,param_6,"%s returned %s %i:%i\r\n",param_3,pcVar3,param_1,uVar2);
  return;
}


/* END FUNCTION 0x1001ff90 */
