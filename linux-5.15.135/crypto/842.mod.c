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
	{ 0x2b9cfd98, "crypto_unregister_scomp" },
	{ 0x932ebd0a, "crypto_unregister_alg" },
	{ 0x815a6862, "crypto_register_scomp" },
	{ 0x8a1a262a, "crypto_register_alg" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf048a91, "sw842_compress" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa4adedf1, "sw842_decompress" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "842_compress,842_decompress");


MODULE_INFO(srcversion, "8C804F0EED60A0D5A872383");
