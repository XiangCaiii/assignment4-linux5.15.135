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
	{ 0x7169b320, "crypto_unregister_templates" },
	{ 0x69ab997d, "crypto_register_templates" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc2752832, "crypto_ahash_finup" },
	{ 0x93d10717, "crypto_stats_ahash_update" },
	{ 0xad86c540, "crypto_stats_get" },
	{ 0x55537eda, "crypto_aead_encrypt" },
	{ 0x4215feb1, "crypto_aead_decrypt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1070b688, "crypto_grab_aead" },
	{ 0x40f2f973, "shash_register_instance" },
	{ 0x614b1532, "shash_free_singlespawn_instance" },
	{ 0x55885eee, "crypto_inst_setname" },
	{ 0xcbdf1e87, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2dc955ac, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x33ce4df8, "crypto_grab_skcipher" },
	{ 0x46b80c87, "crypto_grab_ahash" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xf43471e6, "crypto_spawn_tfm" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xcec8987a, "crypto_cipher_encrypt_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfcd39eb5, "crypto_cipher_setkey" },
	{ 0xf669356a, "crypto_ahash_setkey" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x22b63c4e, "crypto_drop_spawn" },
	{ 0x82317bec, "crypto_spawn_tfm2" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x26078356, "crypto_aead_setkey" },
	{ 0x8720683b, "crypto_aead_setauthsize" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "869B2F88148A6CFCBE87A38");
