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
	{ 0x88ae354f, "kill_anon_super" },
	{ 0x751a8c13, "zpool_unregister_driver" },
	{ 0x2098d06b, "kern_unmount" },
	{ 0xb1eb96cc, "zpool_register_driver" },
	{ 0x212447cc, "kern_mount" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17f298b1, "__put_page" },
	{ 0x35d7c4, "put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfa2ceeee, "page_mapping" },
	{ 0x98e257b0, "kmem_cache_free" },
	{ 0x30acd213, "__SetPageMovable" },
	{ 0x93ec61dc, "alloc_pages" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa57aeb1, "kmem_cache_alloc" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x49608959, "migrate_disable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7908cd65, "pv_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b725b7c, "__lock_page" },
	{ 0xd88a03fd, "unlock_page" },
	{ 0xf3de3c96, "__ClearPageMovable" },
	{ 0x800473f, "__cond_resched" },
	{ 0xc00291c, "__free_pages" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x8088df51, "alloc_anon_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x493697d3, "kmem_cache_create" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0xca6f0fa0, "init_pseudo" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb22280fe, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfd1947f1, "kmem_cache_destroy" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "84DB9F961A82CFBBA84F2AD");
