cmd_crypto/xxhash_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/xxhash_generic.ko crypto/xxhash_generic.o crypto/xxhash_generic.mod.o;  true
