/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e160
 * Name: FUN_1003e160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1003e160(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 unaff_BP;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 *unaff_retaddr;
  undefined1 local_8 [8];
  
  (**(code **)(*param_1 + 0xbc))(param_2,param_3,local_8);
  iVar1 = FUN_1003c2a0(unaff_ESI,unaff_BP,0,1);
  if (iVar1 != 0) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_10038d10();
  *puVar2 = unaff_ESI;
  *(undefined2 *)(puVar2 + 1) = unaff_BP;
  uVar3 = FUN_1002e2b0();
  *(undefined4 *)((int)puVar2 + 6) = uVar3;
  uVar4 = param_2 >> 2;
  *(undefined1 *)((int)puVar2 + 10) = 0;
  *(undefined4 *)((int)puVar2 + 0xb) = 0;
  *(undefined4 *)((int)puVar2 + 0x112) = 1;
  puVar5 = (undefined4 *)((int)puVar2 + 0x11);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *unaff_retaddr;
    unaff_retaddr = unaff_retaddr + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)unaff_retaddr;
    unaff_retaddr = (undefined4 *)((int)unaff_retaddr + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(char *)((int)puVar2 + 0x111) = (char)param_2;
  FUN_10038d70();
  return 1;
}


/* END FUNCTION 0x1003e160 */
