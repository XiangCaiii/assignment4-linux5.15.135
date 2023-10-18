cmd_crypto/zstd.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/zstd.ko crypto/zstd.o crypto/zstd.mod.o;  true
