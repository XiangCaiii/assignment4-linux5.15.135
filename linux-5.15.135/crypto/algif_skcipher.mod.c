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
	{ 0xfcd873f9, "sock_no_mmap" },
	{ 0x75d03dfb, "sock_no_shutdown" },
	{ 0xdebed47, "sock_no_listen" },
	{ 0x5e5969b1, "sock_no_ioctl" },
	{ 0xc8c4ee57, "af_alg_poll" },
	{ 0xc8082580, "sock_no_getname" },
	{ 0x3ef4bcad, "sock_no_accept" },
	{ 0xd6232915, "sock_no_socketpair" },
	{ 0xc64a8c3b, "sock_no_connect" },
	{ 0xd254801, "sock_no_bind" },
	{ 0xcfd1d429, "af_alg_release" },
	{ 0x83fddc95, "af_alg_unregister_type" },
	{ 0x29933b1e, "af_alg_register_type" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x95c7e755, "sk_free" },
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x236abddd, "crypto_req_done" },
	{ 0x334a717e, "af_alg_wmem_wakeup" },
	{ 0xb3bf75cf, "af_alg_get_rsgl" },
	{ 0x109dd4a7, "af_alg_alloc_areq" },
	{ 0x32916eb, "af_alg_wait_for_data" },
	{ 0x39c6a239, "af_alg_free_resources" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0xf128cbb0, "af_alg_async_cb" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xba8650f4, "af_alg_count_tsgl" },
	{ 0x1a74b9ec, "af_alg_sendpage" },
	{ 0xc7143b23, "release_sock" },
	{ 0x3600f38c, "lock_sock_nested" },
	{ 0x7aed0899, "crypto_alloc_skcipher" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xa731b047, "sock_kmalloc" },
	{ 0x7aeb5a0c, "af_alg_release_parent" },
	{ 0xb4e12045, "sock_kfree_s" },
	{ 0x764487fb, "sock_kzfree_s" },
	{ 0x7796794a, "af_alg_pull_tsgl" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf59f21da, "af_alg_sendmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "190A33BF4F1D68180B21D49");
