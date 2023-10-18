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
	{ 0x7aed0899, "crypto_alloc_skcipher" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0xeea509bb, "ahash_register_instance" },
	{ 0xd6841950, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x6c1bcc33, "shash_ahash_digest" },
	{ 0x33ce4df8, "crypto_grab_skcipher" },
	{ 0xf1842fa, "crypto_unregister_template" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4557022e, "crypto_shash_final" },
	{ 0xd48b94c, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651f15, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x1b74c99e, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8d45e62f, "crypto_grab_shash" },
	{ 0xfb578fc5, "memset" },
	{ 0x1070b688, "crypto_grab_aead" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6e0b7ae2, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5f6f6ea4, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x22b63c4e, "crypto_drop_spawn" },
	{ 0x26078356, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa1e824f9, "crypto_enqueue_request" },
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0x8720683b, "crypto_aead_setauthsize" },
	{ 0x529c9d1e, "crypto_alloc_aead" },
	{ 0x82317bec, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2e7ddf9, "shash_ahash_update" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e7e6688, "param_ops_uint" },
	{ 0x2dc955ac, "aead_register_instance" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x279f018c, "crypto_alloc_ahash" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC77B79DA871D0D3F8BA23D");
