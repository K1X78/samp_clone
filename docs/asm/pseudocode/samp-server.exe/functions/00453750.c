/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453750
 * Name: FUN_00453750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00453750(void *this,char *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int *this_00;
  undefined4 *puVar2;
  uint uVar3;
  uint in_EAX;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar4 = param_1;
    do {
      cVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar7 != '\0');
    in_EAX = (int)pcVar4 - (int)(param_1 + 1);
    if (in_EAX < 0x10) {
      uVar8 = 0;
      if (*(int *)((int)this + 0x3b0) == 0) {
        return 0;
      }
      uVar9 = FUN_0044e910();
      p_Var1 = (LPCRITICAL_SECTION)((int)this + 0x394);
      FUN_004629a0(p_Var1);
      if (*(int *)((int)this + 0x3b0) != 0) {
        this_00 = (int *)((int)this + 0x3ac);
        do {
          puVar2 = *(undefined4 **)(*this_00 + uVar8 * 4);
          uVar3 = puVar2[1];
          if ((uVar3 == 0) || ((uint)uVar9 <= uVar3)) {
            pcVar4 = (char *)*puVar2;
            cVar7 = *param_1;
            iVar5 = 0;
            if (*pcVar4 == cVar7) {
              do {
                if (cVar7 == '\0') goto LAB_00453874;
                cVar7 = param_1[iVar5 + 1];
                iVar5 = iVar5 + 1;
              } while (pcVar4[iVar5] == cVar7);
            }
            if (((pcVar4[iVar5] != '\0') && (param_1[iVar5] != '\0')) && (pcVar4[iVar5] == '*')) {
LAB_00453874:
              uVar6 = FUN_004629b0(p_Var1);
              return CONCAT31((int3)((uint)uVar6 >> 8),1);
            }
            uVar8 = uVar8 + 1;
          }
          else {
            iVar5 = *this_00;
            puVar2 = *(undefined4 **)(iVar5 + uVar8 * 4);
            *(undefined4 *)(iVar5 + uVar8 * 4) =
                 *(undefined4 *)(iVar5 + -4 + *(int *)((int)this + 0x3b0) * 4);
            FUN_0045c920(this_00,*(int *)((int)this + 0x3b0) - 1);
            _free((void *)*puVar2);
            _free(puVar2);
          }
        } while (uVar8 < *(uint *)((int)this + 0x3b0));
      }
      uVar8 = FUN_004629b0(p_Var1);
      return uVar8 & 0xffffff00;
    }
  }
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x00453750 */
