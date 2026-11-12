/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a5e30
 * Name: FUN_100a5e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5e30(void)

{
  DWORD local_8;
  DWORD local_4;
  
  FUN_100aa0b0(&DAT_0053eb13,4);
  _DAT_0053eb13 = DAT_102ac9cc + -0x53eb17;
  VirtualProtect(&DAT_0058fc53,5,0x40,&local_8);
  DAT_0058fc53 = 0xe8;
  _DAT_0058fc54 = 0xfb12668;
  VirtualProtect(&DAT_0058fc53,5,local_8,&local_4);
  VirtualProtect(&DAT_0058fbbf,5,0x40,&local_8);
  DAT_0058fbbf = 0xe8;
  _DAT_0058fbc0 = 0xfb1272c;
  VirtualProtect(&DAT_0058fbbf,5,local_8,&local_4);
  VirtualProtect(&DAT_0053c104,5,0x40,&local_8);
  DAT_0053c104 = 0xe8;
  _DAT_0053c105 = 0xfb66297;
  VirtualProtect(&DAT_0053c104,5,local_8,&local_4);
  VirtualProtect(&DAT_0053e981,5,0x40,&local_8);
  DAT_0053e981 = 0xe8;
  _DAT_0053e982 = 0xfb63a4a;
  VirtualProtect(&DAT_0053e981,5,local_8,&local_4);
  VirtualProtect(&DAT_0086d1b0,4,0x40,&local_8);
  _DAT_0086d1b0 = &LAB_100a3b90;
  VirtualProtect(&DAT_0086d1b0,4,local_8,&local_4);
  VirtualProtect(&DAT_0086c0f0,4,0x40,&local_8);
  _DAT_0086c0f0 = &LAB_100a3b90;
  VirtualProtect(&DAT_0086c0f0,4,local_8,&local_4);
  VirtualProtect(&DAT_0086c168,4,0x40,&local_8);
  _DAT_0086c168 = &LAB_100a3b90;
  VirtualProtect(&DAT_0086c168,4,local_8,&local_4);
  VirtualProtect(&DAT_0086c248,4,0x40,&local_8);
  _DAT_0086c248 = &LAB_100a3b90;
  VirtualProtect(&DAT_0086c248,4,local_8,&local_4);
  VirtualProtect(&DAT_0086c3a0,4,0x40,&local_8);
  _DAT_0086c3a0 = &LAB_100a3b90;
  VirtualProtect(&DAT_0086c3a0,4,local_8,&local_4);
  VirtualProtect(&DAT_0053e930,5,0x40,&local_8);
  DAT_0053e930 = 0xe8;
  _DAT_0053e931 = 0xfb638cb;
  VirtualProtect(&DAT_0053e930,5,local_8,&local_4);
  return;
}


/* END FUNCTION 0x100a5e30 */
