cmd_crypto/nhpoly1305.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/nhpoly1305.ko crypto/nhpoly1305.o crypto/nhpoly1305.mod.o;  true
