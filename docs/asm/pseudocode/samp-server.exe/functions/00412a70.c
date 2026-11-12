/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412a70
 * Name: FUN_00412a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_00412a70(void)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *unaff_EBX;
  char *pcVar4;
  
  if (unaff_EBX == (char *)0x0) {
    return (char *)0x0;
  }
  uVar1 = FUN_00408380(unaff_EBX);
  uVar1 = uVar1 + 1;
  pcVar2 = (char *)FUN_00412930(uVar1);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)unaff_EBX;
      unaff_EBX = unaff_EBX + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar4 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  return pcVar2;
}


/* END FUNCTION 0x00412a70 */
