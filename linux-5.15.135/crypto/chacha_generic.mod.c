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
	{ 0xee6672d3, "crypto_unregister_skciphers" },
	{ 0xaec9e253, "crypto_register_skciphers" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc5514aaf, "skcipher_walk_done" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x4f28d25d, "skcipher_walk_virt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "CA9645E79BB90334E04CEE3");
