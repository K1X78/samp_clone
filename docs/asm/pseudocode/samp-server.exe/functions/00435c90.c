/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00435c90
 * Name: FUN_00435c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00435c90(void)

{
  int unaff_EBX;
  int unaff_ESI;
  undefined *puVar1;
  
  puVar1 = &DAT_004b3154;
  if (unaff_EBX == 0) {
    puVar1 = &DAT_004b3150;
  }
  FUN_00433740(unaff_ESI,&DAT_004b61dc,2,5,puVar1,0x42f2a0,0,0);
  FUN_00433740(unaff_ESI,&DAT_004b61dc,3,5,puVar1,0x42f2a0,0,0);
  FUN_00433740(unaff_ESI,&DAT_004b61e4,2,5,&DAT_004b314c,0x42f2a0,0,0);
  FUN_0041ba90(&DAT_004b61e4,unaff_ESI,3);
  FUN_0041ba90(&DAT_004b61dc,unaff_ESI,(unaff_EBX != 0) * '\x02' + '\x01');
  return;
}


/* END FUNCTION 0x00435c90 */
