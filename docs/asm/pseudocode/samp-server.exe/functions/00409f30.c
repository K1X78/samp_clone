/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409f30
 * Name: FUN_00409f30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00409f30(int param_1,uint *param_2)

{
  uint uVar1;
  uint *in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (in_EAX != (uint *)0x0) {
    uVar5 = param_1 - 1;
    uVar2 = in_EAX[2];
    while (uVar2 != 0) {
      uVar2 = uVar5 / in_EAX[2];
      uVar5 = uVar5 % in_EAX[2];
      in_EAX = (uint *)in_EAX[uVar2 + 3];
      if (in_EAX == (uint *)0x0) {
        return;
      }
      uVar2 = in_EAX[2];
    }
    if (*in_EAX < 0xfa1) {
      *(byte *)((uVar5 >> 3) + 0xc + (int)in_EAX) =
           *(byte *)((uVar5 >> 3) + 0xc + (int)in_EAX) & ~('\x01' << ((byte)uVar5 & 7));
      return;
    }
    puVar6 = in_EAX + 3;
    puVar7 = param_2;
    for (iVar3 = 0x7d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6 = in_EAX + 3;
    for (iVar3 = 0x7d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    in_EAX[1] = 0;
    uVar2 = 0;
    do {
      uVar1 = param_2[uVar2];
      if ((uVar1 != 0) && (uVar1 != uVar5 + 1)) {
        uVar4 = (uVar1 - 1) % 0x7d;
        in_EAX[1] = in_EAX[1] + 1;
        uVar1 = in_EAX[uVar4 + 3];
        while (uVar1 != 0) {
          uVar4 = uVar4 + 1;
          if (0x7c < uVar4) {
            uVar4 = 0;
          }
          uVar1 = in_EAX[uVar4 + 3];
        }
        in_EAX[uVar4 + 3] = param_2[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x7d);
  }
  return;
}


/* END FUNCTION 0x00409f30 */
