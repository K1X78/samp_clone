/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044a640
 * Name: FUN_0044a640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0044a640(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char *in_EAX;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  short *psVar7;
  int *piVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  int *unaff_EDI;
  
  iVar2 = *unaff_EDI;
  for (; in_EAX != (char *)0x0; in_EAX = *(char **)(in_EAX + 0x20)) {
    if (param_1 == 99) {
      bVar3 = in_EAX[1];
    }
    else {
      bVar3 = (byte)param_1;
    }
    *(byte *)((int)unaff_EDI + 0x1b9) = bVar3;
    cVar1 = *in_EAX;
    if (cVar1 == 'i') {
      uVar6 = (uint)bVar3;
      piVar4 = FUN_00415a40(iVar2,*(int **)(in_EAX + 0x1c));
      piVar8 = FUN_0041a470(iVar2,*(undefined4 **)(in_EAX + 8),0);
      piVar9 = FUN_00415950(iVar2,*(int **)(in_EAX + 0x18),0);
      psVar7 = FUN_0041cd00();
      FUN_00446aa0(unaff_EDI,psVar7,piVar9,piVar8,piVar4,uVar6);
    }
    else if (cVar1 == 'j') {
      pbVar5 = (byte *)FUN_00420310(iVar2,*(undefined4 **)(in_EAX + 0x14),0);
      psVar7 = FUN_0041cd00();
      FUN_0044ad40(unaff_EDI,psVar7,pbVar5);
    }
    else if (cVar1 == 'k') {
      uVar6 = (uint)bVar3;
      pbVar5 = (byte *)FUN_00420310(iVar2,*(undefined4 **)(in_EAX + 0x14),0);
      piVar4 = FUN_00415950(iVar2,*(int **)(in_EAX + 0x18),0);
      psVar7 = FUN_0041cd00();
      FUN_004494f0(unaff_EDI,psVar7,piVar4,pbVar5,uVar6);
    }
    else {
      piVar4 = FUN_0041a470(iVar2,*(undefined4 **)(in_EAX + 8),0);
      pbVar5 = (byte *)FUN_0040fcc0(extraout_ECX,0,4);
      FUN_00443d60(unaff_EDI,piVar4,pbVar5);
      FUN_0040fce0(iVar2,(int)piVar4);
    }
    if (*in_EAX != 't') {
      FUN_00414e30();
    }
  }
  return 0;
}


/* END FUNCTION 0x0044a640 */
