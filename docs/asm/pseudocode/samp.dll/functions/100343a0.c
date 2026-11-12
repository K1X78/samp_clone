/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100343a0
 * Name: FUN_100343a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100343a0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_retaddr;
  undefined2 uVar2;
  undefined1 local_6 [6];
  
  uVar2 = 0x1003;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x9c))(local_6);
  FUN_1003dfe0(unaff_retaddr,*puVar1,CONCAT22(uVar2,*(undefined2 *)(puVar1 + 1)));
  return;
}


/* END FUNCTION 0x100343a0 */
