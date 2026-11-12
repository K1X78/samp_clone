/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2c00
 * Name: FUN_100f2c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f2c00(void)

{
  char *in_EAX;
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2;
    *(char *)(uVar3 + unaff_ESI) = *in_EAX;
    if (*in_EAX == '\0') {
LAB_100f2c5c:
      *(undefined1 *)(uVar3 + unaff_ESI) = 10;
      return uVar3 + 1;
    }
    *(char *)(uVar3 + 1 + unaff_ESI) = in_EAX[1];
    if (in_EAX[1] == '\0') {
      *(undefined1 *)(uVar3 + 1 + unaff_ESI) = 10;
      return uVar3 + 2;
    }
    *(char *)(uVar3 + 2 + unaff_ESI) = in_EAX[2];
    pcVar1 = in_EAX + 3;
    if (in_EAX[2] == '\0') {
      *(undefined1 *)(uVar3 + 2 + unaff_ESI) = 10;
      return uVar3 + 3;
    }
    *(char *)(uVar3 + 3 + unaff_ESI) = *pcVar1;
    in_EAX = in_EAX + 4;
    if (*pcVar1 == '\0') {
      uVar3 = uVar3 + 3;
      goto LAB_100f2c5c;
    }
    uVar2 = uVar3 + 4;
    if (0x3f < uVar2) {
      *(undefined1 *)(uVar2 + unaff_ESI) = 10;
      return uVar3 + 5;
    }
  } while( true );
}


/* END FUNCTION 0x100f2c00 */
