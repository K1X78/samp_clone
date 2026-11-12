/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00464970
 * Name: FUN_00464970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_00464970(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)this + (uVar1 & 0xffff) * 4 + 0x4000) == 0) break;
    uVar1 = uVar1 + 1;
  } while ((ushort)uVar1 < 0x400);
  if ((short)uVar1 == 0x400) {
    return CONCAT22((short)(uVar1 >> 0x10),0xffff);
  }
  puVar2 = (undefined4 *)((uVar1 & 0xffff) * 0x10 + (int)this);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined4 *)((int)this + (uVar1 & 0xffff) * 4 + 0x4000) = 1;
  return uVar1;
}


/* END FUNCTION 0x00464970 */
