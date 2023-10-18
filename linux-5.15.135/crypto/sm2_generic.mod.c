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
	{ 0xfe1a7a7b, "mpi_point_release" },
	{ 0xe0f450ad, "crypto_sm3_final" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x7f559279, "crypto_register_akcipher" },
	{ 0x8ff60436, "mpi_ec_add_points" },
	{ 0x91b774a1, "mpi_scanval" },
	{ 0x95843030, "mpi_ec_init" },
	{ 0x80d5e57a, "mpi_free" },
	{ 0xae7c231d, "mpi_cmp" },
	{ 0x38e1fde7, "mpi_set" },
	{ 0x6bcdedc0, "mpi_point_init" },
	{ 0x9bece81b, "mpi_cmp_ui" },
	{ 0x6c205008, "mpi_print" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a83fb45, "mpi_point_free_parts" },
	{ 0x291876f3, "mpi_ec_get_affine" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xd1ccab8e, "crypto_unregister_akcipher" },
	{ 0x98503a63, "mpi_alloc" },
	{ 0x4c4f603, "mpi_get_buffer" },
	{ 0x4efcf021, "mpi_normalize" },
	{ 0x9eebdde7, "mpi_point_new" },
	{ 0x3450ad94, "mpi_set_ui" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5fa625ed, "mpi_ec_mul_point" },
	{ 0x37a0cba, "kfree" },
	{ 0xceb1f126, "mpi_read_raw_data" },
	{ 0xf3797506, "mpi_ec_deinit" },
	{ 0xbb5e3aaa, "crypto_sm3_update" },
	{ 0xb6410433, "mpi_addm" },
	{ 0xdbf7cb70, "mpi_get_nbits" },
};

MODULE_INFO(depends, "sm3_generic");


MODULE_INFO(srcversion, "7F2B50168C73C2A216D03F1");
