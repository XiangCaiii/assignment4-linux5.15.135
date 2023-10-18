cmd_crypto/cfb.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/cfb.ko crypto/cfb.o crypto/cfb.mod.o;  true
