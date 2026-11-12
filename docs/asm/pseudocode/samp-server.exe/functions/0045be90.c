/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045be90
 * Name: FUN_0045be90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0045be90(void *this,uint *param_1,ushort *param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint *this_00;
  ushort *puVar4;
  
  puVar4 = param_2;
  this_00 = param_1;
  puVar1 = param_2 + 6;
  param_2 = (ushort *)(uint)*param_2;
  uVar2 = *param_1;
  param_1 = (uint *)CONCAT31(param_1._1_3_,(char)*puVar1);
  FUN_0044df40(this_00,(byte *)&param_2,0x10,'\x01');
  FUN_0044df40(this_00,(byte *)&param_1,*(int *)((int)this + 0x420),'\x01');
  iVar3 = *(int *)(puVar4 + 6);
  if (((iVar3 == 7) || (iVar3 == 10)) || (iVar3 == 9)) {
    FUN_0044df40(this_00,(byte *)(puVar4 + 8),5,'\x01');
    param_2 = (ushort *)(uint)puVar4[9];
    FUN_0044df40(this_00,(byte *)&param_2,0x10,'\x01');
  }
  if (*(int *)(puVar4 + 0xe) == 0) {
    FUN_0044de70(this_00);
  }
  else {
    FUN_0044de90(this_00);
    param_2 = (ushort *)(uint)puVar4[10];
    FUN_0044df40(this_00,(byte *)&param_2,0x10,'\x01');
    param_2 = *(ushort **)(puVar4 + 0xc);
    FUN_0044e080(this_00,(byte *)&param_2,0x20,'\x01');
    param_2 = *(ushort **)(puVar4 + 0xe);
    FUN_0044e080(this_00,(byte *)&param_2,0x20,'\x01');
  }
  param_2 = (ushort *)(uint)puVar4[0x18];
  FUN_0044e080(this_00,(byte *)&param_2,0x10,'\x01');
  FUN_0044e070(this_00,*(byte **)(puVar4 + 0x1a),*(int *)(puVar4 + 0x18) + 7U >> 3);
  return *this_00 - uVar2;
}


/* END FUNCTION 0x0045be90 */
