/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d470
 * Name: FUN_0040d470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040d470(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_f0 [59];
  
  puVar3 = param_2;
  puVar4 = local_f0;
  for (iVar2 = 0x3a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = in_EAX;
  puVar4 = param_2;
  for (iVar2 = 0x3a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_f0;
  puVar4 = in_EAX;
  for (iVar2 = 0x3a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = param_2[2];
  param_2[2] = in_EAX[2];
  in_EAX[2] = uVar1;
  uVar1 = param_2[1];
  param_2[1] = in_EAX[1];
  in_EAX[1] = uVar1;
  uVar1 = param_2[0x2f];
  param_2[0x2f] = in_EAX[0x2f];
  in_EAX[0x2f] = uVar1;
  *(undefined1 *)(in_EAX + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  return;
}


/* END FUNCTION 0x0040d470 */
