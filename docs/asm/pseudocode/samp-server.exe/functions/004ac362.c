/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac362
 * Name: __alloc_osfhnd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __alloc_osfhnd(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c5028;
  uStack_c = 0x4ac36e;
  local_20 = -1;
  iVar1 = __mtinitlocknum(0xb);
  if (iVar1 == 0) {
LAB_004ac403:
    local_20 = -1;
  }
  else {
    __lock(0xb);
    local_8 = (undefined *)0x0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(&DAT_0051c940)[iVar1];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = _malloc(0x480);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_0051c940)[iVar1] = puVar3;
          DAT_0051c938 = DAT_0051c938 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_0051c940)[iVar1] + 0x480); puVar3 = puVar3 + 9) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar1 << 5;
          iVar1 = __lock_fhandle(local_20);
          if (iVar1 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_0051c940)[iVar1] + 0x480); puVar3 = puVar3 + 9) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            local_8 = (undefined *)0x1;
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                __local_unwind2((int)local_14,-1);
                goto LAB_004ac403;
              }
              puVar3[2] = puVar3[2] + 1;
            }
            local_8 = (undefined *)0x0;
            FUN_004ac43b();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          if ((*(byte *)(puVar3 + 1) & 1) == 0) {
            *puVar3 = 0xffffffff;
            local_20 = ((int)puVar3 - (&DAT_0051c940)[iVar1]) / 0x24 + iVar1 * 0x20;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
        }
      }
      if (local_20 != -1) break;
    }
    local_8 = (undefined *)0xffffffff;
    FUN_004ac4d5();
  }
  return local_20;
}


/* END FUNCTION 0x004ac362 */
