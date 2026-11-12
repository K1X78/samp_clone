/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004963f0
 * Name: FUN_004963f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004963f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  FUN_004935f0(param_1,0);
  uVar4 = 0;
  iVar1 = 0;
  iVar2 = 0x24de4;
  uVar3 = 0;
  do {
    if ((uVar3 < 1000) && (*(int *)(param_1[2] + iVar2) != 0)) {
      FUN_00465760((void *)param_1[5],(ushort)uVar4);
      FUN_00495dc0(param_1,uVar4);
      FUN_0046ae10((void *)param_1[1],iVar1);
      if ((void *)*param_1 != (void *)0x0) {
        FUN_0046dbf0((void *)*param_1,iVar1);
      }
    }
    uVar4 = uVar4 + 1;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
    uVar3 = (ushort)uVar4;
  } while (uVar3 != 1000);
  return;
}


/* END FUNCTION 0x004963f0 */
