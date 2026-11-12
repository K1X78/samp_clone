/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408300
 * Name: FUN_00408300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00408300(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *unaff_ESI;
  
  puVar1 = unaff_ESI;
  puVar2 = unaff_ESI;
  if (0 < param_1) {
    do {
      puVar2 = puVar1 + 1;
      if ((0xd7ff < *puVar1) && (*puVar1 < 0xe000)) {
        puVar2 = puVar1 + 2;
      }
      param_1 = param_1 + -1;
      puVar1 = puVar2;
    } while (param_1 != 0);
  }
  return (int)puVar2 - (int)unaff_ESI;
}


/* END FUNCTION 0x00408300 */
