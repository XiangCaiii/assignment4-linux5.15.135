cmd_crypto/asymmetric_keys/asym_tpm.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/asymmetric_keys/asym_tpm.ko crypto/asymmetric_keys/asym_tpm.o crypto/asymmetric_keys/asym_tpm.mod.o;  true
