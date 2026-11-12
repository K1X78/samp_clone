/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453a50
 * Name: FUN_00453a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00453a50(void *this,undefined4 param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 in_stack_ffffffe8;
  
  iVar2 = FUN_00453950(this,param_1,CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),param_2),
                       '\x01','\x01');
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0xffff;
  iVar6 = 0;
  puVar3 = (ushort *)(iVar2 + 0x74c);
  do {
    uVar1 = *puVar3;
    if (uVar1 == 0xffff) {
      return uVar4;
    }
    if (uVar1 < uVar5) {
      uVar4 = *(undefined4 *)(puVar3 + 2);
      uVar5 = uVar1;
    }
    iVar6 = iVar6 + 1;
    puVar3 = puVar3 + 4;
  } while (iVar6 < 5);
  return uVar4;
}


/* END FUNCTION 0x00453a50 */
