/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f710
 * Name: FUN_0041f710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041f710(uint param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = (char)((int)param_1 >> 3);
  *(char *)(in_EAX + 3) = cVar3;
  *(char *)(in_EAX + 6) = ('\x01' - cVar3) * '\x04';
  iVar1 = *(int *)(in_EAX + 0x3c);
  if ((param_1 & 0xfffffff7) == 5) {
    *(undefined1 *)(in_EAX + 2) = 1;
    *(char *)(in_EAX + 4) = cVar3;
    *(undefined2 *)(in_EAX + 8) = *(undefined2 *)(iVar1 + 0x1e);
    *(undefined2 *)(in_EAX + 10) = *(undefined2 *)(iVar1 + 0x20);
    return 0;
  }
  if ((param_1 & 0xfffffff7) == 2) {
    *(undefined1 *)(in_EAX + 2) = 0;
    *(undefined1 *)(in_EAX + 4) = 0;
    *(undefined2 *)(in_EAX + 8) = *(undefined2 *)(iVar1 + 0x1a);
    *(undefined2 *)(in_EAX + 10) = *(undefined2 *)(iVar1 + 0x1c);
    return 0;
  }
  uVar2 = FUN_0041d790();
  return uVar2;
}


/* END FUNCTION 0x0041f710 */
