/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa800
 * Name: FUN_100aa800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa800(void)

{
  DWORD local_10 [4];
  
  if (DAT_102a9278 == 0) {
    VirtualProtect(&DAT_006e1be3,0x25,0x40,local_10);
    _DAT_006e1be3 = 0x9090;
    _DAT_006e1be5 = 0x9090;
    _DAT_006e1be7 = 0x9090;
    _DAT_006e1be9 = 0x9090;
    _DAT_006e1beb = 0x9090;
    _DAT_006e1bed = 0x9090;
    _DAT_006e1bef = 0x90909090;
    _DAT_006e1bf3 = 0x90909090;
    _DAT_006e1bf7 = 0x90909090;
    _DAT_006e1bfb = 0x90909090;
    _DAT_006e1bff = 0x90909090;
    _DAT_006e1c03 = 0x90909090;
    DAT_006e1c07 = 0x90;
    VirtualProtect(&DAT_006e1c38,8,0x40,local_10);
    _DAT_006e1c38 = 0x90909090;
    _DAT_006e1c3c = 0x90909090;
    VirtualProtect(&DAT_006e1d98,0xf,0x40,local_10);
    _DAT_006e1d98 = 0x90909090;
    _DAT_006e1d9c = 0x90909090;
    _DAT_006e1da0 = 0x90909090;
    _DAT_006e1da4 = 0x9090;
    DAT_006e1da6 = 0x90;
    VirtualProtect(&DAT_006e1dbc,8,0x40,local_10);
    _DAT_006e1dbc = 0x90909090;
    _DAT_006e1dc0 = 0x90909090;
    VirtualProtect(&DAT_006e1ba0,6,0x40,local_10);
    _DAT_006e1ba0 = 0x90909090;
    _DAT_006e1ba4 = 0x9090;
    VirtualProtect(&DAT_006e1bb1,6,0x40,local_10);
    _DAT_006e1bb1 = 0x90909090;
    _DAT_006e1bb5 = 0x9090;
    VirtualProtect(&DAT_006e1bd2,7,0x40,local_10);
    _DAT_006e1bd2 = 0x90909090;
    _DAT_006e1bd6 = 0x9090;
    DAT_006e1bd8 = 0x90;
    _DAT_006e1be5 = 0x868a;
    _DAT_006e1be7 = 0x428;
    _DAT_006e1be9 = 0;
    _DAT_006e1beb = 0x40a8;
    _DAT_006e1bed = 0x2874;
    DAT_102a9278 = 1;
    _DAT_102a927c = 1;
  }
  return;
}


/* END FUNCTION 0x100aa800 */
