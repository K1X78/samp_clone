/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d270
 * Name: FUN_0044d270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0044d270(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int *in_EAX;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  int unaff_EBX;
  int local_c;
  undefined4 local_8;
  int iVar3;
  
  if (*in_EAX < 0) {
    *in_EAX = 0;
    in_EAX[1] = -1;
    *(undefined2 *)(in_EAX + 3) = 0;
    *(undefined1 *)((int)in_EAX + 0xe) = 0;
  }
  local_c = param_1;
  local_8 = param_2;
  in_EAX[2] = param_3;
  do {
    bVar1 = (byte)unaff_EBX;
    uVar2 = FUN_004108f0(bVar1);
    iVar3 = CONCAT22(extraout_var,uVar2);
    if (iVar3 < 0x276) {
      FUN_0041d730(extraout_ECX,&local_c,uVar2,bVar1);
      in_EAX[1] = in_EAX[1] + -1;
      return;
    }
    if (0x3be < iVar3) {
      FUN_0041d770();
      FUN_004177f0(&local_c,bVar1);
      return;
    }
    FUN_0044b600(in_EAX,iVar3 + -0x276);
    if (unaff_EBX == 0xfd) {
      return;
    }
  } while (-1 < *in_EAX);
  return;
}


/* END FUNCTION 0x0044d270 */
