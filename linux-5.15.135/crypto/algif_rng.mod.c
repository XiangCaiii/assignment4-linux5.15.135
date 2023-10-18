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
	{ 0x59722e26, "sock_no_sendpage" },
	{ 0xfcd873f9, "sock_no_mmap" },
	{ 0x11f2a8c, "sock_no_sendmsg" },
	{ 0x75d03dfb, "sock_no_shutdown" },
	{ 0xdebed47, "sock_no_listen" },
	{ 0x5e5969b1, "sock_no_ioctl" },
	{ 0xc8082580, "sock_no_getname" },
	{ 0x3ef4bcad, "sock_no_accept" },
	{ 0xd6232915, "sock_no_socketpair" },
	{ 0xc64a8c3b, "sock_no_connect" },
	{ 0xd254801, "sock_no_bind" },
	{ 0xcfd1d429, "af_alg_release" },
	{ 0x83fddc95, "af_alg_unregister_type" },
	{ 0x29933b1e, "af_alg_register_type" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xde244c89, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x93c86e6, "crypto_stats_rng_generate" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xad86c540, "crypto_stats_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xd79d841b, "crypto_alloc_rng" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x90414325, "crypto_rng_reset" },
	{ 0x7aeb5a0c, "af_alg_release_parent" },
	{ 0xb4e12045, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa731b047, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "C2EE585A86B2D95CD64DC74");
