#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf342113b, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xe7d7ffcf, "crypto_register_kpp" },
	{ 0xed4ae15e, "ecc_make_pub_key" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x671f7aa5, "ecc_is_key_valid" },
	{ 0xfb578fc5, "memset" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd6315f31, "ecc_gen_privkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4e9b7c5, "crypto_unregister_kpp" },
	{ 0xa76b31a2, "crypto_ecdh_shared_secret" },
};

MODULE_INFO(depends, "ecc");


MODULE_INFO(srcversion, "06F6FEBCDE77D1025170700");
