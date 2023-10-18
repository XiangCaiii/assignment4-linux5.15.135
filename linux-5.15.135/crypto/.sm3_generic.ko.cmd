cmd_crypto/sm3_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/sm3_generic.ko crypto/sm3_generic.o crypto/sm3_generic.mod.o;  true
