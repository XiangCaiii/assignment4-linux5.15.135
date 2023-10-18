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
	{ 0x6005e518, "crypto_skcipher_decrypt" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x97651f15, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x55885eee, "crypto_inst_setname" },
	{ 0x33ce4df8, "crypto_grab_skcipher" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0x22b63c4e, "crypto_drop_spawn" },
	{ 0x82317bec, "crypto_spawn_tfm2" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc5514aaf, "skcipher_walk_done" },
	{ 0x4f28d25d, "skcipher_walk_virt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F48101A39C3550F9B214996");
