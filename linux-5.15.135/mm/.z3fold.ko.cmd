cmd_mm/z3fold.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o mm/z3fold.ko mm/z3fold.o mm/z3fold.mod.o;  true
