cmd_crypto/sm2_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/sm2_generic.ko crypto/sm2_generic.o crypto/sm2_generic.mod.o;  true
