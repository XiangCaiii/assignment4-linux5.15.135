cmd_crypto/sm4_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/sm4_generic.ko crypto/sm4_generic.o crypto/sm4_generic.mod.o;  true
