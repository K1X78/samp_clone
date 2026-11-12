/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bde0
 * Name: FUN_0040bde0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_0040bde0(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  local_4 = param_1[1];
  uVar1 = *param_1;
  uVar4 = 0xffffffff;
  if (-1 < (int)(local_4 - 1)) {
    puVar2 = param_1 + (local_4 - 1) * 5 + 5;
    do {
      if ((int)puVar2[-3] < (int)*puVar2) {
        do {
          uVar3 = *(uint *)(puVar2[-1] + (uint)*(ushort *)(puVar2[-2] + puVar2[-3] * 2) * 4);
          if (uVar1 < uVar3) {
            if (uVar3 < uVar4) {
              *param_3 = (uint)*(ushort *)(puVar2[-2] + puVar2[-3] * 2) + puVar2[1];
              uVar4 = uVar3;
            }
            break;
          }
          uVar3 = puVar2[-3] + 1;
          puVar2[-3] = uVar3;
        } while ((int)uVar3 < (int)*puVar2);
      }
      puVar2 = puVar2 + -5;
      local_4 = local_4 - 1;
    } while (local_4 != 0);
  }
  *param_1 = uVar4;
  *param_2 = uVar4;
  return uVar4 == 0xffffffff;
}


/* END FUNCTION 0x0040bde0 */
