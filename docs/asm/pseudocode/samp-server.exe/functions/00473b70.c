/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473b70
 * Name: FUN_00473b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __cdecl FUN_00473b70(int *param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  undefined4 *unaff_ESI;
  char *pcVar5;
  short asStack_1018 [4];
  char local_1010 [4100];
  undefined4 uStack_c;
  
  uStack_c = 0x473b80;
  pcVar5 = local_1010;
  for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = '\0';
  _sprintf(local_1010,"Server Ticks: %u\n",*(undefined4 *)(DAT_004fc438 + 0x4c));
  piVar2 = (int *)(**(code **)(**(int **)(DAT_004fc438 + 0x40) + 0x114))(DAT_004cfb80,DAT_004cfb84);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  psVar1 = asStack_1018;
  do {
    psVar4 = psVar1;
    psVar1 = (short *)((int)psVar4 + 1);
  } while ((char)*psVar4 != '\0');
  FUN_0044f110(piVar2,(char *)psVar4,1);
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&stack0xffffefe4);
  FUN_00403250(unaff_ESI,asStack_1018,0,0,*(uint *)(param_2 + 8));
  return 1;
}


/* END FUNCTION 0x00473b70 */
