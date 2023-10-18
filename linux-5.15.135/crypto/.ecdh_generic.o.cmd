cmd_crypto/ecdh_generic.o := ld  -m elf_x86_64 -z noexecstack     -r -o crypto/ecdh_generic.o crypto/ecdh.o crypto/ecdh_helper.o
