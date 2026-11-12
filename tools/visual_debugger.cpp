// External diagnostic tool. Does not add code to the reconstructed DLL/server.
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <dbghelp.h>
#include <cstdio>
#include <share.h>
#include <string>
#include <vector>

int wmain(int argc,wchar_t** argv) {
    if(argc<5) return 2; // log-prefix, cwd, DLL-or-dash, exe, arguments...
    const std::wstring prefix=argv[1],cwd=argv[2],dll=argv[3];
    const auto logfile=prefix+L".log";FILE* log=_wfsopen(logfile.c_str(),L"w",_SH_DENYNO);if(!log)return 3;
    setvbuf(log,nullptr,_IONBF,0);
    std::wstring command;
    for(int i=4;i<argc;++i) {
        if(i>4)command+=L' ';
        const bool quote=i==4 || wcschr(argv[i],L' ')!=nullptr;
        if(quote)command+=L'"';command+=argv[i];if(quote)command+=L'"';
    }
    // Keep the target's ordinary heap behavior while retaining exception capture.
    // Windows debug-heap allocation patterns changed the legacy game's startup.
    SetEnvironmentVariableW(L"_NO_DEBUG_HEAP",L"1");
    STARTUPINFOW si{};si.cb=sizeof(si);PROCESS_INFORMATION pi{};
    const bool inject=dll!=L"-";
    if(!CreateProcessW(argv[4],command.data(),nullptr,nullptr,FALSE,
        DEBUG_ONLY_THIS_PROCESS|(inject?0:CREATE_NO_WINDOW),nullptr,cwd.c_str(),&si,&pi)) {
        fprintf(log,"CreateProcess failed: %lu\n",GetLastError());return 4;
    }
    fprintf(log,"PID=%lu exe=%ls\n",pi.dwProcessId,argv[4]);
    SymSetOptions(SYMOPT_LOAD_LINES|SYMOPT_UNDNAME|SYMOPT_DEFERRED_LOADS);
    bool symbols=false;DWORD injection=0;HANDLE injected=nullptr;void* remote=nullptr;
    DEBUG_EVENT event{};DWORD exitcode=0;
    for(;;) {
        if(!WaitForDebugEvent(&event,1000)) {if(GetLastError()==ERROR_SEM_TIMEOUT)continue;break;}
        DWORD disposition=DBG_CONTINUE;
        if(event.dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT) {
            if(event.u.CreateProcessInfo.hFile)CloseHandle(event.u.CreateProcessInfo.hFile);
        } else if(event.dwDebugEventCode==LOAD_DLL_DEBUG_EVENT) {
            wchar_t name[1024]{};
            if(event.u.LoadDll.hFile)GetFinalPathNameByHandleW(event.u.LoadDll.hFile,name,1024,FILE_NAME_NORMALIZED);
            fprintf(log,"MODULE %p %ls\n",event.u.LoadDll.lpBaseOfDll,name);
            if(event.u.LoadDll.hFile)CloseHandle(event.u.LoadDll.hFile);
            if(symbols)SymRefreshModuleList(pi.hProcess);
        } else if(event.dwDebugEventCode==EXIT_THREAD_DEBUG_EVENT && event.dwThreadId==injection) {
            fprintf(log,"DLL loaded=%08lx\n",event.u.ExitThread.dwExitCode);
            if(remote)VirtualFreeEx(pi.hProcess,remote,0,MEM_RELEASE);
            if(injected)CloseHandle(injected);
            if(!event.u.ExitThread.dwExitCode) TerminateProcess(pi.hProcess,6);
        } else if(event.dwDebugEventCode==OUTPUT_DEBUG_STRING_EVENT) {
            auto info=event.u.DebugString;const auto n=(info.nDebugStringLength>32768?32768:info.nDebugStringLength);
            std::vector<char> text(n*(info.fUnicode?2:1)+2);SIZE_T read=0;
            ReadProcessMemory(pi.hProcess,info.lpDebugStringData,text.data(),text.size()-2,&read);
            if(info.fUnicode)fprintf(log,"DEBUG %ls\n",reinterpret_cast<const wchar_t*>(text.data()));
            else fprintf(log,"DEBUG %s\n",text.data());
        } else if(event.dwDebugEventCode==EXCEPTION_DEBUG_EVENT) {
            const auto& exception=event.u.Exception;auto record=exception.ExceptionRecord;
            if(inject && !injection && record.ExceptionCode==EXCEPTION_BREAKPOINT) {
                const auto size=(dll.size()+1)*sizeof(wchar_t);remote=VirtualAllocEx(pi.hProcess,nullptr,size,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
                SIZE_T written=0;
                if(remote && WriteProcessMemory(pi.hProcess,remote,dll.c_str(),size,&written) && written==size)
                    injected=CreateRemoteThread(pi.hProcess,nullptr,0,reinterpret_cast<LPTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandleW(L"kernel32.dll"),"LoadLibraryW")),remote,0,&injection);
                fprintf(log,"DLL injection thread=%lu error=%lu\n",injection,GetLastError());
                if(!injected)TerminateProcess(pi.hProcess,5);
            }
            fprintf(log,"EXCEPTION code=%08lx address=%p thread=%lu firstChance=%lu\n",record.ExceptionCode,record.ExceptionAddress,event.dwThreadId,exception.dwFirstChance);
            if(record.ExceptionCode==EXCEPTION_SINGLE_STEP) {
                DWORD value=0;SIZE_T n=0;ReadProcessMemory(pi.hProcess,reinterpret_cast<const void*>(0xb744a4),&value,4,&n);
                fprintf(log,"COLLISION_POOL_WRITE value=%08lx nextInstruction=%p\n",value,record.ExceptionAddress);
            }
            if(record.ExceptionCode!=EXCEPTION_BREAKPOINT && record.ExceptionCode!=EXCEPTION_SINGLE_STEP)disposition=DBG_EXCEPTION_NOT_HANDLED;
            if(!exception.dwFirstChance) {
                HANDLE thread=OpenThread(THREAD_GET_CONTEXT|THREAD_QUERY_INFORMATION,FALSE,event.dwThreadId);
                CONTEXT context{};context.ContextFlags=CONTEXT_ALL;
                if(thread && GetThreadContext(thread,&context)) {
                    fprintf(log,"EIP=%08lx ESP=%08lx EBP=%08lx EAX=%08lx EBX=%08lx ECX=%08lx EDX=%08lx\n",context.Eip,context.Esp,context.Ebp,context.Eax,context.Ebx,context.Ecx,context.Edx);
                    DWORD raw[64]{};SIZE_T count=0;
                    if(ReadProcessMemory(pi.hProcess,reinterpret_cast<const void*>(context.Esp),raw,sizeof(raw),&count)) {
                        for(unsigned i=0;i<count/4;++i)fprintf(log,"RAW_STACK %08lx %08lx\n",context.Esp+i*4,raw[i]);
                    }
                    STACKFRAME64 frame{};frame.AddrPC={context.Eip,0,AddrModeFlat};frame.AddrStack={context.Esp,0,AddrModeFlat};frame.AddrFrame={context.Ebp,0,AddrModeFlat};
                    for(unsigned i=0;symbols && i<48 && StackWalk64(IMAGE_FILE_MACHINE_I386,pi.hProcess,thread,&frame,&context,nullptr,SymFunctionTableAccess64,SymGetModuleBase64,nullptr);++i) {
                        char buffer[sizeof(SYMBOL_INFO)+1024]{};auto* symbol=reinterpret_cast<SYMBOL_INFO*>(buffer);symbol->SizeOfStruct=sizeof(SYMBOL_INFO);symbol->MaxNameLen=1023;DWORD64 offset=0;
                        const bool found=SymFromAddr(pi.hProcess,frame.AddrPC.Offset,&offset,symbol)!=FALSE;
                        fprintf(log,"STACK %02u %08llx %s+%llx\n",i,frame.AddrPC.Offset,found?symbol->Name:"?",offset);
                    }
                }
                if(thread)CloseHandle(thread);
                const auto path=prefix+L".dmp";HANDLE file=CreateFileW(path.c_str(),GENERIC_WRITE,0,nullptr,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,nullptr);
                EXCEPTION_RECORD copy=record;CONTEXT dumpContext{};dumpContext.ContextFlags=CONTEXT_ALL;
                HANDLE dumpThread=OpenThread(THREAD_GET_CONTEXT|THREAD_QUERY_INFORMATION,FALSE,event.dwThreadId);if(dumpThread)GetThreadContext(dumpThread,&dumpContext);
                EXCEPTION_POINTERS pointers{&copy,&dumpContext};MINIDUMP_EXCEPTION_INFORMATION info{event.dwThreadId,&pointers,FALSE};
                if(file!=INVALID_HANDLE_VALUE) {
                    const auto flags=static_cast<MINIDUMP_TYPE>(MiniDumpWithThreadInfo|MiniDumpWithUnloadedModules|MiniDumpWithIndirectlyReferencedMemory|MiniDumpWithDataSegs);
                    fprintf(log,"DUMP %ls success=%d\n",path.c_str(),MiniDumpWriteDump(pi.hProcess,pi.dwProcessId,file,flags,&info,nullptr,nullptr));CloseHandle(file);
                }
                if(dumpThread)CloseHandle(dumpThread);
            }
        } else if(event.dwDebugEventCode==EXIT_PROCESS_DEBUG_EVENT) {
            exitcode=event.u.ExitProcess.dwExitCode;fprintf(log,"EXIT code=%08lx\n",exitcode);ContinueDebugEvent(event.dwProcessId,event.dwThreadId,DBG_CONTINUE);break;
        }
        ContinueDebugEvent(event.dwProcessId,event.dwThreadId,disposition);
    }
    if(symbols)SymCleanup(pi.hProcess);CloseHandle(pi.hThread);CloseHandle(pi.hProcess);fclose(log);return static_cast<int>(exitcode);
}
