# P1 execution ledger

Closed: 2026-11-03. P1.1 through P1.7 are implemented and passed the deterministic
offline gate. The final state supersedes all earlier interim checkpoints.

- [Completion report](P1_REPORT.md): seven package results, exact limitations,
  validation and remaining priority order.
- [Current plan](PROJECT_PLAN.md): P0-P4 divisions, current status and historical
  starting snapshot.
- [Evidence register](p1/evidence.json): package owners and original byte windows.
- [Validation](p1/validation/build.json): commands, source fingerprint and Win32
  artifact identities; adjacent CSV inventories are the current static audit.
- [Transport detail](transport/P1_1.md): completed P1.1 implementation and tests.

P0 is committed as `e902f98`; P1 is committed as `a418882`. Integration
commit `8723721` preserves the newer upstream work; both histories are pushed.
See [current integration evidence](integration/README.md). No new build was
deployed during integration. No GTA, clone injection or live game server was launched. Actual
cross-implementation/runtime validation remains pending explicit authorization.
