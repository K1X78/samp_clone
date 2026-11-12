/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fd60
 * Name: FUN_0046fd60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0046fd60(void *this,ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + (uint)param_1 * 4 + 0x400);
  *(undefined4 *)(*piVar1 + 0x2b) = param_2;
  *(undefined4 *)(*piVar1 + 0x2f) = param_3;
  *(undefined4 *)(*piVar1 + 0x33) = param_4;
  *(undefined4 *)(*piVar1 + 0x37) = param_5;
  return;
}


/* END FUNCTION 0x0046fd60 */
