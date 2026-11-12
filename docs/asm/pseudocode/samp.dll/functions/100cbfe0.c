/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cbfe0
 * Name: FUN_100cbfe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cbfe0(void)

{
  int iVar1;
  char *unaff_ESI;
  
  iVar1 = _strncmp(unaff_ESI,"I32",3);
  if ((iVar1 != 0) && (iVar1 = _strncmp(unaff_ESI,"I64",3), iVar1 != 0)) {
    switch(*unaff_ESI) {
    case ' ':
    case '#':
    case '*':
    case '+':
    case '-':
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case 'I':
    case 'L':
    case 'O':
    case 'h':
    case 'l':
    case 'q':
    case 'z':
      break;
    default:
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x100cbfe0 */
