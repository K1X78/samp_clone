/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b460
 * Name: FUN_0041b460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __fastcall FUN_0041b460(void *param_1)

{
  void *pvVar1;
  int *in_EAX;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_4;
  
  local_4 = param_1;
  if (in_EAX == (int *)0x0) {
    in_EAX = FUN_00417b70();
    if (in_EAX == (int *)0x0) {
      return (int *)0x0;
    }
    in_EAX[2] = 0;
  }
  puVar2 = FUN_00416620(param_1,8,5,in_EAX + 1,in_EAX + 2,(int *)&local_4);
  pvVar1 = local_4;
  *in_EAX = (int)puVar2;
  if ((int)local_4 < 0) {
    FUN_0040f150();
    return (int *)0x0;
  }
  uVar3 = FUN_00416430();
  *(undefined4 *)(*in_EAX + (int)pvVar1 * 8) = uVar3;
  return in_EAX;
}


/* END FUNCTION 0x0041b460 */
