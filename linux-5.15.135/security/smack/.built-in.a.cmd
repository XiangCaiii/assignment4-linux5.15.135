cmd_security/smack/built-in.a := echo >/dev/null; rm -f security/smack/built-in.a; ar cDPrST security/smack/built-in.a security/smack/smack_lsm.o security/smack/smack_access.o security/smack/smackfs.o security/smack/smack_netfilter.o
