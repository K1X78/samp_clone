/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004338a0
 * Name: FUN_004338a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_004338a0(int param_1,byte param_2,undefined1 param_3,int param_4,int param_5,int param_6)

{
  char *in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  byte bVar4;
  undefined4 *puVar5;
  
  FUN_00408380(in_EAX);
  if ((param_2 == 4) || (param_2 == 8)) {
    bVar4 = 2;
  }
  else if ((param_2 == 0) || (bVar4 = param_2, 3 < param_2)) {
    uVar3 = FUN_0041d7c0();
    return uVar3;
  }
  piVar1 = FUN_0041b6e0(param_1,0,bVar4);
  if ((piVar1 != (int *)0x0) && (piVar1[3] != 0)) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_0042f990(5,(undefined **)
                     "unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    FUN_0040dcd0();
    if ((*(byte *)(extraout_EDX + 4) & 0xf7) == bVar4) {
      iVar2 = FUN_00409170();
      puVar5 = (undefined4 *)(iVar2 + 0x10);
      iVar2 = 3;
      do {
        if (*(char *)(puVar5 + -3) == (char)piVar1[1]) {
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)(puVar5[-2]);
          }
          puVar5[-1] = 0;
        }
        puVar5 = puVar5 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  piVar1 = FUN_0041b6e0(param_1,1,bVar4);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_4;
    piVar1[3] = param_5;
    *(byte *)(piVar1 + 1) = param_2 & 8 | bVar4;
    piVar1[4] = param_6;
    *(undefined1 *)((int)piVar1 + 5) = param_3;
  }
  FUN_0042f990(0,(undefined **)0x0);
  return 0;
}


/* END FUNCTION 0x004338a0 */
