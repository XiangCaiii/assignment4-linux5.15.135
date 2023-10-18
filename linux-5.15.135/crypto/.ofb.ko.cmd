cmd_crypto/ofb.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/ofb.ko crypto/ofb.o crypto/ofb.mod.o;  true
