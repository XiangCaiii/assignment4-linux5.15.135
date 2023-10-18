cmd_crypto/ecrdsa_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/ecrdsa_generic.ko crypto/ecrdsa_generic.o crypto/ecrdsa_generic.mod.o;  true
