cmd_crypto/ecdsa_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/ecdsa_generic.ko crypto/ecdsa_generic.o crypto/ecdsa_generic.mod.o;  true
