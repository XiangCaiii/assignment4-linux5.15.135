cmd_crypto/twofish_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/twofish_generic.ko crypto/twofish_generic.o crypto/twofish_generic.mod.o;  true
