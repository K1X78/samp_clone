/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047deac
 * Name: FUN_0047deac
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __cdecl
FUN_0047deac(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  ushort uVar1;
  int in_EAX;
  undefined4 unaff_EBX;
  int iVar2;
  float10 fVar3;
  ulonglong uVar4;
  void *in_stack_00000248;
  int in_stack_0000025c;
  
  uVar1 = *(ushort *)(in_stack_0000025c + 4);
  if (uVar1 < 2000) {
    iVar2 = *(int *)(in_EAX + 0xf46280 + (uint)uVar1 * 4);
  }
  else {
    iVar2 = 0;
  }
  param_1 = 0.0;
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 0x96) & 1) != 0) {
      *(byte *)(iVar2 + 0x96) = *(byte *)(iVar2 + 0x96) & 0xfe;
      FUN_0044d8a0((undefined4 *)&stack0x00000134);
      param_1 = (float)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1);
      FUN_0044df40(&stack0x00000134,(byte *)&param_1,0x10,'\x01');
      FUN_00493960(DAT_004fc438,&DAT_004be95c,&stack0x00000134,0xffff);
      FUN_0044d9b0((int)&stack0x00000134);
    }
    FUN_0044d8a0((undefined4 *)&stack0x00000020);
    param_1 = *(float *)(in_stack_0000025c + 8);
    param_6 = *(float *)(in_stack_0000025c + 0xc);
    param_2 = *(float *)(in_stack_0000025c + 0x10);
    param_4 = *(float *)(in_stack_0000025c + 0x14);
    param_5 = *(float *)(in_stack_0000025c + 0x18);
    param_7 = *(float *)(in_stack_0000025c + 0x20);
    param_3 = *(float *)(in_stack_0000025c + 0x1c);
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x10,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_0044df40(&stack0x00000020,&stack0x00000000,0x20,'\x01');
    FUN_00493960(DAT_004fc438,&DAT_004be958,&stack0x00000020,0xffff);
    fVar3 = FUN_0049d910(iVar2,param_1,param_6,param_2,param_4,param_5,param_3,param_7);
    param_1 = (float)fVar3;
    FUN_0044d9b0((int)&stack0x00000020);
  }
  uVar4 = FUN_004a0540();
  ExceptionList = in_stack_00000248;
  return uVar4;
}


/* END FUNCTION 0x0047deac */
