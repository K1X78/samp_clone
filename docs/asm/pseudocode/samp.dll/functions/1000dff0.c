/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000dff0
 * Name: FUN_1000dff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_1000dff0(int param_1)

{
  uintptr_t uVar1;
  int iVar2;
  int iVar3;
  int *_ArgList;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  _ArgList = (int *)(param_1 + 0x1345);
  do {
    if (*(char *)((int)_ArgList + 6) == '\0') {
      uVar1 = __beginthread((_StartAddress *)&LAB_1000df90,0,_ArgList);
      _ArgList[2] = uVar1;
      if (uVar1 == 0xffffffff) {
        param_1 = param_1 + iVar3 * 0x230;
        *(undefined1 *)(param_1 + 0x134b) = 0;
        *(undefined1 *)(param_1 + 0x1452) = 1;
        *(undefined4 *)(param_1 + 0x1453) = 0xffffffff;
        return 0;
      }
      *(undefined4 *)((int)_ArgList + 0x10e) = 0xffffffff;
      *_ArgList = iVar3 + 1;
      *(undefined1 *)((int)_ArgList + 6) = 1;
      *(undefined1 *)((int)_ArgList + 7) = 0;
      *(undefined1 *)(_ArgList + 1) = 0;
      *(undefined1 *)((int)_ArgList + 0x10d) = 0;
      piVar4 = _ArgList + 3;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      *(undefined1 *)piVar4 = 0;
      puVar5 = (undefined4 *)((int)_ArgList + 0x112);
      for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
    }
    iVar3 = iVar3 + 1;
    _ArgList = _ArgList + 0x8c;
  } while (iVar3 < 6);
  *(undefined1 *)(param_1 + 0x1344) = 1;
  return 1;
}


/* END FUNCTION 0x1000dff0 */
