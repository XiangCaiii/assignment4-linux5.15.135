cmd_crypto/ecrdsa_generic.o := ld  -m elf_x86_64 -z noexecstack     -r -o crypto/ecrdsa_generic.o crypto/ecrdsa.o crypto/ecrdsa_params.asn1.o crypto/ecrdsa_pub_key.asn1.o
