/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493d40
 * Name: FUN_00493d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493d40(void *this,undefined4 param_1,ushort param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  uint uVar6;
  float10 fVar7;
  undefined1 local_c [6];
  undefined1 auStack_6 [6];
  
  uVar5 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 8) + 0x30d50), -1 < iVar1)) {
    uVar6 = 0;
    do {
      if ((((uVar5 < 1000) &&
           (iVar2 = *(int *)((int)this + 8), *(int *)(iVar2 + 0x24de4 + uVar6 * 4) != 0)) &&
          (uVar5 != param_2)) &&
         ((param_2 < 1000 &&
          (*(char *)(param_2 + 0x155 + *(int *)(iVar2 + 0x25d84 + uVar6 * 4)) != '\0')))) {
        if (param_3 == '\0') {
          puVar3 = auStack_6;
        }
        else {
          fVar7 = FUN_00465d60(iVar2,param_2,uVar5);
          iVar2 = FUN_00493cf0((float)fVar7);
          if (iVar2 != 0) goto LAB_00493e24;
          puVar3 = local_c;
        }
        puVar4 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x40) + 0xe8))(puVar3,uVar6);
        (**(code **)(**(int **)((int)this + 0x40) + 0x1c))
                  (param_1,1,7,1,*puVar4,*(undefined2 *)(puVar4 + 1),0);
      }
LAB_00493e24:
      uVar5 = uVar5 + 1;
      uVar6 = (uint)uVar5;
    } while ((int)uVar6 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00493d40 */
