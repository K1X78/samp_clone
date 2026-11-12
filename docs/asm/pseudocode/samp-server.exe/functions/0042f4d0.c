/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f4d0
 * Name: FUN_0042f4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f4d0(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  void *this;
  char *pcVar1;
  int iVar2;
  
  this = (void *)FUN_0041c720();
  iVar2 = *(int *)(in_EAX + 0x48) + 1;
  *(int *)(in_EAX + 0x48) = iVar2;
  pcVar1 = (char *)FUN_00412930(8);
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)pcVar1 = param_2;
    *(undefined4 *)(pcVar1 + 4) = param_3;
  }
  FUN_004197c0(iVar2,0,8,pcVar1,-0xd);
  FUN_00419d70(1);
  FUN_0042e910(this,0,0,param_1);
  FUN_00414e70(iVar2,0x10);
  return;
}


/* END FUNCTION 0x0042f4d0 */
