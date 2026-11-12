/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e8a0
 * Name: FUN_0041e8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041e8a0(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = FUN_004144a0(&local_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_4 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_0040c050(param_1);
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_0041e94a;
  }
  iVar2 = FUN_0040bd20();
  if (iVar2 == 0) {
    *(undefined1 *)(in_EAX + 0x1d) = 1;
    iVar2 = FUN_004144a0(&local_4);
    if ((iVar2 == 0) && (iVar1 = FUN_0040c050(param_1), iVar1 != 0)) {
      iVar2 = FUN_0041e340();
      *param_1 = 1;
    }
    *(undefined1 *)(in_EAX + 0x1d) = 0;
    FUN_0040bd50();
  }
  if (iVar1 != 0) {
    return iVar2;
  }
LAB_0041e94a:
  if (*(int *)(in_EAX + 0x20) != 0x2de218) {
    iVar2 = FUN_0041d7f0();
  }
  return iVar2;
}


/* END FUNCTION 0x0041e8a0 */
