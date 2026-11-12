/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091df0
 * Name: FUN_10091df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10091df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int unaff_retaddr;
  int *piVar11;
  int *piStack_238;
  uint uStack_234;
  undefined4 *puStack_230;
  undefined4 *puStack_22c;
  undefined1 auStack_228 [20];
  int iStack_214;
  char acStack_20c [260];
  char acStack_108 [259];
  char cStack_5;
  
  if ((param_5 == (int *)0x0) || (*(int *)(param_1 + 0x20c) == 0)) {
    return 0;
  }
  iVar2 = (**(code **)(*param_5 + 0xc))();
  pvVar3 = operator_new(*(int *)(param_1 + 0x20c) * 0x44);
  *(void **)(param_1 + 0x210) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    pvVar3 = operator_new(*(int *)(param_1 + 0x20c) << 2);
    *(void **)(param_1 + 0x214) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      uStack_234 = 0;
      if (*(int *)(param_1 + 0x20c) == 0) {
        return 0;
      }
      piVar11 = (int *)0x0;
      puVar7 = (undefined4 *)(iVar2 + 0x44);
      do {
        puVar8 = puVar7 + -0x11;
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0x210) + (int)piVar11);
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        iVar2 = uStack_234 * 4;
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x214)) = 0;
        pcVar4 = (char *)*puVar7;
        if (pcVar4 != (char *)0x0) {
          iVar6 = -(int)pcVar4;
          do {
            cVar1 = *pcVar4;
            pcVar4[(int)(acStack_108 + iVar6)] = cVar1;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = acStack_20c;
          cStack_5 = cVar1;
          iVar9 = 0x104;
          iVar6 = unaff_retaddr - (int)pcVar4;
          do {
            if (pcVar4[iVar6] == '\0') {
              if (iVar9 != 0) goto LAB_10091ef9;
              break;
            }
            *pcVar4 = pcVar4[iVar6];
            pcVar4 = pcVar4 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          pcVar4 = pcVar4 + -1;
LAB_10091ef9:
          *pcVar4 = '\0';
          iVar6 = 0x104;
          pcVar4 = acStack_20c;
          do {
            if (*pcVar4 == '\0') {
              if (iVar6 != 0) {
                FUN_10077b90(acStack_108 + -iVar6,0x104 - (-iVar6 + 0x104),acStack_108);
              }
              break;
            }
            pcVar4 = pcVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar6 = D3DXGetImageInfoFromFileA(acStack_20c,auStack_228);
          if (iVar6 < 0) {
            iVar6 = FUN_100972b0(acStack_20c,0x104,acStack_108);
            if (iVar6 < 0) goto LAB_10092046;
            D3DXGetImageInfoFromFileA(acStack_20c,auStack_228);
          }
          if (iStack_214 == 3) {
            iVar6 = D3DXCreateTextureFromFileA(param_2,acStack_20c,&piStack_238);
            if (-1 < iVar6) {
              (**(code **)*piStack_238)(piStack_238,&DAT_101200cc,*(int *)(param_1 + 0x214) + iVar2)
              ;
              piVar5 = param_5;
LAB_10092040:
              (**(code **)(*piVar5 + 8))(piVar5);
            }
          }
          else if (iStack_214 == 4) {
            iVar6 = D3DXCreateVolumeTextureFromFileA(param_2,acStack_20c,&puStack_22c);
            if (-1 < iVar6) {
              (**(code **)*puStack_22c)(puStack_22c,&DAT_101200cc,*(int *)(param_1 + 0x214) + iVar2)
              ;
              (**(code **)(*piStack_238 + 8))(piStack_238);
            }
          }
          else if ((iStack_214 == 5) &&
                  (iVar6 = D3DXCreateCubeTextureFromFileA(param_2,acStack_20c,&puStack_230),
                  -1 < iVar6)) {
            (**(code **)*puStack_230)(puStack_230,&DAT_101200cc,*(int *)(param_1 + 0x214) + iVar2);
            piVar5 = piVar11;
            goto LAB_10092040;
          }
        }
LAB_10092046:
        uStack_234 = uStack_234 + 1;
        piVar11 = piVar11 + 0x11;
        puVar7 = puVar7 + 0x12;
        if (*(uint *)(param_1 + 0x20c) <= uStack_234) {
          return 0;
        }
      } while( true );
    }
  }
  return 0x8007000e;
}


/* END FUNCTION 0x10091df0 */
