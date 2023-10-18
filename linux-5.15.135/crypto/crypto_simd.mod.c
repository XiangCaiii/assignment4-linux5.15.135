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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf342113b, "module_layout" },
	{ 0x7aed0899, "crypto_alloc_skcipher" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x5b43dc2d, "cryptd_free_skcipher" },
	{ 0xee6672d3, "crypto_unregister_skciphers" },
	{ 0xe591165e, "cryptd_free_aead" },
	{ 0xa5a8ced0, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaec9e253, "crypto_register_skciphers" },
	{ 0x3275d3a8, "crypto_unregister_skcipher" },
	{ 0xf7e4c626, "cryptd_aead_queued" },
	{ 0x55537eda, "crypto_aead_encrypt" },
	{ 0x6c229154, "crypto_register_skcipher" },
	{ 0x26078356, "crypto_aead_setkey" },
	{ 0x8cb6beca, "cryptd_alloc_skcipher" },
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x76ab2ada, "cryptd_skcipher_child" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x9335dd50, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0x4215feb1, "crypto_aead_decrypt" },
	{ 0x8720683b, "crypto_aead_setauthsize" },
	{ 0x529c9d1e, "crypto_alloc_aead" },
	{ 0xcb0356c8, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a8eba, "crypto_unregister_aead" },
	{ 0xc1451b40, "crypto_register_aead" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xc8880f23, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x280bc1e1, "cryptd_alloc_aead" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
