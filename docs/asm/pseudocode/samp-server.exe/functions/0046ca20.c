/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046ca20
 * Name: FUN_0046ca20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046ca20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  iVar2 = param_10;
  iVar4 = 0;
  local_4 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_00401710(piVar1,(byte *)"OnPlayerEditObject",&param_10);
      if (iVar3 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),iVar2);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_9);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_8);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_7);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_6);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_5);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_4);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_3);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_2);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar4 * 4),&local_4,param_10);
        if (local_4 != 0) {
          return 1;
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return local_4;
}


/* END FUNCTION 0x0046ca20 */
