cmd_crypto/adiantum.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/adiantum.ko crypto/adiantum.o crypto/adiantum.mod.o;  true
