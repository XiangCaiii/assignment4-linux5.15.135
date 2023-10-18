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
	{ 0xf1842fa, "crypto_unregister_template" },
	{ 0x6e0b7ae2, "crypto_register_template" },
	{ 0x2dc955ac, "aead_register_instance" },
	{ 0x57b68161, "aead_exit_geniv" },
	{ 0xcbc4676d, "aead_init_geniv" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf4634247, "aead_geniv_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x55537eda, "crypto_aead_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4215feb1, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1076131CD0C90A1E35F85A7");
