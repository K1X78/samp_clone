/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042cec0
 * Name: FUN_0042cec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042cec0(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  byte *extraout_ECX;
  undefined4 *puVar7;
  char *local_18;
  uint local_14;
  undefined1 local_10 [16];
  
  iVar6 = *in_EAX;
  puVar1 = (undefined4 *)in_EAX[0x81];
  in_EAX[0x81] = 0;
  if ((in_EAX[0x10] == 0) && (puVar1 != (undefined4 *)0x0)) {
    pcVar2 = (char *)*puVar1;
    iVar3 = FUN_0040fc30(iVar6);
    puVar1[7] = param_1;
    for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x20)) {
      *(undefined4 **)(param_1 + 4) = puVar1;
    }
    local_18 = (char *)*puVar1;
    local_14 = FUN_00408380(local_18);
    iVar4 = FUN_0040ecb0(local_10,"trigger",&local_18);
    param_1 = 0;
    if ((iVar4 == 0) || (iVar4 = FUN_0041a980(), iVar4 == 0)) {
      if (*(char *)(iVar6 + 0x7c) == '\0') {
        iVar4 = FUN_0041c720();
        if (iVar4 == 0) goto LAB_0042d09a;
        FUN_0042cdb0((byte)iVar3,0);
        FUN_00412ab0();
        FUN_0041abf0((undefined **)
                     "INSERT INTO %Q.%s VALUES(\'trigger\',%Q,%Q,0,\'CREATE TRIGGER %q\')");
        FUN_00408130(iVar6);
        FUN_004164c0(iVar3);
        iVar4 = -1;
        pcVar5 = (char *)FUN_00418920((undefined **)"type=\'trigger\' AND name=\'%q\'");
        FUN_004197c0(0,iVar3,99,pcVar5,iVar4);
      }
      if (*(char *)(iVar6 + 0x7c) != '\0') {
        iVar3 = *(int *)(iVar3 * 0x10 + 0xc + *(int *)(iVar6 + 8));
        puVar7 = puVar1;
        FUN_00408380(pcVar2);
        iVar3 = FUN_00412f40((void *)(iVar3 + 0x24),extraout_ECX,(int)puVar7);
        if (iVar3 == 0) {
          if (puVar1[5] == puVar1[6]) {
            FUN_00408380((char *)puVar1[1]);
            iVar6 = FUN_00409170();
            puVar1[8] = *(undefined4 *)(iVar6 + 0x40);
            *(undefined4 **)(iVar6 + 0x40) = puVar1;
          }
        }
        else {
          *(undefined1 *)(iVar6 + 0x1e) = 1;
        }
      }
    }
  }
LAB_0042d09a:
  FUN_00416c30();
  FUN_00416bd0(param_1);
  return;
}


/* END FUNCTION 0x0042cec0 */
