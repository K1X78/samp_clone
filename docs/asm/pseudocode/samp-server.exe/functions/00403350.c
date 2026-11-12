/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403350
 * Name: FUN_00403350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00403350(int param_1,uint *param_2,int param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  
  uVar3 = *param_2;
  uVar2 = 0;
  if (uVar3 < 0x1000000) {
    if (param_3 == 0) {
      while (uVar3 != 0) {
        if (param_4 <= uVar2) goto LAB_00403407;
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *(char *)(uVar2 + param_1) = (char)uVar3;
        uVar2 = uVar2 + 1;
        uVar3 = *param_2;
      }
    }
    else {
      while (uVar3 != 0) {
        if (param_4 <= uVar2) goto LAB_00403407;
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *(short *)(param_1 + uVar2 * 2) = (short)uVar3;
        uVar2 = uVar2 + 1;
        uVar3 = *param_2;
      }
    }
LAB_00403403:
    if (uVar2 < param_4) goto LAB_0040340a;
  }
  else {
    uVar3 = 0;
    bVar5 = 3;
    if (param_4 != 0) {
      do {
        if (bVar5 == 3) {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
        }
        cVar4 = (char)((int)uVar3 >> bVar5 * '\b');
        if (param_3 == 0) {
          *(char *)(uVar2 + param_1) = cVar4;
        }
        else {
          *(short *)(param_1 + uVar2 * 2) = (short)cVar4;
        }
        pcVar1 = (char *)(uVar2 + param_1);
        uVar2 = uVar2 + 1;
        if (*pcVar1 == '\0') goto LAB_00403403;
        bVar5 = bVar5 - 1 & 3;
      } while (uVar2 < param_4);
    }
  }
LAB_00403407:
  uVar2 = param_4 - 1;
LAB_0040340a:
  if (-1 < (int)uVar2) {
    *(undefined1 *)(uVar2 + param_1) = 0;
  }
  return 0;
}


/* END FUNCTION 0x00403350 */
