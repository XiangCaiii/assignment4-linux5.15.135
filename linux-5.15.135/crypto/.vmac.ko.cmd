cmd_crypto/vmac.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/vmac.ko crypto/vmac.o crypto/vmac.mod.o;  true
