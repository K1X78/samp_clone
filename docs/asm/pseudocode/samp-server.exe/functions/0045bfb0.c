/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045bfb0
 * Name: FUN_0045bfb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte * __thiscall FUN_0045bfb0(void *this,int *param_1,uint param_2,undefined4 param_3)

{
  int *this_00;
  bool bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  void *local_4;
  
  this_00 = param_1;
  if (*param_1 - param_1[2] < 0x10) {
    return (byte *)0x0;
  }
  local_4 = this;
  pbVar2 = FUN_0045bd60((int *)((int)this + 0x728));
  *(uint *)(pbVar2 + 0x20) = param_2;
  *(undefined4 *)(pbVar2 + 0x24) = param_3;
  uVar3 = FUN_0044da70(this_00,pbVar2,0x10,'\x01');
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_0044da70(this_00,(byte *)&param_1,*(int *)((int)this + 0x420),'\x01');
    uVar5 = (uint)param_1 & 0xff;
    *(uint *)(pbVar2 + 0xc) = uVar5;
    if (((5 < (byte)param_1) && ((char)uVar3 != '\0')) &&
       (((uVar5 != 7 && ((uVar5 != 10 && (uVar5 != 9)))) ||
        ((uVar3 = FUN_0044da70(this_00,pbVar2 + 0x10,5,'\x01'), (char)uVar3 != '\0' &&
         (uVar3 = FUN_0044da70(this_00,pbVar2 + 0x12,0x10,'\x01'), (char)uVar3 != '\0')))))) {
      param_2 = param_2 & 0xffffff00;
      uVar3 = FUN_0044d840(this_00,(undefined1 *)&param_2);
      if ((char)uVar3 != '\0') {
        if ((char)param_2 == '\0') {
          pbVar2[0x18] = 0;
          pbVar2[0x19] = 0;
          pbVar2[0x1a] = 0;
          pbVar2[0x1b] = 0;
          pbVar2[0x1c] = 0;
          pbVar2[0x1d] = 0;
          pbVar2[0x1e] = 0;
          pbVar2[0x1f] = 0;
          bVar1 = FUN_0044db30(this_00,(byte *)&local_4,0x10,1);
          if (bVar1) {
            uVar5 = (uint)local_4 & 0xffff;
            *(uint *)(pbVar2 + 0x30) = uVar5;
            if ((uVar5 != 0) && (uVar5 = uVar5 + 7 >> 3, uVar5 < 0x5d4)) {
              pvVar4 = operator_new(uVar5);
              *(void **)(pbVar2 + 0x34) = pvVar4;
              *(undefined1 *)(((*(int *)(pbVar2 + 0x30) + 7U >> 3) - 1) + (int)pvVar4) = 0;
              uVar5 = FUN_0044ded0(this_00,*(undefined4 **)(pbVar2 + 0x34),
                                   *(int *)(pbVar2 + 0x30) + 7U >> 3);
              if ((char)uVar5 != '\0') {
                return pbVar2;
              }
              _free(*(void **)(pbVar2 + 0x34));
            }
          }
        }
        else {
          FUN_00491fa0("[warning] dropping a split packet from client");
        }
      }
    }
  }
  FUN_0044eb60((int *)((int)this + 0x728),(int)pbVar2);
  return (byte *)0x0;
}


/* END FUNCTION 0x0045bfb0 */
