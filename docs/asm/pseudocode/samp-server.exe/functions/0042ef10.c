/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ef10
 * Name: FUN_0042ef10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_0042ef10(byte param_1,void *param_2)

{
  int *in_EAX;
  int iVar1;
  
  if (in_EAX == (int *)0x0) {
    in_EAX = FUN_0041b6e0((int)param_2,0,param_1);
    if (in_EAX != (int *)0x0) goto LAB_0042ef34;
  }
  else {
LAB_0042ef34:
    if (in_EAX[3] != 0) goto LAB_0042ef59;
  }
  FUN_0042ee70(param_2,(uint)param_1);
  in_EAX = FUN_0041b6e0((int)param_2,0,param_1);
LAB_0042ef59:
  if ((in_EAX != (int *)0x0) && (in_EAX[3] == 0)) {
    iVar1 = FUN_00420f20(in_EAX);
    if (iVar1 != 0) {
      return (int *)0x0;
    }
  }
  return in_EAX;
}


/* END FUNCTION 0x0042ef10 */
