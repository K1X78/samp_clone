/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045e3d0
 * Name: FUN_0045e3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0045e3d0(void *this,uint param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint in_EAX;
  char local_9;
  undefined2 local_8 [2];
  undefined4 local_4;
  
  pcVar1 = *(char **)((int)this + 0x10);
  if (pcVar1 != (char *)0x0) {
    local_4 = 0;
    local_9 = '\0';
    if (pcVar1 == *(char **)((int)this + 0x14)) {
      in_EAX = FUN_0045b930((ushort)param_1,(int)pcVar1,&param_1);
      if ((char)in_EAX == '\0') goto LAB_0045e46f;
      *param_2 = *(undefined4 *)(pcVar1 + param_1 * 4 + 0x48);
      FUN_0045b8a0(param_1,*(char **)((int)this + 0x10));
      in_EAX = *(uint *)((int)this + 0x10);
      if (*(int *)(in_EAX + 4) == 0) {
        FUN_0045c910(this,in_EAX);
        puVar2 = *(undefined4 **)((int)this + 0x10);
        *puVar2 = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        return CONCAT31((int3)((uint)puVar2 >> 8),1);
      }
    }
    else {
      in_EAX = FUN_0045dbc0(this,param_1,pcVar1,&local_9,(uint)*(ushort *)(pcVar1 + 8),local_8,
                            param_2);
      if ((char)in_EAX == '\0') goto LAB_0045e46f;
      if ((local_9 != '\0') && (puVar2 = *(undefined4 **)((int)this + 0x10), puVar2[1] == 0)) {
        *(undefined4 *)((int)this + 0x10) = puVar2[0x34];
        in_EAX = FUN_0045c910(this,puVar2);
        *puVar2 = 0;
      }
    }
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
LAB_0045e46f:
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x0045e3d0 */
