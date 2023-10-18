cmd_crypto/des_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/des_generic.ko crypto/des_generic.o crypto/des_generic.mod.o;  true
