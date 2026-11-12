/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030c70
 * Name: FUN_10030c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10030c70(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  while( true ) {
    if ((char *)*puVar3 == (char *)0x0) {
      return 0xffffffff;
    }
    iVar1 = __stricmp((char *)*puVar3,param_2);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    if (0x1f < uVar2) {
      return 0xffffffff;
    }
  }
  return uVar2;
}


/* END FUNCTION 0x10030c70 */
