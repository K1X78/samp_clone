/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fb30
 * Name: FUN_0041fb30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041fb30(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_ESI;
  undefined1 *puVar5;
  
  if (*param_3 == 0) {
    iVar1 = *(int *)(unaff_ESI + 0x40);
    uVar4 = (uint)*(byte *)(unaff_ESI + 5);
    puVar5 = (undefined1 *)((uint)*(ushort *)(unaff_ESI + 0xc) + iVar1 + param_1 * 2);
    uVar3 = (uint)CONCAT11(*puVar5,puVar5[1]);
    if ((uVar3 < CONCAT11(*(undefined1 *)(iVar1 + 5 + uVar4),*(undefined1 *)(iVar1 + 6 + uVar4))) ||
       ((int)(uint)*(ushort *)(*(int *)(unaff_ESI + 0x3c) + 0x18) < (int)(param_2 + uVar3))) {
      iVar2 = FUN_0041d790();
    }
    else {
      iVar2 = FUN_0041f530(param_2 + uVar3,uVar3,unaff_ESI,param_2);
      if (iVar2 == 0) {
        iVar2 = param_1 + 1;
        if (iVar2 < (int)(uint)*(ushort *)(unaff_ESI + 0x10)) {
          do {
            *puVar5 = puVar5[2];
            puVar5[1] = puVar5[3];
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 2;
          } while (iVar2 < (int)(uint)*(ushort *)(unaff_ESI + 0x10));
        }
        *(short *)(unaff_ESI + 0x10) = *(short *)(unaff_ESI + 0x10) + -1;
        *(char *)(iVar1 + 3 + uVar4) = (char)((ushort)*(undefined2 *)(unaff_ESI + 0x10) >> 8);
        *(undefined1 *)(iVar1 + 4 + uVar4) = *(undefined1 *)(unaff_ESI + 0x10);
        *(short *)(unaff_ESI + 0xe) = *(short *)(unaff_ESI + 0xe) + 2;
        return;
      }
    }
    *param_3 = iVar2;
  }
  return;
}


/* END FUNCTION 0x0041fb30 */
