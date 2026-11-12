/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034cd0
 * Name: FUN_10034cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10034cd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100204d0();
  local_4 = 0;
  *param_1 = &PTR_FUN_10119f40;
  FUN_100203f0(4,"Initialize",
               "( unsigned short maxConnections, unsigned short localPort, int _threadSleepTimer, const char *forceHostAddress );"
              );
  FUN_100203f0(0,"InitializeSecurity",&DAT_10119f3c);
  FUN_100203f0(0,"DisableSecurity","( void );");
  FUN_100203f0(1,"SetMaximumIncomingConnections","( unsigned short numberAllowed );");
  FUN_100203f0(0,"GetMaximumIncomingConnections","( void ) const;");
  FUN_100203f0(4,"Connect",
               "( const char* host, unsigned short remotePort, char* passwordData, int passwordDataLength );"
              );
  FUN_100203f0(2,"Disconnect","( unsigned int blockDuration, unsigned char orderingChannel=0 );");
  FUN_100203f0(0,"IsActive","( void ) const;");
  FUN_100203f0(0,"GetConnectionList","() const;");
  FUN_100203f0(4,"CloseConnection",
               "( const PlayerID target, bool sendDisconnectionNotification, unsigned char orderingChannel=0 );"
              );
  FUN_100203f0(2,"GetIndexFromPlayerID","( const PlayerID playerId );");
  FUN_100203f0(1,"GetPlayerIDFromIndex","( int index );");
  FUN_100203f0(2,"AddToBanList","( const char *IP, RakNetTime milliseconds=0 );");
  FUN_100203f0(1,"RemoveFromBanList","( const char *IP );");
  FUN_100203f0(0,"ClearBanList","( void );");
  FUN_100203f0(1,"IsBanned","( const char *IP );");
  FUN_100203f0(2,"Ping1","( const PlayerID target );");
  FUN_100203f0(3,"Ping2",
               "( const char* host, unsigned short remotePort, bool onlyReplyOnAcceptingConnections );"
              );
  FUN_100203f0(2,"GetAveragePing","( const PlayerID playerId );");
  FUN_100203f0(2,"GetLastPing","( const PlayerID playerId ) const;");
  FUN_100203f0(2,"GetLowestPing","( const PlayerID playerId ) const;");
  FUN_100203f0(1,"SetOccasionalPing","( bool doPing );");
  FUN_100203f0(2,"SetOfflinePingResponse","( const char *data, const unsigned int length );");
  FUN_100203f0(0,"GetInternalID","( void ) const;");
  FUN_100203f0(2,"GetExternalID","( const PlayerID target ) const;");
  FUN_100203f0(3,"SetTimeoutTime","( RakNetTime timeMS, const PlayerID target );");
  FUN_100203f0(1,"SetMTUSize","( int size );");
  FUN_100203f0(0,"GetMTUSize","( void ) const;");
  FUN_100203f0(0,"GetNumberOfAddresses","( void );");
  FUN_100203f0(2,"PlayerIDToDottedIP","( const PlayerID playerId ) const;");
  FUN_100203f0(2,"IPToPlayerID","( const char* host, unsigned short remotePort );");
  FUN_100203f0(1,"GetLocalIP","( unsigned int index );");
  FUN_100203f0(1,"AllowConnectionResponseIPMigration","( bool allow );");
  FUN_100203f0(4,"AdvertiseSystem",
               "( const char *host, unsigned short remotePort, const char *data, int dataLength );")
  ;
  FUN_100203f0(2,"SetIncomingPassword","( const char* passwordData, int passwordDataLength );");
  FUN_100203f0(0,"GetIncomingPassword","( void );");
  FUN_100203f0(3,"ApplyNetworkSimulator",
               "( double maxSendBPS, unsigned short minExtraPing, unsigned short extraPingVariance);"
              );
  FUN_100203f0(0,"IsNetworkSimulatorActive","( void );");
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10034cd0 */
