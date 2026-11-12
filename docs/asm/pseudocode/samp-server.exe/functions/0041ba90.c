/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ba90
 * Name: FUN_0041ba90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0041ba90(void *this,int param_1,undefined1 param_2)

{
  uint uVar1;
  short *psVar2;
  byte *extraout_ECX;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 1;
  iVar3 = 2;
  uVar1 = FUN_00408380(this);
  psVar2 = FUN_0041b710(param_1,extraout_ECX,uVar1,iVar3,uVar4,iVar5);
  if (psVar2 != (short *)0x0) {
    *(undefined1 *)((int)psVar2 + 3) = param_2;
  }
  return;
}


/* END FUNCTION 0x0041ba90 */
