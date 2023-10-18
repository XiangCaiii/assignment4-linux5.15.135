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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x69acdf38, "memcpy" },
	{ 0x40f2f973, "shash_register_instance" },
	{ 0x55885eee, "crypto_inst_setname" },
	{ 0x614b1532, "shash_free_singlespawn_instance" },
	{ 0xcbdf1e87, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xf43471e6, "crypto_spawn_tfm" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xfb578fc5, "memset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcec8987a, "crypto_cipher_encrypt_one" },
	{ 0xfcd39eb5, "crypto_cipher_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47CAEC5189F831A8FD50774");
