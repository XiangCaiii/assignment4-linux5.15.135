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
	{ 0x5b17be06, "cast_s4" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0x5609ce41, "cast_s2" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8a1a262a, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0x932ebd0a, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "cast_common");


MODULE_INFO(srcversion, "D44CA34DAEC40DDFD8EABC9");
