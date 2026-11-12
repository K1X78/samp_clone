/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d17f0
 * Name: FUN_100d17f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d17f0(void)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  char local_208;
  undefined4 local_207;
  undefined1 local_109;
  char local_108;
  undefined4 local_107;
  undefined1 local_9;
  
  local_208 = '\0';
  puVar2 = &local_207;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_108 = '\0';
  puVar2 = &local_107;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  if (*(char **)(unaff_ESI + 0x650) != (char *)0x0) {
    _strncpy(&local_208,*(char **)(unaff_ESI + 0x650),0x100);
    local_109 = 0;
  }
  if (*(char **)(unaff_ESI + 0x654) != (char *)0x0) {
    _strncpy(&local_108,*(char **)(unaff_ESI + 0x654),0x100);
    local_9 = 0;
  }
  iVar1 = FUN_100eb040();
  if (iVar1 == 0) {
    FUN_100eb040();
  }
  return;
}


/* END FUNCTION 0x100d17f0 */
