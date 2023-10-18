cmd_crypto/blake2b_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/blake2b_generic.ko crypto/blake2b_generic.o crypto/blake2b_generic.mod.o;  true
