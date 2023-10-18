cmd_crypto/sha3_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/sha3_generic.ko crypto/sha3_generic.o crypto/sha3_generic.mod.o;  true
