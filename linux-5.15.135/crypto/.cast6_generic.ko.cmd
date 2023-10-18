cmd_crypto/cast6_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/cast6_generic.ko crypto/cast6_generic.o crypto/cast6_generic.mod.o;  true
