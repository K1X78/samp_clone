/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5970
 * Name: FUN_100d5970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100d5970(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int in_EAX;
  int iVar2;
  
  if ((*(int *)(in_EAX + 0x4acc) != 0) || (*(int **)(in_EAX + 8) == (int *)0x0)) {
    return 0;
  }
  if ((2 < *(int *)(in_EAX + 0x24)) && (*(int *)(in_EAX + 0x24) < 0x11)) {
    **(int **)(in_EAX + 8) = in_EAX;
  }
  switch(*(undefined4 *)(in_EAX + 0x24)) {
  case 3:
    iVar2 = FUN_100ce400(*(undefined4 *)(in_EAX + 8),param_1,param_2);
    return iVar2;
  case 4:
    iVar2 = FUN_100d58b0();
    return iVar2;
  case 5:
    iVar2 = *(int *)(in_EAX + 8);
    if (param_2 != 0) {
      *param_1 = *(undefined4 *)(iVar2 + 0x198);
      return (-(uint)(*(int *)(iVar2 + 0x628) != 0) & 0xffff0001) + 0x10000;
    }
    break;
  case 6:
  case 7:
    iVar2 = FUN_100d0f60(*(undefined4 *)(in_EAX + 8),param_1,param_2);
    return iVar2;
  case 9:
  case 10:
    iVar2 = FUN_100d0f80(*(undefined4 *)(in_EAX + 8),param_1,param_2);
    return iVar2;
  case 0xb:
    iVar2 = *(int *)(in_EAX + 8);
    if ((iVar2 != 0) && (pcVar1 = *(code **)(*(int *)(iVar2 + 800) + 0x28), pcVar1 != (code *)0x0))
    {
      iVar2 = (*pcVar1)(iVar2,param_1,param_2);
      return iVar2;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    iVar2 = FUN_100ed900(*(undefined4 *)(in_EAX + 8),param_1,param_2);
    return iVar2;
  }
  return 0;
}


/* END FUNCTION 0x100d5970 */
