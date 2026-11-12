/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d100
 * Name: FUN_1009d100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1009d100(float *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float10 fVar3;
  float local_28;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  float local_10;
  
  if ((DAT_1018dc1c != (FILE *)0x0) ||
     (DAT_1018dc1c = (FILE *)FUN_100f9cc9("c:\\0\\lc2sa_LoadObjectInstance_1_noipllods_Zonly_Q2E.txt"
                                          ,&DAT_1011bbd4), DAT_1018dc1c != (FILE *)0x0)) {
    FUN_1009d040((double)param_1[3],(double)param_1[4],(double)param_1[5],(double)param_1[6],
                 local_18,local_20,&local_28);
    local_10 = (float)((float10)(double)CONCAT44(uStack_24,local_28) * (float10)-1.0);
    uVar1 = FUN_100a7630(param_1[7]);
    fVar3 = (float10)FUN_100b4160(uVar1);
    local_28 = (float)fVar3;
    uVar2 = FUN_100b6000(param_1[7]);
    _fprintf(DAT_1018dc1c,"%d,%.7f,%.7f,%.7f,%.5f,%.5f,%.5f,%.2f,%u,%X\n",param_1[7],
             (double)*param_1,(double)param_1[1],SUB84((double)param_1[2],0),
             (int)((ulonglong)(double)param_1[2] >> 0x20),0,0,0,0,
             SUB84((double)(local_10 * 57.295776),0),
             (int)((ulonglong)(double)(local_10 * 57.295776) >> 0x20),SUB84((double)local_28,0),
             (int)((ulonglong)(double)local_28 >> 0x20),(uint)(-1 < (int)param_1[9]),uVar2 & 0xffff)
    ;
  }
  return 0;
}


/* END FUNCTION 0x1009d100 */
