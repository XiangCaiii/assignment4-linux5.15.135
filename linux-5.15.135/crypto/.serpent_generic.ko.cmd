cmd_crypto/serpent_generic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/serpent_generic.ko crypto/serpent_generic.o crypto/serpent_generic.mod.o;  true
