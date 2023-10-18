cmd_crypto/michael_mic.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o;  true
