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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf342113b, "module_layout" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x26dcdb05, "dma_find_channel" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd342c3dc, "dmaengine_unmap_put" },
	{ 0x2233db24, "async_tx_submit" },
	{ 0xfd3307b8, "dmaengine_get_unmap_data" },
	{ 0x3ee461ab, "async_memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc6378ddc, "__async_tx_find_channel" },
	{ 0xd22aa2b9, "async_xor_offs" },
	{ 0x5b362ed9, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0x1dca4376, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x59a2712d, "raid6_gfinv" },
	{ 0x415a19c9, "async_gen_syndrome" },
	{ 0xd91319d6, "raid6_gfmul" },
	{ 0xcc4ee841, "raid6_gfexi" },
	{ 0x1803a6ed, "raid6_2data_recov" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_memcpy,async_xor,async_pq");


MODULE_INFO(srcversion, "062F9612BD09B480935227F");
