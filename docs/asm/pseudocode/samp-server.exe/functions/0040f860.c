/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f860
 * Name: FUN_0040f860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040f860(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char cVar8;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  if ((*(uint *)(*in_EAX + 0xc) & 0x4000000) != 0) {
    if (param_2 == 0) {
      iVar2 = FUN_0040f840();
      if ((iVar2 != 0) || (*(int *)(param_1 + 0x24) != 0)) {
        return 1;
      }
    }
    else {
      for (iVar2 = *(int *)(param_1 + 0x24); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        iVar5 = 0;
        if (0 < *(int *)(iVar2 + 0x14)) {
          piVar4 = (int *)(iVar2 + 0x24);
          do {
            if (-1 < *(int *)(param_2 + *piVar4 * 4)) {
              return 1;
            }
            if ((*piVar4 == *(int *)(param_1 + 8)) && (param_3 != 0)) {
              return 1;
            }
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 2;
          } while (iVar5 < *(int *)(iVar2 + 0x14));
        }
      }
      local_c = FUN_0040f840();
      if (local_c != 0) {
        do {
          iVar2 = *(int *)(local_c + 0x14);
          local_8 = 0;
          if (0 < iVar2) {
            iVar5 = *(int *)(param_1 + 0xc);
            local_10 = (undefined4 *)(local_c + 0x28);
            do {
              pbVar1 = (byte *)*local_10;
              iVar6 = 0;
              if (0 < iVar5) {
                puVar7 = *(undefined4 **)(param_1 + 0x10);
                do {
                  if (pbVar1 == (byte *)0x0) {
                    cVar8 = *(char *)((int)puVar7 + 0x15);
                  }
                  else {
                    iVar3 = FUN_00408450((byte *)*puVar7,pbVar1);
                    cVar8 = iVar3 == 0;
                  }
                  if (cVar8 != '\0') {
                    if (-1 < *(int *)(param_2 + iVar6 * 4)) {
                      return 1;
                    }
                    if ((iVar6 == *(int *)(param_1 + 8)) && (param_3 != 0)) {
                      return 1;
                    }
                  }
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 6;
                } while (iVar6 < iVar5);
              }
              local_8 = local_8 + 1;
              local_10 = local_10 + 2;
            } while (local_8 < iVar2);
          }
          local_c = *(int *)(local_c + 0xc);
          if (local_c == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x0040f860 */
