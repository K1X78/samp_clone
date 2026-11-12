/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040acd0
 * Name: FUN_0040acd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040acd0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  uint *puVar3;
  uint local_10 [2];
  undefined4 local_8;
  
  puVar3 = local_10;
  do {
    if (in_EAX == (uint *)0x0) {
LAB_0040ad04:
      puVar3[2] = (uint)param_1;
      return local_8;
    }
    if (param_1 == (uint *)0x0) {
      if (in_EAX != (uint *)0x0) {
        puVar3[2] = (uint)in_EAX;
        return local_8;
      }
      goto LAB_0040ad04;
    }
    uVar1 = in_EAX[1];
    uVar2 = param_1[1];
    if (((int)uVar2 < (int)uVar1) || (((int)uVar2 <= (int)uVar1 && (*param_1 <= *in_EAX)))) {
      if (((int)uVar1 < (int)uVar2) || (((int)uVar1 <= (int)uVar2 && (*in_EAX <= *param_1))))
      goto LAB_0040acfd;
      puVar3[2] = (uint)param_1;
      param_1 = (uint *)param_1[2];
      puVar3 = (uint *)puVar3[2];
    }
    else {
      puVar3[2] = (uint)in_EAX;
      puVar3 = in_EAX;
LAB_0040acfd:
      in_EAX = (uint *)in_EAX[2];
    }
  } while( true );
}


/* END FUNCTION 0x0040acd0 */
