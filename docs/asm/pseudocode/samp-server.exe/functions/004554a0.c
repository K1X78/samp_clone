/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004554a0
 * Name: FUN_004554a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004554a0(void *this,undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_stack_fffffff0;
  
  iVar1 = FUN_00453950(this,param_1,CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),param_2),'\0',
                       '\0');
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    puVar4 = (ushort *)(iVar1 + 0x74c);
    do {
      if (*puVar4 == 0xffff) break;
      iVar2 = iVar2 + (uint)*puVar4;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar3 < 5);
    if (0 < iVar3) {
      return iVar2 / iVar3;
    }
  }
  return -1;
}


/* END FUNCTION 0x004554a0 */
