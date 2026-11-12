/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5be0
 * Name: FUN_100d5be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d5be0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 *local_8;
  int local_4;
  
  puVar1 = (undefined4 *)*in_EAX;
  uVar2 = *puVar1;
  local_8 = puVar1;
  FUN_100d8ae0(uVar2,"Re-used connection seems dead, get a new one\n");
  FUN_100dc080(puVar1,1);
  iVar3 = FUN_100d5660(&local_8,0);
  *in_EAX = 0;
  if ((iVar3 == 0) || (iVar3 == 0x37)) {
    local_8 = (undefined4 *)0x1;
    iVar3 = FUN_100d52f0(uVar2);
    if ((iVar3 == 0) && (uVar2 = *in_EAX, local_4 != 0)) {
      iVar3 = FUN_100ce210(uVar2,0);
      if (iVar3 == 0) {
        FUN_100e0cb0(uVar2,&local_8);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100d5be0 */
