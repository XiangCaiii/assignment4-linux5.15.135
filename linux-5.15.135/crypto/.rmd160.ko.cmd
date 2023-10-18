cmd_crypto/rmd160.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o;  true
