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
	{ 0x377e70f1, "kset_unregister" },
	{ 0x6e0b7ae2, "crypto_register_template" },
	{ 0x74754bd, "kset_create_and_add" },
	{ 0xb00da60c, "kernel_kobj" },
	{ 0x82317bec, "crypto_spawn_tfm2" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2dc955ac, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1070b688, "crypto_grab_aead" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xaa0e7ec9, "padata_alloc_shell" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xad55ef75, "padata_free" },
	{ 0xe4d788f3, "kobject_uevent" },
	{ 0x2bdfa5ce, "kobject_add" },
	{ 0x6461a8d3, "padata_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x557a617c, "padata_free_shell" },
	{ 0x22b63c4e, "crypto_drop_spawn" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0x26078356, "crypto_aead_setkey" },
	{ 0x8720683b, "crypto_aead_setauthsize" },
	{ 0x55537eda, "crypto_aead_encrypt" },
	{ 0x4e9e7108, "padata_do_parallel" },
	{ 0x4215feb1, "crypto_aead_decrypt" },
	{ 0xc5cdfd4a, "padata_do_serial" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A189F0F00A2CC8B8914FCA");
