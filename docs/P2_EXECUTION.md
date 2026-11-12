# P2 execution ledger (in progress)

User scope: finish P2.1-P2.6, then report. Do not stop at a partial implementation.
Base: `b330300` (clean/pushed). No new commit/push is requested for P2 itself.
Current count: 603 / 9,481, zero unmapped. A full Win32 build and 14/14 CTest
passed BEFORE the newest client pipeline fixture extension. The newest isolated
cold/warm/corrupt pipeline test is being rebuilt (session6289); poll it.
No game/server was launched. Changes are uncommitted.

## Constraints

Follow AGENTS.md: Win32, whole source read before edits, exact original owner
before production-body changes, one unique mapping per body, real callers,
counter after edits. No agents. Every child process has a timeout.
Do not launch GTA/client without explicit request or disturb existing processes.
Clone server integration tests are allowed. P2.6 actual GTA custom-model use is
not yet authorized separately; finish reviewable implementation/tests before
seeking that remaining runtime step. Do not claim full runtime parity from mocks.

REA MCP tools are absent, as in prior work. Local PeImage/capstone/generated asm
are being used and must be labeled as local evidence, not REA output.

## Verified original 0.3.DL owners/layouts

Server:
- Native AddCharModel 479bf0 (kind1, world-1), AddSimpleModel 479cf0 (kind2),
  AddSimpleModelTimed 479df0 (kind2, byte time_on/off), all ->497170.
- Registration497170 reads both nonempty files under model root, CRC32 and sizes,
  appends record; return is zero-based slot (482100), so successful first is0.
  Broadcast RPC179 layout: slot32,count32,kind8,world32,base32,new32,
  dffCRC32,txdCRC32,dffSize32,txdSize32,timeOn8,timeOff8 =39 bytes.
- Manifest496ce0 sends all same records on join, no world filter on metadata.
- CRC filename wrappers479f10/479f70 ->496ee0/496f20 first matching CRC.
  Record filenames at+d /+112, CRC+217/+21b, size+21f/+223, time+227/+228.
- Base lookup497120 matches newID and returns baseID, -1 if absent.
- RedirectDownload479fe0 ->488240: RPC183 type6,filetype8,crc32,urlLen8,urlBytes.
  Only low-byte URL length is transmitted. GetPlayerCustomSkin479a0c0 (actual
  47a0c0) reads player+2fee.
- Request RPC181 -> callback49ac60, RPC182 ->49ad60; each payload CRC32 only.
  Native registrations at49d73d/49d74e, storage4c00bc/4c00b8. Call496f60
  with filetype1=model or2=texture; FS then GM OnPlayerRequestDownload; veto or
  RedirectDownload avoids direct transfer. Only a registered CRC can transfer.
- Begin transfer488360: open file, send183 type5,filetype8,CRC32. Set block count
  floor(size/4096), includes final empty block for exact multiples.
- Compress4880f0: read4096, LzmaCompress(level1,dict65536,lc3,lp0,pb2,fb32,threads1),
  raw no end marker, max compressed4096. Error path needs careful handling.
- Process4884a0: fragments compressed block at MTU-40.183 type1 layout IS NOT
  pool/checksum: mode8 (1 continuation/2 final), rawBlockSize32, fragmentLen32,
  compressedBytes. When file ends send183 type2. State belongs to each player.
- Finish RPC184 callback497b10 requires nonempty payload (client sends one bit),
  FS then GM OnPlayerFinishedDownloading(player,virtualworld); sends185 one bit.
- Join postprocessing496740 calls manifest496ce0 and eventually init/world data.
- Original config useartwork default0; artpath defaultmodels. Manager exists only
  when enabled; startup492c1b loads artconfig.txt via4976a0.

Client:
- Existing RPC17910011d80 reads correct39-byte manifest. Existing18310011f80 is
  WRONG for type1: it treats mode/rawSize as pool/checksum. Must replace layout
  and preserve existing APIs/tests with new independent actual-wire fixtures.
- Stage1000d070 assembles <=4096 compressed bytes; mode2 LZMA-decodes using
  fixed props5d00000100 into expected rawBlockSize<=4096, then writes/CRC.
  Mode1 keeps accumulation; invalid mode reports5002, codec errors5001.
- Begin1000d1c0 finds file kind+CRC, creates temp file record.
- Write1000bc30 updates CRC32 and bytes. Finish1000dbd0 closes, checks expected
  size/CRC, validates DFF/TXD, renames temp to0xCRC.dff/txd; errors delete temp
  and mark record failed. It does not clear the entire model manifest slot.
- Native manager process1000d390 schedules model/texture requests once, filters
  object records by world==current/-1; character records are global. Completion
  sends RPC184 with write1 (one bit). Request1000d270 writes CRC32 and sends
 181(model)/182(texture), reliable ordered9/ch0.
- RPC1851000ead0 enables/resets six HTTP request slots; HTTP redirect183 type6
  ->1000e180. Six async slots are a real requirement, not a single fake URL record.
- Native validation1000da80 uses DFF parser100bb460/bbb30/bbf00;
  texture validator1000bfd0 ->100bde10, texture count<=1024.
- Engine model loader1000c1c0 ->100a77c0 (ped), object1000c2e0 ->100a7820.
  Need inspect these and actual model/texture streaming hooks before changes.

## Work already edited

- Vendored public-domain ANSI C LZMA SDK subset at official ip7z/7zip tag23.01,
  commit5b39dc76f1bc82f941d5c800ab9f34407a06b53a. Hashes in
  third_party/lzma-sdk-23.01/UPSTREAM.json. Codec dependency is wire-compatible,
  not claimed the original embedded SDK version. Added samp::lzma target Z7_ST.
  Needs build/link verification; source may require further upstream headers.
- pawn/natives.hpp adds CustomModelSpec/Record, ModelTransfer, artwork/root/model
  records to NativeHost, add_custom_model/redirect virtuals; player has model
  transfer/readiness. Defaults useartwork=false, rootmodels.
- GameLayer header declares add/redirect/manifest/base lookup and pending
  transfer/request/finish methods. Consider replacing handle_model_request with
  request_model_download(GamePlayer&,type,CRC) owner496f60, parsing CRC inline
  in existing on_user_message to avoid mapping generic wrappers dishonestly.
- New server/model_registry.cpp implements497170,496ce0,497120,488240 with real
  file CRC, manifests, base lookup and redirect. Added to server CMake; links
  samp::zlib and samp::lzma. No live main/network callers yet: MUST WIRE.
- natives.cpp read completely and adds7native closures (AddChar/Simple/Timed,
  twoCRCfilename lookups, RedirectDownload, GetPlayerCustomSkin). It does not yet
  add SetPlayerSkin or adapt class/spawn custom IDs. Registrations use host data.
- No other production edits yet. Existing asset_manager.cpp/header/element read
  in full; existingserver_rpc_packet read via earlier oversized output (reread
  whole in chunks before editing to ensure no missed context).

## Next work

1. Server transfer/controller + callbacks, manifest join, config/artconfig and
   main-loop processing; tests with native AMX registrations/independent bytes.
2. Client actual transfer/cache/HTTP pipeline, raw LZMA codec, cancellation,
   dedup/world filtering, size/CRC/format errors. Native validation and cache
   semantics first. Stage API is existing body1000d070, preserve it.
3. Engine activation/hook mapping for custom ped/object, timed/world selection,
   local/remote spawn/skin/object use and cleanup. Existing runtime explicitly
   refuses custom skins; close that path, do not just expose a loader callback.
4. Add meaningful end-to-end model fixtures and isolated server/HTTP integration,
   cold/warm/corrupt caches, disconnect/server-switch races. No GTA launch yet.
5. Full Win32 build/tests, counter/check + parser review renewal only after exact
   inspection, fresh docs/p2 evidence separate from historical P0/P1/integration.
6. Actual P2.6 game gate must remain honest; seek explicit GTA launch only after
   the implementation is concrete/reviewable if still needed.

Build command: bundled VS2026 CMake at
C:/Program Files/Microsoft Visual Studio/18/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe
--build --preset win32-vs2026. Sibling ctest --preset win32-vs2026. No-deploy
sentinel build/archive/build-msvc/baseline-no-deploy must remain absent. Python312 available.


## Newer checkpoint (supersedes stale next-work notes above)

- Server model registry/transfer/controller and7native bindings implemented.
  New files model_registry.cpp, model_transfer.cpp. Config keys useartwork0,
  artpathmodels added and main loads artconfig.txt before scripts; loopprocesses
  each player's transfer. on_user_message181/182 parses CRC32 and calls mapped
  request_model_download496f60;184callsfinish497b10. Joinmanifest beforeinit139;
  OnPlayerConnect deferred to first184 when models are pending. Nativeclock,
  callback and endpoint existingregressions allpassed14/14 before latestfixture.
- Server transfer read4880f0 uses pinnedLzmaCompress properties, process4884a0
  sends realmode/rawsize/fragmentlength, handles finalemptyblock for multiplesof4K.
  Failure4881a0 sends0; redirect488240 sends6; finish497b10 responds185.
- Artconfig reader4976a0 implemented withcase-sensitive prefixesAddCharModel /
  AddSimpleModel, comma args, nativefilename ASCII45..122 filter. Timed prefix
  follows original14-charSimpleprefix, timesremain0 inconfig(originalonly5args).
- Client assetmanager header nowhas transferofstream,6futureHTTPjobs, cancellation,
  pendingCRCrequests andready_/awaiting_finish_ack_. Native-shaped pipeline:
  newasset_download.cpp beginD1C0/writeBC30/failC760/finishDBD0/processD390.
  StageexistingD070 nowactualrawLZMAfragmentassembler. Finish checks sizeCRC and
  DFF/TXDprofile thenrenames .temp to0xCRC extension. Failuremarksrecord,doesnot
  remove manifest slot. SharedCRCupdatesallrecords. Processworldfiltersobjects,
  dedupsfiles, sends181/182then184onebit; waits185beforeclassready.
- HTTPasset_http.cpp startE180 andpollDF90 (originalworkerstart pushed atE00C)
  implement6independent futures usingWinHTTP onWindows. CapturesownedURL/bytes/
  atomiccancel only, nevermanager.2secondI/Otimeouts,64MiBexpectedfilebound,
  HTTP/Sonly,redirectfollow,2xxrequired. Futurepoll commitsfilethroughsamechecks.
  CMakeclient links winhttp/lzma. Need actuallocalHTTPfixtures; currentcodeUNTESTED
  forHTTP. CrossplatformHTTPcurrentlyexplicitunsupported(error1).
- RPC183corrected inserver_rpc_packet.cpp; whole842linefilewasreadinchunks.
  ModelBlockmode8/rawSize32/fragmentSize32 (notpool/CRC).0fail6001;2finish;
 5begin;6startHTTP.185setsreadyonlyifawaiting_finish_ack_. Existingdiagnostic
  AssetDownloadRequest fieldsaliaspool/checksum to mode/rawsizefortype1;preservedAPI.
- NetworkClienttick invokesassets.process_downloads(local.virtual_world), emitting
  rawordered9/ch0 frameswith exactonebitfinish. Classrequests waitassets.ready_,
  andresetselectionflagifpremature. Standaloneinitialrequestretriedafterack.
  Disconnected/failedtick andexplicitdisconnect resetassets,cancelfutures.
- Cache/formatmodel_validation.cpp added owners1000da80 and1000bfd0. Original
  parserinspected: rootDFFoptionalUV2bthenclump10,framelist0e<256frames,
  geometrylist1geometry,triangles<=100000 vertices<=200000,materialcount1..255,
  pluginallowlist(50e/253f2fd/253f2f9/116/105/253f2f8),skin bones<64,used<=bones,
  vertexweight/index/matrix sizesand12trailingzero bytes. TXDroot16,count<=1024,
  platform8/9,NULin32names,width/height<=2048. Need moredifferentialactualasset
  validation, especiallymaterialtexture/stringandframepluginbranches.
- Corrected oldrelease/destructor pointers: oldD620/D870 were geometrycleanup,
  notassetmanager. release maps C4E0zero-capacitypointerarrayfree; destructor
  mapsindependentD5E0PUSH0/CALLC4E0/RETthunk. Added verifiedD5E0labeltoasmgenerator;
  model-infoinitializer75F0wasalsoaddedtostartlistbutalreadylabeled,soonly+1total
  referenceentry ->9481. Sourcebodycountunchangedbycorrections. OriginalPEunchanged.
  Reset/Release closesownedtemp,cancels/joinsHTTP beforeclear;workerinputisolated.
- Newtestmodel_pipeline_test coversnativebinds,independent39bytemanifest,
  CRCknownvectors(123456789/abc),filenamebounds/invalidmissingfiles/timedbytecasts,
  MTU44fragmentation andSDKdecode. Extendedpipelinefixture tests8192byteDFF
  (3rawblocks inclEOFempty),cold/warm/corruptcachethroughmanifest->RPCrequests->
  servertransfer->clientvalidator->184->185. Newfixtureisolationfriend added:
  initialize_user_directory honorsHKCUmodel_cache,sofixtureoverridesprivatecache
  rootafterinit. Twoexactsyntheticfiles frominitialfailedfixturewerefoundby
  recentcreationtime+exactcontents andremovedfromconfiguredusercache. No registry
  changed; avoid furtherunisolatedtestcacheinstances. CoreNativeHostteststub
  implements2newpurevirtuals withCHECK(false),preservingitsownassertions.

### Critical engine findings still to implement

- 100aa6a0existingpointer_lists_ isNOTthecustommodel-infoarray. Originalmodelinfo
  tableinit100a75f0 clears65535pointers at101a0448 andusesBIAS32767 (pointer
 101c0444 storedin10152ae0),supports signedindices[-32767,32767]. Copies20000
  stockpointersfromGTA A9B0C8. Thenpatches707? operandsvia100a7560table lengthDCF
  bytes (5-byteentries =707? 0xDCF=3535/5=707). Needexacttableinspectionbeforecode.
- Custompedloader100a77c0 ->100a7670 clones44hexbytesstockpedmodelinfo into
  biasedtable[newID], loadsTXD via100a7750, loadsDFFclump100b1b10, thenassigns
  +1cclump andvtable+40 using100b41d0. Object100a7820 clones20hexbytesstockatomic
  info100a76c0,setsTXDsamehelperandDFFatomic loader100b1bc0. OriginalnegativeID
  supportrequiresbiasedmodelinfotableandGTAoperandpatches,notabs-IDguessing.
- 100a7750 TXDhelper:100b3480 findslot,100b34a0addslot,100b34c0loadfile,
  100b4260assignmodelinfoTXD,100b3510pushcurrent?100b3530setcurrent;inspectwrappers
  toactualGTAaddressesbeforeenginecalls. DFFloader100b1b10 RwStream open/file2,
  read1; temporarilypatchesGTA41b1d0byteC3,findchunk10,readclump,closestream,
  restorebyte64. Objectloader100b1bc0 uses100b1ba0 and100b4330;inspectactualGTA.
- GameRuntimecurrentlyrefusescustomskins (spawn.model>311/custom_model!=0,
  remote.stock>311). NoP2engineeditsyet. Mustcloseactualspawns,skins,objectsand
  cleanup/timed/world behavior, notjusttestswithfakeAssetLoader.
- SetPlayerSkin native47a6b0inspectfirst120bytesdone: ifskin>20000andbaseexists
  storebase+customelseplain+custom0. SendRPC153 ID16/base32/custom32 onlyifplayer
  validstate. ClientRPC153owner10018c80 (registered1df38,storage10118368),currently
  absentdispatch. Needimplementactualcommand/runtimeeffect.
- SetSpawnInfo470c00alsoresolves>20000 through497120beforewire. Needaddcustom_model
  toPlayerClassSpec andpropagatethroughaddclass46fff0/requestclass498560/in_game
 497750andSetSpawnInfo. Exactownersmustbeopenedbeforebodyedits. Noneofthese
  changeshavebeenmadeyet.

Next: pollbuildsession6289, fixpipelinefixturewithoutweakeningassertions; add
actualHTTP/world/corruption/truncation/disconnectfixtures,thenengineactivation,
customskin/objectverticaldependencies,finalWin32validation/evidence/runtimegate.
DoNOTfinalreportP2completewhileengineandactualruntimegateremainunfinished.


## Final implementation checkpoint ? supersedes the earlier next-work notes

P2.1?P2.5 code is integrated. P2.6 terminal checks pass; the user explicitly
requested remaining GTA tests in the report and will run them later. Do not
report in-game acceptance as passed. Final source accounting:621/9482, zero
unmapped bodies,69 reviewed parser diagnostics,106 directly owned/tested client
RPC routes. See docs/P2_REPORT.md and docs/p2/build.json for the final evidence.

Completed since the previous checkpoint: real WinHTTP redirect/failure/six-slot
fixtures; biased signed model-info table and707 operands; negative RemoveModel
hook; GTA TXD/DFF/ped/atomic loaders; COL3 plugin reader; skin wrapper/task/animation
refresh; local/remote/preview skin callers andRPC153; essential global object
natives/serialization/entities; world/time visibility and world-hour broadcast;
owned model/collision/TXD teardown; shared-CRC failure propagation and activation
format guards. Actual GTA execution remains unobserved.

Correction to earlier notes:497b10 does NOT defer OnPlayerConnect. Its2d47 flag
guards465760's initial global-object batch. Normal join49cea0 calls4661c0 at
49d3a7 (which calls FS46ae10/GM46dbf0 OnPlayerConnect), then496740 at49d418 for
manifest/init. Source now follows that callback ordering. AddPlayerClass wrappers
store model IDs unchanged; custom spawn selection resolves through SetSpawnInfo.

Real local archive DFF/TXD pairs were extracted only under ignored build-msvc.
Validators accepted six reference assets; two character and two object pairs
passed transfer/cold/warm/corrupt cache runs. Optional manual assets/source are
under build/archive/build-msvc/p2-manual and docs/p2/p2_smoke.pwn. Pawn compiler absent, so that
optional Pawn fixture is explicitly uncompiled. No GTA/client launched; no
build output deployed. An isolated clone-server startup/loopback query passed
and only the owned test child was terminated. No P2 commit/push made.
