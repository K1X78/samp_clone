/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420b90
 * Name: FUN_00420b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00420b90(void)

{
  int in_EAX;
  int *piVar1;
  char *pcVar2;
  int unaff_ESI;
  
  piVar1 = (int *)FUN_0041c720();
  pcVar2 = "sqlite_temp_master";
  if (unaff_ESI != 1) {
    pcVar2 = "sqlite_master";
  }
  FUN_00416230(unaff_ESI,1,'\x01',(int)pcVar2);
  FUN_00414dd0(0x27,0,1,unaff_ESI);
  FUN_00415110(-0xe,(char *)0x5,piVar1);
  if (*(int *)(in_EAX + 0x44) == 0) {
    *(undefined4 *)(in_EAX + 0x44) = 1;
  }
  return;
}


/* END FUNCTION 0x00420b90 */
