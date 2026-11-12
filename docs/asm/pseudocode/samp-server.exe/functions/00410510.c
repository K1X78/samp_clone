/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410510
 * Name: FUN_00410510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00410510(void *this,char *param_1)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0040edd0((int)this,param_1,*(byte **)(*(int *)((int)this + 8) + in_EAX * 0x10));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
    piVar2 = FUN_00410400((int)this);
    iVar3 = (**(code **)(*(int *)piVar2[1] + 0x14))(piVar2[2]);
    if (iVar3 == 0) {
      piVar2[2] = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      FUN_004103d0();
    }
  }
  return iVar3;
}


/* END FUNCTION 0x00410510 */
