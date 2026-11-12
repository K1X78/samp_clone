/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403d30
 * Name: FUN_00403d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00403d30(void *this,char param_1,undefined1 *param_2)

{
  char *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  
  switch(*(undefined4 *)this) {
  case 0:
    if (param_1 == '%') {
      *(undefined4 *)this = 1;
      *param_2 = 0;
      *unaff_EBX = '.';
      *unaff_EDI = 0;
      *unaff_ESI = 3;
      return 0;
    }
    return 0xffffffff;
  case 1:
    if ((param_1 == '+') || (param_1 == ' ')) {
      *param_2 = 0x20;
      return 0;
    }
    if (('/' < param_1) && (param_1 < ':')) {
      *unaff_EDI = param_1 + -0x30;
      *(undefined4 *)this = 2;
      return 0;
    }
    break;
  case 2:
    if (('/' < param_1) && (param_1 < ':')) {
      *unaff_EDI = param_1 + -0x30 + *unaff_EDI * 10;
      return 0;
    }
    break;
  case 3:
    if (param_1 < '0') {
      return 1;
    }
    if ('9' < param_1) {
      return 1;
    }
    *unaff_ESI = param_1 + -0x30 + *unaff_ESI * 10;
    return 0;
  default:
    return 0;
  }
  if ((param_1 != '.') && (param_1 != ',')) {
    return 1;
  }
  *unaff_EBX = param_1;
  *unaff_ESI = 0;
  *(undefined4 *)this = 3;
  return 0;
}


/* END FUNCTION 0x00403d30 */
