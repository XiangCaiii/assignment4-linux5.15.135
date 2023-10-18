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
	{ 0x4cb43b7, "param_ops_charp" },
	{ 0x3dbd49f, "param_ops_int" },
	{ 0x7e7e6688, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0xf2e272c1, "crypto_ahash_final" },
	{ 0xf669356a, "crypto_ahash_setkey" },
	{ 0x279f018c, "crypto_alloc_ahash" },
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0x7aed0899, "crypto_alloc_skcipher" },
	{ 0x7b14c022, "crypto_ahash_digest" },
	{ 0x4215feb1, "crypto_aead_decrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x800473f, "__cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x55537eda, "crypto_aead_encrypt" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x26078356, "crypto_aead_setkey" },
	{ 0x236abddd, "crypto_req_done" },
	{ 0x92997ed8, "_printk" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8720683b, "crypto_aead_setauthsize" },
	{ 0x529c9d1e, "crypto_alloc_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93d10717, "crypto_stats_ahash_update" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xad86c540, "crypto_stats_get" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "99AF17152CCF3176E2A80C0");
