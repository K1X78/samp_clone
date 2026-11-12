/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f670
 * Name: FUN_0042f670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f670(int *param_1,short *param_2,int *param_3)

{
  void *this;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_c;
  
  this = (void *)param_1[3];
  if (((((char)param_1[0x7a] == '\0') && ((char)param_1[4] == '\0')) && (this != (void *)0x0)) &&
     (*(char *)(*param_1 + 0x1e) == '\0')) {
    *(undefined1 *)(param_1 + 4) = 1;
    uVar1 = *(uint *)(*param_1 + 0xc);
    uVar5 = uVar1 >> 10 & 1;
    FUN_00419d70(*param_3);
    iVar9 = 0;
    if (0 < *param_3) {
      local_c = 0;
      do {
        pcVar2 = *(char **)(local_c + param_3[3]);
        if (pcVar2 != (char *)0x0) {
          pcVar6 = (char *)((undefined4 *)(local_c + param_3[3]))[1];
          if (pcVar6 == (char *)0x0) {
            if (((*pcVar2 == -0x68) || (*pcVar2 == -0x66)) && (param_2 != (short *)0x0)) {
              iVar8 = (int)*(short *)(pcVar2 + 0x1c);
              iVar3 = 0;
              if (0 < *param_2) {
                piVar7 = (int *)(param_2 + 0x10);
                do {
                  if (*piVar7 == *(int *)(pcVar2 + 0x18)) break;
                  iVar3 = iVar3 + 1;
                  piVar7 = piVar7 + 0xe;
                } while (iVar3 < *param_2);
              }
              if ((iVar8 < 0) &&
                 (iVar8 = *(int *)(*(int *)(param_2 + iVar3 * 0x1c + 10) + 8), iVar8 < 0)) {
                pcVar6 = "rowid";
              }
              else {
                pcVar6 = *(char **)(*(int *)(*(int *)(param_2 + iVar3 * 0x1c + 10) + 0x10) +
                                   iVar8 * 0x18);
              }
              if ((uVar1 >> 0xb & 1) == 0) {
                if (uVar5 == 0) goto LAB_0042f7bf;
              }
              else if (uVar5 == 0) goto LAB_0042f7d2;
              pvVar4 = (void *)FUN_00418920((undefined **)"%s.%s");
              FUN_0042e910(this,iVar9,0,pvVar4);
              goto LAB_0042f7df;
            }
LAB_0042f7bf:
            pcVar6 = FUN_00412a70();
          }
LAB_0042f7d2:
          FUN_0042e910(this,iVar9,0,pcVar6);
        }
LAB_0042f7df:
        iVar9 = iVar9 + 1;
        local_c = local_c + 0x14;
      } while (iVar9 < *param_3);
    }
    FUN_0042f610();
  }
  return;
}


/* END FUNCTION 0x0042f670 */
