cmd_crypto/sm2_generic.o := ld  -m elf_x86_64 -z noexecstack     -r -o crypto/sm2_generic.o crypto/sm2signature.asn1.o crypto/sm2.o
