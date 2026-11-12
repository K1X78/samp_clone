/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470990
 * Name: FUN_00470990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __cdecl FUN_00470990(int *param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  _union_1226 *p_Stack_28;
  uint uStack_24;
  _union_1226 local_14 [2];
  _union_1226 local_c;
  int local_8;
  
  puVar1 = param_2;
  if (((ushort)param_2[1] < 1000) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)(ushort)param_2[1] * 4) != 0)) {
    uStack_24 = param_2[1];
    p_Stack_28 = local_14;
    (**(code **)(**(int **)((int)DAT_004fc438 + 0x40) + 0xec))();
    local_c = local_14[0];
    FUN_00403100(param_1,puVar1[2],(int *)&param_2);
    FUN_004031d0(param_2,&local_8);
    if (0 < local_8) {
      if (&stack0x00000000 != (undefined1 *)0x28) {
        FUN_00403350((int)&p_Stack_28,param_2,0,local_8 + 1);
      }
    }
    if ((ushort)puVar1[1] < 1000) {
      iVar3 = (uint)(ushort)puVar1[1] * 0x19 + 0x26d24 + *(int *)((int)DAT_004fc438 + 8);
    }
    else {
      iVar3 = 0;
    }
    pcVar2 = inet_ntoa((in_addr)local_c.S_un_b);
    FUN_004940e0(DAT_004fc438,iVar3,pcVar2);
    FUN_00494040(DAT_004fc438,(uint)(ushort)puVar1[1]);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00470990 */
