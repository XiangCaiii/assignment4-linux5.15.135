cmd_crypto/twofish_common.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/twofish_common.ko crypto/twofish_common.o crypto/twofish_common.mod.o;  true
