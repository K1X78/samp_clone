/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111df0
 * Name: FUN_10111df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10111df0(int *param_1,uint *param_2,void *param_3,void *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_8;
  
  if ((*param_2 >> 0x14 & 2) == 0) {
    if (*param_1 == 0) {
      local_28 = *param_2 >> 8;
    }
    else {
      local_28 = *param_2 >> 0xb;
    }
    local_28 = local_28 & 7;
    local_24 = local_28;
  }
  else {
    if (param_1[1] == 0) {
      local_20 = *param_2 >> 8;
    }
    else {
      local_20 = *param_2 >> 0xb;
    }
    local_20 = local_20 & 7;
    local_24 = local_20;
  }
  local_8 = local_24;
  if ((*param_2 >> 0xe & 7) != 0) {
    bVar1 = *(byte *)((int)param_4 + (*param_2 >> 0xe & 7));
    if ((((&DAT_10133158)[bVar1] & 0x10) != 0) &&
       ((*(byte *)((int)param_4 + (*param_2 >> 0xe & 7) + 1) & 7) == 5)) {
      if ((bVar1 & 0xc0) == 0) {
        local_8 = local_24 + 4;
      }
      else if ((bVar1 & 0xc0) == 0x40) {
        local_8 = local_24 + 1;
      }
      else if ((bVar1 & 0xc0) == 0x80) {
        local_8 = local_24 + 4;
      }
    }
    local_8 = local_8 + ((byte)(&DAT_10133158)[bVar1] & 0xf);
  }
  _memcpy(param_3,param_4,local_8);
  if ((int)(*param_2 << 0xc) >> 0x1d != 0) {
    uVar2 = FUN_10112040(param_3,param_4,local_24,(int)(*param_2 << 0xc) >> 0x1d);
    *(undefined4 *)param_1[2] = uVar2;
  }
  if ((*param_2 >> 0x14 & 4) != 0) {
    *(int *)param_1[3] = -*(int *)param_1[3];
  }
  if ((*param_2 >> 0x14 & 1) != 0) {
    *(undefined4 *)param_1[2] = 0xffffffff;
  }
  return (int)param_4 + local_8;
}


/* END FUNCTION 0x10111df0 */
