/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044f110
 * Name: FUN_0044f110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044f110(int *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined8 uVar43;
  ulonglong local_18;
  ulonglong local_10;
  
  if (param_1 == (int *)0x0) {
    _sprintf(param_2,"stats is a NULL pointer in statsToString\n");
    return;
  }
  if (param_3 == 1) {
    uVar43 = FUN_0044e910();
    if (DAT_004ed5c8 == 0) {
      DAT_004ed5c8 = param_1[0x46];
    }
    dVar11 = 1.0 / ((double)((int)uVar43 - DAT_004ed5c8) * 0.001);
    dVar13 = (double)(param_1[0x30] - DAT_004ed5d0);
    if (param_1[0x30] - DAT_004ed5d0 < 0) {
      dVar13 = dVar13 + 4294967296.0;
    }
    dVar12 = (double)(param_1[0x38] - _DAT_004ed5d8);
    if (param_1[0x38] - _DAT_004ed5d8 < 0) {
      dVar12 = dVar12 + 4294967296.0;
    }
    DAT_004ed5d0 = param_1[0x30];
    _DAT_004ed5d4 = param_1[0x31];
    _DAT_004ed5d8 = param_1[0x38];
    _DAT_004ed5dc = param_1[0x39];
    uVar43 = FUN_0044e910();
    DAT_004ed5c8 = (int)uVar43;
    uVar1 = (uint)*(ulonglong *)(param_1 + 0x26);
    uVar2 = (uint)*(ulonglong *)(param_1 + 0x30);
    uVar38 = param_1[0x3a] + param_1[0x38];
    _sprintf(param_2,
             "Messages in Send buffer: %u\nMessages sent: %u\nBytes sent: %u\nAcks sent: %u\nAcks in send buffer: %u\nMessages waiting for ack: %u\nMessages resent: %u\nBytes resent: %u\nPacketloss: %.1f%%\nMessages received: %u\nBytes received: %u\nAcks received: %u\nDuplicate acks received: %u\nInst. KBits per second: %.1f\nKBits per second sent: %.1f\nKBits per second received: %.1f\n"
             ,param_1[3] + param_1[2] + param_1[1] + *param_1,
             param_1[7] + param_1[6] + param_1[5] + param_1[4],
             uVar2 + 7 >> 3 | (param_1[0x31] + (uint)(0xfffffff8 < uVar2)) * 0x20000000,
             param_1[0x1d],param_1[0x1e],param_1[0x28],param_1[0x23],
             uVar1 + 7 >> 3 | (param_1[0x27] + (uint)(0xfffffff8 < uVar1)) * 0x20000000,
             ((-(double)(longlong)(((ulonglong)(uint)param_1[0x27] & 0x80000000) << 0x20) +
              (double)(*(ulonglong *)(param_1 + 0x26) & 0x7fffffffffffffff)) * 100.0) /
             (-(double)(longlong)(((ulonglong)(uint)param_1[0x31] & 0x80000000) << 0x20) +
             (double)(*(ulonglong *)(param_1 + 0x30) & 0x7fffffffffffffff)),
             param_1[0x40] + param_1[0x3f] + param_1[0x3e],
             uVar38 + 7 >> 3 |
             (param_1[0x3b] + param_1[0x39] + (uint)CARRY4(param_1[0x3a],param_1[0x38]) +
             (uint)(0xfffffff8 < uVar38)) * 0x20000000,param_1[0x3c],param_1[0x3d],
             *(double *)(param_1 + 0x44) * 0.001,dVar13 * dVar11 * 0.001,dVar12 * dVar11 * 0.001);
    return;
  }
  if (param_3 == 2) {
    uVar43 = FUN_0044e910();
    iVar19 = (int)uVar43 - param_1[0x46];
    dVar11 = (double)iVar19;
    if (iVar19 < 0) {
      dVar11 = dVar11 + 4294967296.0;
    }
    uVar1 = param_1[0x1a];
    dVar13 = 1.0 / (dVar11 * 0.0010000000474974513);
    uVar2 = param_1[0x18];
    uVar38 = param_1[0x16];
    uVar3 = param_1[0x14];
    uVar4 = param_1[0x12];
    uVar5 = param_1[0x10];
    uVar6 = param_1[0xe];
    uVar7 = param_1[0xc];
    local_18 = *(ulonglong *)(param_1 + 0x38) & 0x7fffffffffffffff;
    dVar14 = (double)local_18;
    uVar8 = param_1[0x24];
    local_18 = (ulonglong)(param_1[0x39] & 0x80000000) << 0x20;
    dVar15 = (double)(longlong)local_18;
    local_18 = *(ulonglong *)(param_1 + 0x30) & 0x7fffffffffffffff;
    uVar9 = param_1[0x3a];
    dVar12 = (double)local_18;
    local_18 = (ulonglong)(param_1[0x31] & 0x80000000) << 0x20;
    uVar30 = param_1[0x2f] + (uint)(0xfffffff8 < (uint)param_1[0x2e]);
    uVar31 = param_1[0x27] + (uint)(0xfffffff8 < (uint)param_1[0x26]);
    uVar39 = param_1[0x26] - uVar8;
    uVar32 = ((param_1[0x27] - param_1[0x25]) - (uint)((uint)param_1[0x26] < uVar8)) +
             (uint)(0xfffffff8 < uVar39);
    uVar29 = param_1[0x25] + (uint)(0xfffffff8 < uVar8);
    uVar40 = param_1[0x21] + (uint)(0xfffffff8 < (uint)param_1[0x20]);
    local_10 = *(ulonglong *)(param_1 + 0x26) & 0x7fffffffffffffff;
    dVar17 = (double)local_10;
    local_10 = (ulonglong)(param_1[0x27] & 0x80000000) << 0x20;
    dVar18 = (double)(longlong)local_10;
    local_10 = *(ulonglong *)(param_1 + 0x30) & 0x7fffffffffffffff;
    dVar16 = (double)local_10;
    local_10 = (ulonglong)(param_1[0x31] & 0x80000000) << 0x20;
    uVar41 = param_1[0x3b] + (uint)(0xfffffff8 < uVar9);
    uVar10 = param_1[0x38];
    uVar33 = param_1[0x39] + (uint)(0xfffffff8 < uVar10);
    uVar22 = param_1[0x3b] + param_1[0x39] + (uint)CARRY4(uVar9,uVar10) +
             (uint)(0xfffffff8 < uVar9 + uVar10);
    uVar42 = param_1[0x1b] + (uint)(0xfffffff8 < uVar1);
    uVar34 = param_1[0x19] + (uint)(0xfffffff8 < uVar2);
    uVar35 = param_1[0x17] + (uint)(0xfffffff8 < uVar38);
    uVar36 = param_1[0x15] + (uint)(0xfffffff8 < uVar3);
    uVar23 = ((param_1[0x1b] - param_1[0x13]) - (uint)(uVar1 < uVar4)) +
             (uint)(0xfffffff8 < uVar1 - uVar4);
    uVar24 = ((param_1[0x19] - param_1[0x11]) - (uint)(uVar2 < uVar5)) +
             (uint)(0xfffffff8 < uVar2 - uVar5);
    uVar25 = ((param_1[0x17] - param_1[0xf]) - (uint)(uVar38 < uVar6)) +
             (uint)(0xfffffff8 < uVar38 - uVar6);
    uVar26 = ((param_1[0x15] - param_1[0xd]) - (uint)(uVar3 < uVar7)) +
             (uint)(0xfffffff8 < uVar3 - uVar7);
    uVar37 = param_1[0x13] + (uint)(0xfffffff8 < uVar4);
    uVar20 = param_1[0x11] + (uint)(0xfffffff8 < uVar5);
    uVar27 = param_1[0xf] + (uint)(0xfffffff8 < uVar6);
    uVar28 = param_1[0xd] + (uint)(0xfffffff8 < uVar7);
    uVar21 = param_1[0x31] + (uint)(0xfffffff8 < (uint)param_1[0x30]);
    _sprintf(param_2,
             "Bytes sent:\t\t\t\t%u\nMessages in send buffer:\t\tSP:%u HP:%u MP:%u LP:%u\nMessages sent:\t\t\t\tSP:%u HP:%u MP:%u LP:%u\nMessage data bytes sent:\t\tSP:%u HP:%u MP:%u LP:%u\nMessage header bytes sent:\t\tSP:%u HP:%u MP:%u LP:%u\nMessage total bytes sent:\t\tSP:%u HP:%u MP:%u LP:%u\nBytes received:\t\t\t\tTtl:%u Good:%u Bad:%u\nPackets received:\t\t\tTtl:%u Good:%u Bad:%u\nAcks received:\t\t\t\tTtl:%u Good:%u Dup:%u\nMessages received:\t\t\tTotal:%u Valid:%u Invalid:%u Dup:%u\nPacketloss:\t\t\t\t%.1f%%\nPackets sent:\t\t\t\t%u\nAcks sent:\t\t\t\t%u\nAcks in send buffer:\t\t\t%u\nMessages waiting for ack:\t\t%u\nAck bytes sent:\t\t\t\t%u\nSent packets containing only acks:\t%u\nSent packets w/only acks and resends:\t%u\nReliable messages resent:\t\t%u\nReliable message data bytes resent:\t%u\nReliable message header bytes resent:\t%u\nReliable message total bytes resent:\t%u\nNumber of messages split:\t\t%u\nNumber of messages unsplit:\t\t%u\nMessage splits performed:\t\t%u\nAdditional encryption bytes:\t\t%u\nSequenced messages out of order:\t%u\nSequenced messages in order:\t\t%u\nOrdered messages out of order:\t\t%u\nOrdered messages in of order:\t\t%u\nSplit messages waiting for reassembly:\t%u\nMessages in internal output queue:\t%u\nInst KBits per second:\t\t\t%.1f\nElapsed time (sec):\t\t\t%.1f\nKBits per second sent:\t\t\t%.1f\nKBits per second received:\t\t%.1f\n"
             ,param_1[0x30] + 7U >> 3 | uVar21 * 0x20000000,uVar21 >> 3,*param_1,param_1[1],
             param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
             uVar7 + 7 >> 3 | uVar28 * 0x20000000,uVar28 >> 3,uVar6 + 7 >> 3 | uVar27 * 0x20000000,
             uVar27 >> 3,uVar5 + 7 >> 3 | uVar20 * 0x20000000,uVar20 >> 3,
             uVar4 + 7 >> 3 | uVar37 * 0x20000000,uVar37 >> 3,
             (uVar3 - uVar7) + 7 >> 3 | uVar26 * 0x20000000,uVar26 >> 3,
             (uVar38 - uVar6) + 7 >> 3 | uVar25 * 0x20000000,uVar25 >> 3,
             (uVar2 - uVar5) + 7 >> 3 | uVar24 * 0x20000000,uVar24 >> 3,
             (uVar1 - uVar4) + 7 >> 3 | uVar23 * 0x20000000,uVar23 >> 3,
             uVar3 + 7 >> 3 | uVar36 * 0x20000000,uVar36 >> 3,uVar38 + 7 >> 3 | uVar35 * 0x20000000,
             uVar35 >> 3,uVar2 + 7 >> 3 | uVar34 * 0x20000000,uVar34 >> 3,
             uVar1 + 7 >> 3 | uVar42 * 0x20000000,uVar42 >> 3,
             uVar9 + uVar10 + 7 >> 3 | uVar22 * 0x20000000,uVar22 >> 3,
             uVar10 + 7 >> 3 | uVar33 * 0x20000000,uVar33 >> 3,uVar9 + 7 >> 3 | uVar41 * 0x20000000,
             uVar41 >> 3,param_1[0x36] + param_1[0x37],param_1[0x36],param_1[0x37],
             param_1[0x3c] + param_1[0x3d],param_1[0x3c],param_1[0x3d],
             param_1[0x3e] + param_1[0x3f] + param_1[0x40],param_1[0x3e],param_1[0x3f],param_1[0x40]
             ,((-dVar18 + dVar17) * 100.0) / (-(double)(longlong)local_10 + dVar16),param_1[0x2c],
             param_1[0x1d],param_1[0x1e],param_1[0x28],param_1[0x20] + 7U >> 3 | uVar40 * 0x20000000
             ,uVar40 >> 3,param_1[0x1c],param_1[0x22],param_1[0x23],
             uVar8 + 7 >> 3 | uVar29 * 0x20000000,uVar29 >> 3,uVar39 + 7 >> 3 | uVar32 * 0x20000000,
             uVar32 >> 3,param_1[0x26] + 7U >> 3 | uVar31 * 0x20000000,uVar31 >> 3,param_1[0x2a],
             param_1[0x29],param_1[0x2b],param_1[0x2e] + 7U >> 3 | uVar30 * 0x20000000,uVar30 >> 3,
             param_1[0x32],param_1[0x33],param_1[0x34],param_1[0x35],param_1[0x41],param_1[0x42],
             *(double *)(param_1 + 0x44) * 0.001,dVar11 * 0.0010000000474974513,
             (-(double)(longlong)local_18 + dVar12) * dVar13 * 0.001,
             (-dVar15 + dVar14) * dVar13 * 0.001);
    return;
  }
  if (param_3 == 4) {
    uVar38 = param_1[0x3a] + param_1[0x38];
    uVar1 = (uint)*(ulonglong *)(param_1 + 0x26);
    uVar2 = (uint)*(ulonglong *)(param_1 + 0x30);
    local_10 = *(ulonglong *)(param_1 + 0x26) & 0x7fffffffffffffff;
    dVar11 = (double)local_10;
    local_10 = (ulonglong)(param_1[0x27] & 0x80000000) << 0x20;
    _sprintf(param_2,
             "Messages in Send buffer: %u\nMessages sent: %u\nBytes sent: %u\nAcks sent: %u\nAcks in send buffer: %u\nMessages waiting for ack: %u\nMessages resent: %u\nBytes resent: %u\nPacketloss: %.1f%%\nMessages received: %u\nBytes received: %u\nAcks received: %u\nDuplicate acks received: %u\n"
             ,param_1[3] + param_1[2] + param_1[1] + *param_1,
             param_1[7] + param_1[6] + param_1[5] + param_1[4],
             uVar2 + 7 >> 3 | (param_1[0x31] + (uint)(0xfffffff8 < uVar2)) * 0x20000000,
             param_1[0x1d],param_1[0x1e],param_1[0x28],param_1[0x23],
             uVar1 + 7 >> 3 | (param_1[0x27] + (uint)(0xfffffff8 < uVar1)) * 0x20000000,
             ((-(double)(longlong)local_10 + dVar11) * 100.0) /
             (-(double)(longlong)(((ulonglong)(uint)param_1[0x31] & 0x80000000) << 0x20) +
             (double)(*(ulonglong *)(param_1 + 0x30) & 0x7fffffffffffffff)),
             param_1[0x40] + param_1[0x3f] + param_1[0x3e],
             uVar38 + 7 >> 3 |
             (param_1[0x3b] + param_1[0x39] + (uint)CARRY4(param_1[0x3a],param_1[0x38]) +
             (uint)(0xfffffff8 < uVar38)) * 0x20000000,param_1[0x3c],param_1[0x3d]);
  }
  return;
}


/* END FUNCTION 0x0044f110 */
