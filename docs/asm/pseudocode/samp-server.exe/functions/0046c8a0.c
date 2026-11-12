/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046c8a0
 * Name: FUN_0046c8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046c8a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = param_4[3];
  local_10 = param_4[5];
  uVar1 = param_4[2];
  local_c = param_4[4];
  local_14 = param_4[6];
  local_18 = param_4[7];
  local_1c = param_4[8];
  local_20 = param_4[9];
  uVar2 = param_4[10];
  iVar5 = 0;
  local_24 = 0;
  do {
    piVar3 = *(int **)((int)this + iVar5 * 4);
    if (piVar3 != (int *)0x0) {
      iVar4 = FUN_00401710(piVar3,(byte *)"OnPlayerEditAttachedObject",&local_4);
      if (iVar4 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),uVar2);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_20);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_1c);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_18);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_14);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_10);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_c);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),local_8);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),uVar1);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_4[1]);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),*param_4);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_2);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_3);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar5 * 4),&local_24,local_4);
        if (local_24 != 0) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return local_24;
}


/* END FUNCTION 0x0046c8a0 */
