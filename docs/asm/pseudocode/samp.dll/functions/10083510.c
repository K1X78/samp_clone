/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083510
 * Name: FUN_10083510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10083510(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *_Memory;
  uint local_24;
  int local_20;
  undefined4 *puStack_1c;
  undefined4 local_18 [6];
  
  iVar3 = param_3;
  local_18[0] = 0x15;
  local_18[1] = 0x16;
  local_18[2] = 0x23;
  local_18[3] = 0x17;
  local_18[4] = 0x19;
  local_18[5] = 0x18;
  local_20 = 0;
  if (0 < param_4[1]) {
    do {
      uVar1 = *(undefined4 *)(*param_4 + local_20 * 4);
      local_24 = 0;
      do {
        uVar2 = local_18[local_24];
        param_3 = 0;
        do {
          if ((((param_3 != 0) || (param_2[0x155] != 0)) &&
              (iVar5 = (**(code **)(*(int *)*param_1 + 0x24))
                                 ((int *)*param_1,*param_2,*(undefined4 *)(iVar3 + 4),uVar1,uVar2,
                                  param_3), -1 < iVar5)) &&
             (((*(char *)(param_1 + 3) == '\0' ||
               (iVar5 = (**(code **)(*(int *)*param_1 + 0x28))
                                  ((int *)*param_1,*param_2,*(undefined4 *)(iVar3 + 4),uVar1,0x80000
                                   ,3,uVar2), -1 < iVar5)) &&
              (((code *)param_1[1] == (code *)0x0 ||
               (cVar4 = (*(code *)param_1[1])
                                  (iVar3 + 8,uVar1,uVar2,
                                   CONCAT31((int3)((uint)param_3 >> 8),param_3 != 0),param_1[2]),
               cVar4 != '\0')))))) {
            puVar6 = operator_new(0x58);
            _Memory = (undefined4 *)0x0;
            if (puVar6 != (undefined4 *)0x0) {
              puVar6[5] = 0;
              puVar6[6] = 0;
              puVar6[7] = 0;
              puVar6[8] = 0;
              puVar6[9] = 0;
              puVar6[10] = 0;
              puVar6[0xb] = 0;
              puVar6[0xc] = 0;
              puVar6[0xd] = 0;
              puVar6[0xe] = 0;
              puVar6[0xf] = 0;
              puVar6[0x10] = 0;
              puVar6[0x11] = 0;
              puVar6[0x12] = 0;
              puVar6[0x13] = 0;
              _Memory = puVar6;
            }
            if (_Memory == (undefined4 *)0x0) {
              return 0x8007000e;
            }
            *_Memory = *param_2;
            _Memory[1] = *(undefined4 *)(iVar3 + 4);
            _Memory[2] = uVar1;
            _Memory[3] = uVar2;
            _Memory[4] = (uint)(param_3 != 0);
            puStack_1c = _Memory;
            FUN_10082d20(_Memory);
            FUN_10082da0(_Memory);
            if (_Memory[9] == 0) {
              thunk_FUN_10082960(0);
              thunk_FUN_10082600(0);
              thunk_FUN_100828d0(0);
              thunk_FUN_10082570(0);
              thunk_FUN_100824e0(0);
              _free(_Memory);
            }
            else {
              FUN_10082e20(_Memory);
              FUN_10082ec0(iVar3,_Memory);
              _Memory[0x14] = param_2;
              _Memory[0x15] = iVar3;
              FUN_10082c60(&puStack_1c);
            }
          }
          param_3 = param_3 + 1;
        } while (param_3 < 2);
        local_24 = local_24 + 1;
      } while (local_24 < 6);
      local_20 = local_20 + 1;
    } while (local_20 < param_4[1]);
  }
  return 0;
}


/* END FUNCTION 0x10083510 */
