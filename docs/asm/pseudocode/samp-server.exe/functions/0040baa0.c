/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040baa0
 * Name: FUN_0040baa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040baa0(int *param_1,int param_2,int param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *in_EAX;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = (uint *)((int)in_EAX + param_2);
  if (param_1 == (int *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = *param_1;
    iVar7 = param_1[1];
  }
  if (param_3 != 0) {
    do {
      puVar5 = in_EAX + 1;
      iVar6 = iVar6 + *in_EAX + iVar7;
      in_EAX = in_EAX + 2;
      iVar7 = iVar7 + *puVar5 + iVar6;
    } while (in_EAX < puVar2);
    param_4[1] = iVar7;
    *param_4 = iVar6;
    return;
  }
  puVar5 = in_EAX + 1;
  do {
    uVar3 = puVar5[-1];
    uVar4 = *puVar5;
    iVar6 = iVar6 + (uint)*(byte *)((int)puVar5 + -1) +
                    (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + iVar7 +
                    (uVar3 >> 0x10 & 0xff) * 0x100;
    puVar1 = puVar5 + 1;
    iVar7 = iVar7 + (uint)*(byte *)((int)puVar5 + 3) +
                    (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + iVar6 +
                    (uVar4 >> 0x10 & 0xff) * 0x100;
    puVar5 = puVar5 + 2;
  } while (puVar1 < puVar2);
  param_4[1] = iVar7;
  *param_4 = iVar6;
  return;
}


/* END FUNCTION 0x0040baa0 */
