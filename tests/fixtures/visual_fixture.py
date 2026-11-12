"""Assemble a small diagnostic AMX fixture; not a general Pawn compiler.

Uses the VM's existing tested Pawn 3.2 opcodes. No production source or game
installation is modified. The generated mode drives the real registered natives.
"""
from pathlib import Path
import argparse
import struct

parser = argparse.ArgumentParser()
parser.add_argument('output', type=Path)
parser.add_argument('--with-test-commands', action='store_true')
args = parser.parse_args()
data = bytearray(20)  # two object IDs, one vehicle ID, reserved cell, auto-spawn guard
code = [0x78, 0]     # HALT 0, host return target
natives = []
publics = {}

def text(value):
    offset = len(data)
    data.extend(b''.join(struct.pack('<I', ord(c)) for c in value + '\0'))
    return offset

def f(value):
    return struct.unpack('<I', struct.pack('<f', value))[0]

def call(name, *values):
    if name not in natives:
        natives.append(name)
    for value in reversed(values):
        if isinstance(value, tuple):
            code.extend([0x29 if value[0] == 'arg' else 0x28, value[1]])
        else:
            code.extend([0x27, value])
    code.extend([0x27, 4 * len(values), 0x7b, natives.index(name), 0x2c, 4 * (len(values) + 1)])

def begin(name):
    publics[name] = len(code) * 4
    code.append(0x2e)

def done(value=1):
    code.extend([0x0b, value, 0x30])

def objects():
    for slot, model, x in [(0, -1000, 1962.), (4, -1001, 1972.)]:
        call('DestroyObject', ('global', slot))
        call('CreateObject', model, f(x), f(1343.), f(15.), f(0), f(0), f(0), f(250))
        code.extend([0x0f, slot])

def vehicles():
    for slot, model, x in [(8, 411, 1959.)]:
        call('DestroyVehicle', ('global', slot))
        call('CreateVehicle', model, f(x), f(1348.), f(15.5), f(90), 3, 3, -1, 0)
        code.extend([0x0f, slot])

begin('main'); done(0)
begin('OnGameModeInit')
call('SetGameModeText', text('P2 visual review'))
call('AddCharModel', 7, 20001, text('fam1.dff'), text('fam1.txd'))
call('AddSimpleModel', 0, 19379, -1000, text('sign.dff'), text('sign.txd'))
call('AddSimpleModel', 1, 19379, -1000, text('bridge.dff'), text('bridge.txd'))
call('AddSimpleModelTimed', -1, 19379, -1001, text('bridge.dff'), text('bridge.txd'), 20, 6)
call('AddPlayerClass', 7, f(1958.3783), f(1343.1572), f(15.3746), f(270), 0, 0, 0, 0, 0, 0)
call('SetWorldTime', 12)
objects(); vehicles(); done()
begin('OnPlayerRequestClass')
player = ('arg', 12)
call('SetSpawnInfo', player, 255, 20001, f(1958.3783), f(1343.1572), f(15.3746), f(270), 0, 0, 0, 0, 0, 0)
call('SetPlayerPos', player, f(1958.3783), f(1343.1572), f(15.3746))
call('SetPlayerCameraPos', player, f(1954), f(1343), f(17))
call('SetPlayerCameraLookAt', player, f(1958.3783), f(1343.1572), f(16), 2)
done()
begin('OnPlayerRequestSpawn'); done()
begin('OnPlayerSpawn')
call('SetPlayerInterior', player, 0); call('TogglePlayerClock', player, 0)
call('PutPlayerInVehicle', player, ('global', 8), 0)
call('SendClientMessage', player, -1, text('P2 official-native demo: custom character spawned in the Infernus.'))
if args.with_test_commands:
    call('SendClientMessage', player, -1, text('Optional test aliases: /p2day /p2night /p2vdelete /p2vcreate'))
done()
begin('OnPlayerFinishedDownloading')
call('SendClientMessage', player, -1, text('Custom model downloads complete.'))
code.extend([0x01, 16, 0x36, 0]); already_spawned = len(code) - 1
code.extend([0x0b, 1, 0x0f, 16])
call('SetSpawnInfo', player, 255, 20001, f(1958.3783), f(1343.1572), f(15.3746), f(270), 0, 0, 0, 0, 0, 0)
call('SpawnPlayer', player)
code[already_spawned] = len(code) * 4
done()
begin('OnPlayerDisconnect')
code.extend([0x0b, 0, 0x0f, 16]); done()
if args.with_test_commands:
    begin('OnPlayerCommandText')
    commands = {
        '/p2day': [('SetWorldTime', 12)], '/p2night': [('SetWorldTime', 22)],
        '/p2base': [('SetPlayerSkin', player, 7)], '/p2skin': [('SetPlayerSkin', player, 20001)],
        '/p2world0': [('SetPlayerVirtualWorld', player, 0)], '/p2world1': [('SetPlayerVirtualWorld', player, 1)],
        '/p2delete': [('DestroyObject', ('global', 0)), ('DestroyObject', ('global', 4))],
        '/p2vdelete': [('DestroyVehicle', ('global', 8))],
        '/p2car': [('PutPlayerInVehicle', player, ('global', 8), 0)],
        '/p2pass': [('PutPlayerInVehicle', player, ('global', 8), 1)],
        '/p2exit': [('RemovePlayerFromVehicle', player)],
        '/p2vreset': [('SetVehiclePos', ('global', 8), f(1959), f(1348), f(15.5))],
        '/p2home': [('SetPlayerPos', player, f(1958.3783), f(1343.1572), f(15.3746))],
        '/p2gun': [('GivePlayerWeapon', player, 24, 100)],
        '/p2create': None, '/p2vcreate': None,
    }
    for command, actions in commands.items():
        call('strcmp', ('arg', 16), text(command), 1, 0x7fffffff)
        code.extend([0x36, 0]); skip = len(code) - 1
        occupied_branches = []
        if command in ('/p2vcreate', '/p2vdelete'):
            call('GetPlayerState', player)
            for state in (2, 3):
                code.extend([0x0c, state, 0x37, 0]); occupied_branches.append(len(code) - 1)
        if command == '/p2create': objects()
        elif command == '/p2vcreate': vehicles()
        else:
            for action in actions: call(*action)
        call('SendClientMessage', player, -1, text('P2 executed: ' + command))
        done()
        if occupied_branches:
            for branch in occupied_branches: code[branch] = len(code) * 4
            call('SendClientMessage', player, -1, text('P2: exit the vehicle before deleting or recreating it.'))
            done()
        code[skip] = len(code) * 4
    done(0)

entries = sorted((k, v) for k, v in publics.items() if k != 'main')
pub = 56; nat = pub + len(entries) * 8; lib = nat + len(natives) * 8
names = bytearray(struct.pack('<H', 31)); offsets = {}
for name in [n for n, _ in entries] + natives:
    offsets[name] = lib + len(names); names.extend(name.encode('ascii') + b'\0')
cod = (lib + len(names) + 3) & ~3
code_bytes = b''.join(struct.pack('<I', x & 0xffffffff) for x in code)
dat = cod + len(code_bytes); hea = dat + len(data); stp = hea + 65536
header = struct.pack('<iHBBhh11i', hea, 0xf1e0, 8, 8, 0, 8,
                     cod, dat, hea, stp, publics['main'], pub, nat, lib, lib, lib, lib)
tables = b''.join(struct.pack('<II', address, offsets[name]) for name, address in entries)
tables += b''.join(struct.pack('<II', 0, offsets[name]) for name in natives)
image = header + tables + names
image += bytes(cod - len(image)) + code_bytes + data
args.output.parent.mkdir(parents=True, exist_ok=True)
args.output.write_bytes(image)
print(f'Created diagnostic AMX: {args.output} ({len(image)} bytes, {len(natives)} native bindings)')
