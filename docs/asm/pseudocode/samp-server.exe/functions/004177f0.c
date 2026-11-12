/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004177f0
 * Name: FUN_004177f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004177f0(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 8);
  switch(param_2) {
  case 0xa0:
  case 0xc2:
    FUN_0040fce0(*piVar1,*param_1);
    return;
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc3:
  case 0xc4:
  case 0xcb:
  case 0xcd:
  case 0xd0:
  case 0xd1:
  case 0xd4:
  case 0xda:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xeb:
  case 0xed:
  case 0xf0:
  case 0xf1:
  case 0xf2:
    goto switchD_0041780e_default;
  case 0xae:
  case 0xaf:
    FUN_004158d0(*piVar1,*param_1);
    return;
  case 0xb3:
  case 0xbb:
  case 0xc5:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xd6:
  case 0xd8:
  case 0xd9:
  case 0xdc:
  case 0xdd:
  case 0xe2:
    FUN_0040e580();
    return;
  case 0xc1:
  case 0xc6:
  case 0xce:
  case 0xcf:
    FUN_0040f240((short *)*param_1);
    return;
  case 199:
  case 0xc9:
  case 0xd2:
  case 0xd7:
  case 0xe1:
  case 0xe3:
  case 0xee:
  case 0xf3:
    FUN_004158d0(*piVar1,*param_1);
    return;
  case 0xd3:
  case 0xd5:
  case 0xdb:
    FUN_0040f150();
    return;
  case 0xea:
  case 0xef:
    FUN_00416bd0(*param_1);
    return;
  case 0xec:
    FUN_0040f150();
switchD_0041780e_default:
    return;
  default:
    return;
  }
}


/* END FUNCTION 0x004177f0 */
