cmd_crypto/md4.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o;  true
