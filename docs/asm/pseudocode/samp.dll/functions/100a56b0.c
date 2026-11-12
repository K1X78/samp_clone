/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a56b0
 * Name: FUN_100a56b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_100a56b0(undefined4 *param_1,float *param_2)

{
  char cVar1;
  
  _DAT_1018eac0 = *param_1;
  _DAT_1018eac4 = param_1[1];
  _DAT_1018eac8 = param_1[2];
  _DAT_1018eacc = param_1[3];
  _DAT_1018ead0 = param_1[4];
  _DAT_1018e56c = *param_2;
  _DAT_1018e570 = param_2[1];
  _DAT_1018e574 = param_2[2];
  _DAT_1018e578 = param_2[3];
  _DAT_1018e57c = param_2[4];
  DAT_1018f68c = 0;
  DAT_1018f68c = (*(code *)0x41ac40)(param_1,param_2);
  if ((((3000.0 < *param_2) || (*param_2 < -3000.0)) || (3000.0 < param_2[1])) ||
     (param_2[1] < -3000.0)) {
    if (((DAT_102aca24 != 0) && (DAT_1018f68c == '\0')) &&
       (cVar1 = FUN_10012ce0(&DAT_1018eac0,&DAT_1018e56c), cVar1 != '\0')) {
      DAT_1018f68c = '\x01';
    }
    if (((DAT_1018de44 != 0) && (DAT_1018f68c == '\0')) &&
       (cVar1 = FUN_10012ce0(&DAT_1018eac0,&DAT_1018e56c), cVar1 != '\0')) {
      DAT_1018f68c = '\x01';
    }
    if (DAT_102aca24 == 0) {
      return DAT_1018f68c;
    }
    if (*(char *)(DAT_102aca24 + 0x232) != '\0') {
      return DAT_1018f68c;
    }
    if (DAT_1018f68c != '\0') {
      return DAT_1018f68c;
    }
    cVar1 = FUN_1001e8e0(&DAT_1018eac0,&DAT_1018e56c);
    if (cVar1 != '\0') {
      DAT_1018f68c = 1;
      return '\x01';
    }
  }
  return DAT_1018f68c;
}


/* END FUNCTION 0x100a56b0 */
