cmd_crypto/pcbc.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o;  true
