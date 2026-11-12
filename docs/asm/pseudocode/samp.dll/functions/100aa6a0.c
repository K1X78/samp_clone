/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa6a0
 * Name: FUN_100aa6a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100aa6a0(DWORD param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD local_4;
  
  puVar5 = &DAT_101e04b0;
  for (iVar2 = 40000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar2 = 0;
  local_4 = param_1;
  do {
    if (DAT_102ac9b8 == 1) {
      VirtualProtect(*(LPVOID *)((int)&DAT_10154730 + iVar2),4,0x40,&local_4);
      puVar5 = *(undefined4 **)((int)&DAT_10154730 + iVar2);
LAB_100aa701:
      *puVar5 = &DAT_101e04b0;
    }
    else if (DAT_102ac9b8 == 2) {
      VirtualProtect(*(LPVOID *)(iVar2 + 0x10154768),4,0x40,&local_4);
      puVar5 = *(undefined4 **)(iVar2 + 0x10154768);
      goto LAB_100aa701;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x38);
  iVar2 = 0;
  do {
    if (DAT_102ac9b8 == 1) {
      VirtualProtect(*(LPVOID *)((int)&DAT_101547a0 + iVar2),8,0x40,&local_4);
      iVar3 = *(int *)((int)&DAT_101547a0 + iVar2);
LAB_100aa751:
      *(undefined4 **)(iVar3 + 3) = &DAT_101e04b0;
    }
    else if (DAT_102ac9b8 == 2) {
      VirtualProtect(*(LPVOID *)(iVar2 + 0x10154880),8,0x40,&local_4);
      iVar3 = *(int *)(iVar2 + 0x10154880);
      goto LAB_100aa751;
    }
    iVar2 = iVar2 + 4;
    if (iVar2 == 0xe0) {
      piVar4 = &DAT_10154960;
      do {
        VirtualProtect((LPVOID)*piVar4,8,0x40,&local_4);
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        *(undefined4 **)(iVar2 + 3) = &DAT_101e04b4;
      } while (piVar4 != &DAT_1015498c);
      puVar5 = &DAT_1015498c;
      do {
        VirtualProtect((LPVOID)*puVar5,4,0x40,&local_4);
        puVar1 = (undefined4 *)*puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = &DAT_102075b0;
      } while (puVar5 != (undefined4 *)&DAT_1015499c);
      VirtualProtect(&DAT_00564dc7,4,0x40,&local_4);
      _DAT_00564dc7 = &DAT_101fc6b0;
      VirtualProtect(&DAT_0040936a,4,0x40,&local_4);
      _DAT_0040936a = &DAT_101e04b4;
      puVar5 = (undefined4 *)&DAT_00b7d0b8;
      for (iVar2 = 0x7080; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      return;
    }
  } while( true );
}


/* END FUNCTION 0x100aa6a0 */
