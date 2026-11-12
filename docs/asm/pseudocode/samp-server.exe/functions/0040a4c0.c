/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a4c0
 * Name: FUN_0040a4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040a4c0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *in_EAX;
  undefined1 local_24 [8];
  undefined4 local_1c;
  
  puVar3 = local_24;
  do {
    puVar2 = in_EAX;
    puVar1 = param_1;
    if (puVar2 == (undefined1 *)0x0) {
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar3 + 8) = puVar1;
        return local_1c;
      }
LAB_0040a512:
      *(undefined4 *)(puVar3 + 8) = 0;
      return local_1c;
    }
    if (puVar1 == (undefined1 *)0x0) {
      if (puVar2 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar3 + 8) = puVar2;
        return local_1c;
      }
      goto LAB_0040a512;
    }
    if (*(uint *)(puVar2 + 0xc) < *(uint *)(puVar1 + 0xc)) {
      *(undefined1 **)(puVar3 + 8) = puVar2;
      param_1 = puVar1;
      in_EAX = *(undefined1 **)(puVar2 + 8);
      puVar3 = puVar2;
    }
    else {
      *(undefined1 **)(puVar3 + 8) = puVar1;
      param_1 = *(undefined1 **)(puVar1 + 8);
      in_EAX = puVar2;
      puVar3 = puVar1;
    }
  } while( true );
}


/* END FUNCTION 0x0040a4c0 */
