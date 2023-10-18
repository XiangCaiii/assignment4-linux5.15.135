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
	{ 0xbec8ac2e, "simple_attr_release" },
	{ 0x28e3a286, "debugfs_attr_write" },
	{ 0x85719c71, "debugfs_attr_read" },
	{ 0x8dcdbddb, "no_llseek" },
	{ 0x2176e42a, "hwpoison_filter_memcg" },
	{ 0x6ba36c6a, "hwpoison_filter_flags_value" },
	{ 0x1ed56afa, "debugfs_create_u64" },
	{ 0x15ea2648, "hwpoison_filter_flags_mask" },
	{ 0x326cefe5, "hwpoison_filter_dev_minor" },
	{ 0x8d7e3373, "hwpoison_filter_dev_major" },
	{ 0xddc9337, "debugfs_create_u32" },
	{ 0x7b7f1689, "debugfs_create_file" },
	{ 0x1f8be488, "debugfs_create_dir" },
	{ 0xddbe2d7c, "debugfs_remove" },
	{ 0x7918d817, "memory_failure" },
	{ 0x92997ed8, "_printk" },
	{ 0x24b1a448, "hwpoison_filter" },
	{ 0x9bc07a3a, "PageHuge" },
	{ 0x22ee2896, "shake_page" },
	{ 0xcc9268fc, "hwpoison_filter_enable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xcb2f2b52, "boot_cpu_data" },
	{ 0xb907513f, "unpoison_memory" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa564ec0, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E44FAA76041EF24176371B2");
