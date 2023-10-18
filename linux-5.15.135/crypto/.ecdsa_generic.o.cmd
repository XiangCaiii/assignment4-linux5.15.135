cmd_crypto/ecdsa_generic.o := ld  -m elf_x86_64 -z noexecstack     -r -o crypto/ecdsa_generic.o crypto/ecdsa.o crypto/ecdsasignature.asn1.o
