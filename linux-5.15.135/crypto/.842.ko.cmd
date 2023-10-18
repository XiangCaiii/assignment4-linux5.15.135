cmd_crypto/842.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/842.ko crypto/842.o crypto/842.mod.o;  true
