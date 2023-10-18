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
	{ 0x3dbd49f, "param_ops_int" },
	{ 0xefd52dae, "crypto_unregister_rngs" },
	{ 0x5e31e29a, "crypto_register_rngs" },
	{ 0xfb578fc5, "memset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xcec8987a, "crypto_cipher_encrypt_one" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x635e26ec, "crypto_alloc_base" },
	{ 0x92997ed8, "_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfcd39eb5, "crypto_cipher_setkey" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2D60F7AE5307BCCEC2FADA9");
