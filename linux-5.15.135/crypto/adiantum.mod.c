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
	{ 0x92997ed8, "_printk" },
	{ 0x97651f15, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d45e62f, "crypto_grab_shash" },
	{ 0xcbdf1e87, "crypto_grab_spawn" },
	{ 0x33ce4df8, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5f6f6ea4, "crypto_shash_setkey" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xfcd39eb5, "crypto_cipher_setkey" },
	{ 0x236abddd, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f1fc1dc, "crypto_skcipher_setkey" },
	{ 0xcec8987a, "crypto_cipher_encrypt_one" },
	{ 0xcf9d927e, "crypto_skcipher_encrypt" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x65e360e5, "crypto_cipher_decrypt_one" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x37a0cba, "kfree" },
	{ 0x22b63c4e, "crypto_drop_spawn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4557022e, "crypto_shash_final" },
	{ 0x9ad3ffd0, "sg_miter_stop" },
	{ 0xff5405ab, "crypto_shash_update" },
	{ 0x8205a660, "sg_miter_next" },
	{ 0x40aac926, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf43471e6, "crypto_spawn_tfm" },
	{ 0x82317bec, "crypto_spawn_tfm2" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x557d8cc5, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E2DD3E9C82110E8C4F75C22");
