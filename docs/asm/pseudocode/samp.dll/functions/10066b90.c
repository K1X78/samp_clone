/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066b90
 * Name: FUN_10066b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10066b90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 local_10 [16];
  
  uStack_18 = 0xff000000;
  uStack_1c = 0x420;
  puStack_20 = local_10;
  uStack_24 = 0xffffffff;
  puStack_28 = &DAT_10118400;
  uStack_2c = 0;
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x63a2) + 0x38))
            ((int *)**(undefined4 **)(param_1 + 0x63a2));
  *(int *)(param_1 + 0x63e2) = (int)puStack_20 - (int)puStack_28;
  iVar2 = -1;
  iVar1 = 0;
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x63a2) + 0x38))
            ((int *)**(undefined4 **)(param_1 + 0x63a2),0,"[19:58:34]",0xffffffff,&uStack_2c,0x420,
             0xff000000);
  *(int *)(param_1 + 0x63e6) = iVar2 - iVar1;
  return;
}


/* END FUNCTION 0x10066b90 */
