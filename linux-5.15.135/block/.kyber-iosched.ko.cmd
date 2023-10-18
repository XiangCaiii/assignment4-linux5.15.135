cmd_block/kyber-iosched.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o block/kyber-iosched.ko block/kyber-iosched.o block/kyber-iosched.mod.o;  true
