cmd_crypto/lrw.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o;  true
