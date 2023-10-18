cmd_crypto/aes_ti.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/aes_ti.ko crypto/aes_ti.o crypto/aes_ti.mod.o;  true
