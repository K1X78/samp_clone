/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060260
 * Name: FUN_10060260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_10060260(void)

{
  char local_410c [256];
  undefined4 local_400c;
  undefined2 local_4008;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115eeb;
  pvStack_c = ExceptionList;
  uStack_10 = 0x1006027f;
  ExceptionList = &pvStack_c;
  FUN_10002310();
  local_4 = 0;
  FUN_10060070(1);
  local_400c = 0x61746164;
  local_4008 = 0x3d;
  FUN_100176a0(&DAT_1015fa70,(int)&local_4008 + 1);
  _sprintf(local_410c,"team.sa-mp.com/report_037.php?addr=0x%X&gta=sa",
           *(undefined4 *)(DAT_1015fa68 + 0xb8));
  FUN_10002c70(2,local_410c,&local_400c,"www.sa-mp.com");
  local_4 = 0xffffffff;
  FUN_10002370();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10060260 */
