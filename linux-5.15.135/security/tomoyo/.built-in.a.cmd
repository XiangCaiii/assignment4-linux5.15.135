cmd_security/tomoyo/built-in.a := echo >/dev/null; rm -f security/tomoyo/built-in.a; ar cDPrST security/tomoyo/built-in.a security/tomoyo/audit.o security/tomoyo/common.o security/tomoyo/condition.o security/tomoyo/domain.o security/tomoyo/environ.o security/tomoyo/file.o security/tomoyo/gc.o security/tomoyo/group.o security/tomoyo/load_policy.o security/tomoyo/memory.o security/tomoyo/mount.o security/tomoyo/network.o security/tomoyo/realpath.o security/tomoyo/securityfs_if.o security/tomoyo/tomoyo.o security/tomoyo/util.o
