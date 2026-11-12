/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040efb0
 * Name: FUN_0040efb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_0040efb0(void)

{
  char cVar1;
  byte *in_EAX;
  uint uVar2;
  byte bVar3;
  
  uVar2 = 0;
  cVar1 = 'c';
  if ((in_EAX == (byte *)0x0) || (bVar3 = *in_EAX, bVar3 == 0)) {
    return 'c';
  }
  do {
    uVar2 = uVar2 * 0x100 + (uint)(byte)(&DAT_004b28c8)[bVar3];
    in_EAX = in_EAX + 1;
    if (uVar2 == 0x63686172) {
      cVar1 = 'a';
    }
    else if (uVar2 == 0x636c6f62) {
      cVar1 = 'a';
    }
    else if (uVar2 == 0x74657874) {
      cVar1 = 'a';
    }
    else if (uVar2 == 0x626c6f62) {
      if ((cVar1 != 'c') && (cVar1 != 'e')) goto LAB_0040f048;
      cVar1 = 'b';
    }
    else if (uVar2 == 0x7265616c) {
      if (cVar1 != 'c') goto LAB_0040f048;
      cVar1 = 'e';
    }
    else if (uVar2 == 0x666c6f61) {
      if (cVar1 == 'c') {
        cVar1 = 'e';
      }
      else {
LAB_0040f048:
        if ((uVar2 & 0xffffff) == 0x696e74) {
          return 'd';
        }
      }
    }
    else {
      if ((uVar2 != 0x646f7562) || (cVar1 != 'c')) goto LAB_0040f048;
      cVar1 = 'e';
    }
    bVar3 = *in_EAX;
    if (bVar3 == 0) {
      return cVar1;
    }
  } while( true );
}


/* END FUNCTION 0x0040efb0 */
