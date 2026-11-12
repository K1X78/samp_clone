/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5860
 * Name: FUN_100b5860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_100b5860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_EAX;
  
  FUN_100b57d0();
  iVar1 = *DAT_10155400;
  DAT_102abe50 = *(undefined4 *)(iVar1 + 0x60);
  DAT_102abe54 = *(undefined4 *)(iVar1 + 100);
  _DAT_00c9bcc0 = iVar1;
  *(undefined4 *)(iVar1 + 0x60) = DAT_102abe48;
  *(undefined4 *)(iVar1 + 100) = DAT_102abe4c;
  (*(code *)0x734650)();
  (*(code *)0x53df40)();
  (*(code *)0x732f30)();
  *(undefined4 *)(iVar1 + 0x60) = DAT_102abe50;
  *(undefined4 *)(iVar1 + 100) = DAT_102abe54;
  return CONCAT44(param_2,in_EAX);
}


/* END FUNCTION 0x100b5860 */
