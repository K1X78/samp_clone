/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482330
 * Name: FUN_00482330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00482330(int *param_1,uint *param_2)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  byte *_Source;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_410 [1028];
  int local_c;
  int local_8;
  
  if ((DAT_004fc410 <= param_2[1] - 1) ||
     (local_8 = *(int *)(DAT_004fc40c + (param_2[1] - 1) * 4), local_8 == 0)) {
    if (DAT_004fc464 != 0) {
      FUN_00491fa0("[Error] db_query: invalid database handle %u");
    }
    return 0;
  }
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  FUN_004031d0(param_2,&local_c);
  if (0 < local_c) {
    iVar2 = -(local_c + 4U & 0xfffffffc);
    _Source = &stack0xfffffbe4;
    if (&stack0x00000000 != (undefined1 *)0x41c) {
      *(int *)(local_410 + iVar2 + -0x10) = local_c + 1;
      pcVar3 = local_410 + iVar2 + -0x14;
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      *(uint **)(local_410 + iVar2 + -0x18) = param_2;
      *(undefined1 **)(local_410 + iVar2 + -0x1c) = &stack0xfffffbe4;
      pcVar4 = local_410 + iVar2 + -0x20;
      pcVar4[0] = -0x30;
      pcVar4[1] = '#';
      pcVar4[2] = 'H';
      pcVar4[3] = '\0';
      FUN_00403350(*(int *)(local_410 + iVar2 + -0x1c),*(uint **)(local_410 + iVar2 + -0x18),
                   *(int *)(local_410 + iVar2 + -0x14),*(uint *)(local_410 + iVar2 + -0x10));
      goto LAB_004823d7;
    }
  }
  _Source = (byte *)0x0;
LAB_004823d7:
  _Memory = _calloc(1,0x14);
  _Memory[4] = 0;
  if (DAT_004fc468 != 0) {
    pcVar5 = local_410;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    *pcVar5 = '\0';
    _strncpy(local_410,(char *)_Source,0x400);
    FUN_00491fa0("[db_log_queries]: %s");
  }
  uVar1 = FUN_00442160(local_8,_Source,_Memory + 2,_Memory,_Memory + 1,_Memory + 3);
  if (uVar1 == 0) {
    iVar2 = FUN_00482100(&DAT_004fc404,(int)_Memory);
    if (-1 < iVar2) {
      return iVar2 + 1;
    }
  }
  else {
    if (DAT_004fc464 != 0) {
      FUN_00491fa0("[Warning] db_query: Query failed: %s");
    }
    iVar2 = _Memory[2];
    if (iVar2 != 0) {
      FUN_00410150(iVar2);
    }
    if (_Memory[3] != 0) {
      FUN_004080d0(_Memory[3]);
    }
    _free(_Memory);
  }
  return 0;
}


/* END FUNCTION 0x00482330 */
