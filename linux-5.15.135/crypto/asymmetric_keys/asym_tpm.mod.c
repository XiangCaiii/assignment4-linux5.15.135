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
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf895a9fd, "crypto_stats_akcipher_verify" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x110107a1, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x36253063, "tpm_is_tpm2" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc4776689, "crypto_stats_akcipher_encrypt" },
	{ 0x79470a2c, "TSS_authhmac" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x35d46f39, "crypto_alloc_akcipher" },
	{ 0xc4a72936, "trusted_tpm_send" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xde6f1851, "TSS_checkhmac1" },
	{ 0x236abddd, "crypto_req_done" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2b8005b5, "tpm_get_random" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad86c540, "crypto_stats_get" },
	{ 0x73cc8631, "oiap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B0ADFF8C9F79F3CBEB5BC4A");
