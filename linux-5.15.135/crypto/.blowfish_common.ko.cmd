cmd_crypto/blowfish_common.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/blowfish_common.ko crypto/blowfish_common.o crypto/blowfish_common.mod.o;  true
