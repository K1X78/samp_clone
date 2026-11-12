/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004557f0
 * Name: FUN_004557f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004557f0(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 unaff_BP;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *unaff_retaddr;
  undefined4 in_stack_ffffffd0;
  undefined2 uVar6;
  undefined1 local_8 [8];
  
  uVar6 = (undefined2)((uint)in_stack_ffffffd0 >> 0x10);
  (**(code **)(*(int *)this + 0xbc))(param_1,param_2,local_8);
  uVar1 = FUN_00453950(this,unaff_ESI,CONCAT22(uVar6,unaff_BP),'\0','\x01');
  if (uVar1 != 0) {
    return uVar1 & 0xffffff00;
  }
  puVar2 = (undefined4 *)FUN_00450a60((int)this + 0x3c4);
  *puVar2 = unaff_ESI;
  *(undefined2 *)(puVar2 + 1) = unaff_BP;
  uVar5 = FUN_0044e910();
  puVar2[2] = (int)uVar5;
  uVar1 = param_1 >> 2;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  puVar2[0x46] = 1;
  puVar4 = (undefined4 *)((int)puVar2 + 0x16);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *unaff_retaddr;
    unaff_retaddr = unaff_retaddr + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)unaff_retaddr;
    unaff_retaddr = (undefined4 *)((int)unaff_retaddr + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(char *)((int)puVar2 + 0x116) = (char)param_1;
  uVar3 = FUN_00450ac0((int)this + 0x3c4);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


/* END FUNCTION 0x004557f0 */
