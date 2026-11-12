/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f100
 * Name: FUN_0049f100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049f100(void *this,byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ed40(this,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 * 0x3d + 0x2d + (int)this);
}


/* END FUNCTION 0x0049f100 */
