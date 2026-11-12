/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5660
 * Name: FUN_100d5660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d5660(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iStack_4;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x4b0c) == 0) {
    FUN_100d0c00(iVar2,piVar1);
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar2 + 0x124));
    *(undefined4 *)(iVar2 + 0x124) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar2 + 0x120));
    *(undefined4 *)(iVar2 + 0x120) = 0;
    if (((in_EAX == 0x17) || (in_EAX == 0x1a)) || (in_EAX == 0x2a)) {
      param_2 = 1;
    }
    if (*(code **)(piVar1[200] + 0xc) != (code *)0x0) {
      in_EAX = (**(code **)(piVar1[200] + 0xc))(piVar1);
    }
    iStack_4 = in_EAX;
    if (((in_EAX != 0x2a) && (iVar3 = FUN_100e3b00(piVar1), in_EAX == 0)) && (iVar3 != 0)) {
      iStack_4 = 0x2a;
    }
    if (((piVar1[0xed] + piVar1[0xe9] == 0) || (*(int *)(iVar2 + 0x550) != 0)) ||
       (piVar1[0xa1] != 0)) {
      *(undefined4 *)(iVar2 + 0x4b0c) = 1;
      FUN_100ce580(piVar1);
      uVar5 = 0;
      if (piVar1[0x14] != 0) {
        FUN_100d03f0(iVar2,piVar1[0x14]);
        piVar1[0x14] = 0;
      }
      if (*(int *)(iVar2 + 0x487c) != 0) {
        puVar4 = (undefined4 *)(iVar2 + 0x4880);
        do {
          (*(code *)PTR__free_101554bc)(*puVar4);
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 3;
        } while (uVar5 < *(uint *)(iVar2 + 0x487c));
      }
      *(undefined4 *)(iVar2 + 0x487c) = 0;
      if ((((*(int *)(iVar2 + 0x550) == 0) || (piVar1[0xf3] == 2)) || (piVar1[0x102] == 2)) &&
         ((piVar1[0xa1] == 0 && (param_2 == 0)))) {
        iVar3 = FUN_100d5600();
        if (iVar3 == 0) {
          *(undefined4 *)(iVar2 + 0x848) = 0;
        }
        else {
          *(int **)(iVar2 + 0x848) = piVar1;
          if (piVar1[0xa7] == 0) {
            if (piVar1[0xa6] == 0) {
              if (piVar1[0xa3] == 0) {
                iVar3 = piVar1[0x29];
              }
              else {
                iVar3 = piVar1[0x2e];
              }
            }
            else {
              iVar3 = piVar1[0x3a];
            }
          }
          else {
            iVar3 = piVar1[0x32];
          }
          FUN_100d8ae0(iVar2,"Connection #%ld to host %s left intact\n",piVar1[0x13],iVar3);
        }
      }
      else {
        iVar3 = FUN_100d2d00(piVar1,param_2);
        if ((iStack_4 == 0) && (iVar3 != 0)) {
          iStack_4 = iVar3;
        }
      }
      *param_1 = 0;
      FUN_100d15a0(iVar2);
      return iStack_4;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return 0;
}


/* END FUNCTION 0x100d5660 */
