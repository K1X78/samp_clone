/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100086a0
 * Name: FUN_100086a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100086a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_10001010();
  iVar1 = FUN_100aba90();
  if (iVar1 == 0) {
    uVar4 = 0x428a3333;
    uVar3 = 0xc4fecce9;
    uVar2 = 0x448da19d;
    FUN_10001010(0x448da19d,0xc4fecce9,0x428a3333);
    FUN_1009ee80(uVar2,uVar3,uVar4);
  }
  else {
    uVar4 = 0x42a56bd4;
    uVar3 = 0xc4fe9000;
    uVar2 = 0x4488accd;
    FUN_10001010(0x4488accd,0xc4fe9000,0x42a56bd4);
    FUN_100ac190(uVar2,uVar3,uVar4);
  }
  FUN_1009d5c0(0x4488a000,0xc4fe8000,0x42b40000,0,0,0);
  FUN_1009d620(0x43c00000,0xc4c2a000,0x41a00000,2);
  FUN_100a0980(1);
  FUN_100a1bd0(0);
  return;
}


/* END FUNCTION 0x100086a0 */
