/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ac80
 * Name: FUN_0042ac80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042ac80(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(in_EAX + 8) == '\x02') {
    iVar1 = *(int *)(in_EAX + 4);
    FUN_0040c2c0();
    if (*(char *)(iVar1 + 0x14) != '\0') {
      uVar2 = FUN_0042aae0();
      if (uVar2 != 0) {
        FUN_0040c340();
        return uVar2;
      }
    }
    uVar2 = FUN_00427120(param_1,0);
    FUN_0040c340();
  }
  return uVar2;
}


/* END FUNCTION 0x0042ac80 */
