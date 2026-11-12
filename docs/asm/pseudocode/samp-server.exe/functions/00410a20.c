/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410a20
 * Name: thunk_FUN_00410990
 * Status: ok
 * Single JMP forwarder to 0x00410990; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 thunk_FUN_00410990(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *unaff_EBX;
  uint unaff_EDI;
  
  if ((int)unaff_EDI < 2) {
    return 0x1a;
  }
  bVar1 = (&DAT_004b5918)
          [(int)((uint)(byte)(&DAT_004b28c8)[unaff_EBX[unaff_EDI - 1]] * 3 ^
                 (uint)(byte)(&DAT_004b28c8)[*unaff_EBX] << 2 ^ unaff_EDI) % 0x7f];
  while( true ) {
    iVar2 = bVar1 - 1;
    if (iVar2 < 0) {
      return 0x1a;
    }
    if (((byte)(&UNK_004b5a18)[iVar2] == unaff_EDI) &&
       (iVar3 = FUN_004084a0((byte *)(
                                     "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSAVEPOINTERSECTRIGGEREFERENCESCONSTRAINTOFFSETEMPORARYUNIQUERYATTACHAVINGROUPDATEBEGINNERELEASEBETWEENOTNULLIKECASCADELETECASECOLLATECREATECURRENT_DATEDETACHIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMABORTVALUESVIRTUALIMITWHENWHERENAMEAFTEREPLACEANDEFAULTAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRIMARYDEFERREDISTINCTDROPFAILFROMFULLGLOBYIFISNULLORDERESTRICTOUTERIGHTROLLBACKROWUNIONUSINGVACUUMVIEWINITIALLY"
                                     + *(ushort *)(&DAT_004b5a98 + iVar2 * 2)),unaff_EBX,unaff_EDI),
       iVar3 == 0)) break;
    bVar1 = (&UNK_004b5998)[iVar2];
  }
  return (&UNK_004b5b90)[iVar2];
}


/* END FUNCTION 0x00410a20 */
