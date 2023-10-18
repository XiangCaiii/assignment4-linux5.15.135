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
	{ 0x7430f97c, "tpm_key_create" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc75a4183, "unregister_asymmetric_key_parser" },
	{ 0x500ecf82, "asym_tpm_subtype" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x21b9db4b, "__module_get" },
	{ 0xc73573a6, "register_asymmetric_key_parser" },
};

MODULE_INFO(depends, "asym_tpm");


MODULE_INFO(srcversion, "1D375B03C709414D0072658");
