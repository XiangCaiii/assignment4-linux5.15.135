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
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x7f559279, "crypto_register_akcipher" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x7c0fbb00, "vli_mod_mult_slow" },
	{ 0x92668805, "vli_cmp" },
	{ 0xb10fc19e, "ecc_get_curve" },
	{ 0x1a5faa3a, "vli_mod_inv" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfb578fc5, "memset" },
	{ 0x4c281912, "vli_is_zero" },
	{ 0x188a1647, "ecc_is_pubkey_valid_full" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xd1ccab8e, "crypto_unregister_akcipher" },
	{ 0x9263b417, "ecc_point_mult_shamir" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f6efabd, "vli_sub" },
};

MODULE_INFO(depends, "ecc");


MODULE_INFO(srcversion, "2BA1F3D976CFC8660C2C857");
