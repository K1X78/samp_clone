/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450650
 * Name: FUN_00450650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00450650(void *this,undefined8 param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  
  if ((*(int *)((int)this + 0x33c) != 0) && (uVar1 = 0, *(short *)((int)this + 8) != 0)) {
    do {
      FUN_0045b180((void *)((uint)uVar1 * 0xcb8 + 0x10 + *(int *)((int)this + 0x33c)),param_1,
                   (uint)param_2,(uint)param_3);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)this + 8));
  }
  *(undefined8 *)((int)this + 0xc30) = param_1;
  *(ushort *)((int)this + 0xc38) = param_2;
  *(ushort *)((int)this + 0xc3a) = param_3;
  return;
}


/* END FUNCTION 0x00450650 */
