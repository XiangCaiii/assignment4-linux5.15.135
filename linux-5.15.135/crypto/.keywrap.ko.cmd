cmd_crypto/keywrap.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/keywrap.ko crypto/keywrap.o crypto/keywrap.mod.o;  true
