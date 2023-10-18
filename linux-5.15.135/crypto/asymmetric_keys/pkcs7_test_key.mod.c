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
	{ 0x306fe97b, "generic_key_instantiate" },
	{ 0x8ead800c, "user_free_preparse" },
	{ 0xf5832da, "user_read" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9a0f21f1, "user_describe" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7d70720b, "register_key_type" },
	{ 0x1e424d61, "user_preparse" },
	{ 0x175ffbd8, "unregister_key_type" },
	{ 0xd6459ddc, "user_revoke" },
	{ 0x7e7e6688, "param_ops_uint" },
	{ 0x229471b6, "user_destroy" },
	{ 0x26a93eb2, "verify_pkcs7_signature" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6A833E4ADEC602483AED5BA");
