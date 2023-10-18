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
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x55537eda, "crypto_aead_encrypt" },
	{ 0x4215feb1, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x97651f15, "skcipher_register_instance" },
	{ 0x2dc955ac, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x1b74c99e, "crypto_shash_alg_has_setkey" },
	{ 0x1070b688, "crypto_grab_aead" },
	{ 0x92997ed8, "_printk" },
	{ 0xd32e3216, "crypto_mod_put" },
	{ 0x1cdfc157, "crypto_alg_mod_lookup" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x33ce4df8, "crypto_grab_skcipher" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0xd2a02369, "crypto_shash_tfm_digest" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0x26078356, "crypto_aead_setkey" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfcd39eb5, "crypto_cipher_setkey" },
	{ 0xa5e09d5b, "crypto_shash_finup" },
	{ 0xff5405ab, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x82317bec, "crypto_spawn_tfm2" },
	{ 0xaa21de5a, "crypto_alloc_shash" },
	{ 0x635e26ec, "crypto_alloc_base" },
	{ 0x22b63c4e, "crypto_drop_spawn" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0xcec8987a, "crypto_cipher_encrypt_one" },
	{ 0x8720683b, "crypto_aead_setauthsize" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "024720D8AE69829F0B396A1");
