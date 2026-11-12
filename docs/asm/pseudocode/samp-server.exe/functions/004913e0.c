/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004913e0
 * Name: FUN_004913e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_004913e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1998;
  local_c = ExceptionList;
  if (0x7fffffd < *(uint *)((int)this + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00469e30(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_0046a000(local_34,local_50);
    local_34[0] = &PTR_FUN_004c5358;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_004c6a94);
  }
  ExceptionList = &local_c;
  piVar3 = FUN_004910c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
                        param_4,0);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (param_3 == *(undefined4 **)((int)this + 4)) {
    (*(undefined4 **)((int)this + 4))[1] = piVar3;
    **(undefined4 **)((int)this + 4) = piVar3;
    *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar3;
    if (param_3 == *(undefined4 **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  else {
    *param_3 = piVar3;
    if (param_3 == (undefined4 *)**(int **)((int)this + 4)) {
      **(int **)((int)this + 4) = (int)piVar3;
    }
  }
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x2c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xb] == '\0') {
LAB_004914db:
        *(undefined1 *)(*piVar4 + 0x2c) = 1;
        *(undefined1 *)(piVar5 + 0xb) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x2c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00490420(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
        FUN_00490480(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xb] == '\0') goto LAB_004914db;
      if (piVar6 == (int *)*piVar2) {
        FUN_00490480(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x2c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
      FUN_00490420(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}


/* END FUNCTION 0x004913e0 */
