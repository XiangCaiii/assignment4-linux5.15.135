cmd_block/bfq.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o block/bfq.ko block/bfq.o block/bfq.mod.o;  true
