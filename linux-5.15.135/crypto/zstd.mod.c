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
	{ 0x2b9cfd98, "crypto_unregister_scomp" },
	{ 0x932ebd0a, "crypto_unregister_alg" },
	{ 0x815a6862, "crypto_register_scomp" },
	{ 0x8a1a262a, "crypto_register_alg" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x578a408b, "ZSTD_initDCtx" },
	{ 0xa5ac3e33, "ZSTD_DCtxWorkspaceBound" },
	{ 0xe27a2dd, "ZSTD_initCCtx" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xefe4f679, "ZSTD_CCtxWorkspaceBound" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x999e8297, "vfree" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1a107de2, "ZSTD_compressCCtx" },
	{ 0xe41476d9, "ZSTD_getParams" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1a1bac9c, "ZSTD_decompressDCtx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "zstd_compress");


MODULE_INFO(srcversion, "CE7F540C652CDAD26289554");
