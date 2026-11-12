#!/usr/bin/env python3
"""Configure/build/test a Win32 preset, then retain binary and source identities.

Does not run the game/server, deploy into the game installation, commit or push.
"""
from __future__ import annotations

import argparse
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys

from audit_baseline import PeImage

ROOT = Path(__file__).resolve().parents[1]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--cmake', default='cmake')
    parser.add_argument('--preset', choices=['win32-vs2022', 'win32-vs2026'], required=True)
    parser.add_argument('--output', type=Path, default=ROOT / 'docs/baseline',
                        help='evidence directory; use a new directory to preserve a historical baseline')
    args = parser.parse_args()
    evidence = args.output.resolve()
    evidence.mkdir(parents=True, exist_ok=True)
    cmake = Path(args.cmake).resolve() if Path(args.cmake).exists() else Path(args.cmake)
    ctest = cmake.with_name('ctest.exe') if cmake.is_absolute() else Path('ctest')
    relative = 'build/msvc/p0-win32' if args.preset == 'win32-vs2026' else 'build/msvc/win32-vs2022'
    build = ROOT / relative
    build.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'build/msvc/baseline-no-deploy').exists():
        raise RuntimeError('baseline-no-deploy must remain absent to skip deployment')
    records = []

    def run(name, command, timeout):
        print(f'{name} ...', flush=True)
        completed = subprocess.run([str(value) for value in command], cwd=ROOT,
                                   capture_output=True, text=True, timeout=timeout)
        output = completed.stdout + completed.stderr
        (build / f'{name}.log').write_text(output, encoding='utf-8')
        records.append({'step': name, 'command': [str(value) for value in command],
                        'timeout_seconds': timeout, 'exit_code': completed.returncode,
                        'log': f'{relative}/{name}.log'})
        if completed.returncode:
            print(output[-6000:])
            raise subprocess.CalledProcessError(completed.returncode, command)
        return completed.stdout

    run('configure', [cmake, '--preset', args.preset], 180)
    run('build', [cmake, '--build', '--preset', args.preset], 900)
    discovery = json.loads(run('test-discovery', [ctest, '--preset', args.preset,
                                                '--show-only=json-v1'], 30))
    if not discovery['tests']:
        raise RuntimeError('baseline must discover tests')
    run('ctest', [ctest, '--preset', args.preset], 120)
    run('counter-tests', [sys.executable, 'tools/test_official_function_count.py'], 60)
    run('function-check', [sys.executable, 'tools/official_function_count.py', '--check'], 60)
    run('inventory', [sys.executable, 'tools/audit_baseline.py', '--output', str(evidence)], 60)
    artifacts = {}
    for name, path in {
        'client': build / 'src/client/RelWithDebInfo/samp.dll',
        'server': build / 'src/server/RelWithDebInfo/samp-server.exe',
        'rpc_test': build / 'tests/RelWithDebInfo/server_rpc_test.exe',
        **{row['name']: build / 'tests/RelWithDebInfo' / (row['name'] + '.exe')
           for row in discovery['tests'] if row['name'] != 'server_rpc_test'},
    }.items():
        pe = PeImage(path)
        if pe.machine != 0x14c:
            raise RuntimeError(f'expected x86 machine: {path}')
        artifacts[name] = {'path': path.relative_to(ROOT).as_posix(), 'machine': '0x014c',
                           'bytes': len(pe.data), 'sha256': hashlib.sha256(pe.data).hexdigest()}
    inputs = []
    for folder in ['src', 'tests', 'tools', 'third_party']:
        inputs.extend(path for path in (ROOT / folder).rglob('*')
                      if path.is_file() and '__pycache__' not in path.parts)
    inputs.extend(ROOT / name for name in ['CMakeLists.txt', 'CMakePresets.json'])
    digest = hashlib.sha256()
    for path in sorted(inputs):
        digest.update(path.relative_to(ROOT).as_posix().encode() + b'\0')
        digest.update(hashlib.sha256(path.read_bytes()).digest())
    compiler_text = next(build.glob('CMakeFiles/*/CMakeCXXCompiler.cmake')).read_text()
    compiler = {name: re.search(r'set\(' + name + r' "?([^"\)]+)', compiler_text)[1]
                for name in ['CMAKE_CXX_COMPILER', 'CMAKE_CXX_COMPILER_ID',
                             'CMAKE_CXX_COMPILER_VERSION', 'CMAKE_CXX_COMPILER_ARCHITECTURE_ID',
                             'CMAKE_CXX_SIZEOF_DATA_PTR']}
    result = {'verified_at_utc': datetime.now(timezone.utc).isoformat(),
        'git_head': run('git-head', ['git', 'rev-parse', 'HEAD'], 20).strip(),
        'working_tree_dirty': bool(run('git-status', ['git', 'status', '--porcelain'], 20).strip()),
        'source_input_sha256': digest.hexdigest(), 'source_input_files': len(inputs),
        'preset': args.preset, 'configuration': 'RelWithDebInfo',
        'cmake_version': run('cmake-version', [cmake, '--version'], 20).splitlines()[0],
        'compiler': compiler,
        'tests': [row['name'] for row in discovery['tests']],
        'artifacts': artifacts, 'steps': records,
        'limitations': 'offline tests only; no game/server run; existing compiler warnings retained'}
    (evidence / 'build.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8', newline='\n')
    print(f'Baseline passed; evidence: {evidence / "build.json"}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
