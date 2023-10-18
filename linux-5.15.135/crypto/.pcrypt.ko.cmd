cmd_crypto/pcrypt.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/pcrypt.ko crypto/pcrypt.o crypto/pcrypt.mod.o;  true
