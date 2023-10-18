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
	{ 0xc8082580, "sock_no_getname" },
	{ 0xd6232915, "sock_no_socketpair" },
	{ 0xc64a8c3b, "sock_no_connect" },
	{ 0xd254801, "sock_no_bind" },
	{ 0xcfd1d429, "af_alg_release" },
	{ 0x83fddc95, "af_alg_unregister_type" },
	{ 0x29933b1e, "af_alg_register_type" },
	{ 0xae34b74e, "af_alg_make_sg" },
	{ 0xca02e50b, "iov_iter_advance" },
	{ 0xcb09b83f, "af_alg_free_sg" },
	{ 0x7b14c022, "crypto_ahash_digest" },
	{ 0x93d10717, "crypto_stats_ahash_update" },
	{ 0xad86c540, "crypto_stats_get" },
	{ 0xc2752832, "crypto_ahash_finup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf2e272c1, "crypto_ahash_final" },
	{ 0xde244c89, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x95c7e755, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x76eec6ce, "af_alg_accept" },
	{ 0xfb578fc5, "memset" },
	{ 0xc7143b23, "release_sock" },
	{ 0x3600f38c, "lock_sock_nested" },
	{ 0x279f018c, "crypto_alloc_ahash" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xf669356a, "crypto_ahash_setkey" },
	{ 0x236abddd, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa731b047, "sock_kmalloc" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7aeb5a0c, "af_alg_release_parent" },
	{ 0xb4e12045, "sock_kfree_s" },
	{ 0x764487fb, "sock_kzfree_s" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "1D0C28D24FB7FB163BE04BA");
