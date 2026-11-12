/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490020
 * Name: FUN_00490020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00490020(void)

{
  char *_String;
  double dVar1;
  
  _String = _strtok((char *)0x0," ");
  if (_String != (char *)0x0) {
    dVar1 = _atof(_String);
    FUN_00496310(DAT_004fc438,(float)dVar1);
  }
  return;
}


/* END FUNCTION 0x00490020 */
