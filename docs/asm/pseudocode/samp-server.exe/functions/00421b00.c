/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421b00
 * Name: FUN_00421b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00421b00(void *this,int param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  
  uVar1 = *unaff_EBX;
  FUN_00420060(this,param_1,in_EAX);
  puVar2 = FUN_00420060(param_2,param_1,param_3);
  puVar3 = FUN_0041a0a0(unaff_EBX);
  if ((puVar3 != (undefined4 *)0x0) && (param_4 != 0)) {
    *(byte *)((int)puVar3 + 2) = *(byte *)((int)puVar3 + 2) | 1;
    *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(puVar2 + 6);
  }
  puVar2 = FUN_0041a0d0(uVar1,(undefined4 *)*param_5);
  *param_5 = puVar2;
  return;
}


/* END FUNCTION 0x00421b00 */
