cmd_crypto/tcrypt.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o;  true
