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
	{ 0x3626580e, "__SCK__tp_func_block_rq_insert" },
	{ 0x248b5d76, "trace_event_raw_init" },
	{ 0xf4a5b680, "trace_event_reg" },
	{ 0x6518f0d5, "blk_mq_debugfs_rq_show" },
	{ 0x59130756, "elv_unregister" },
	{ 0xf6cc5953, "elv_register" },
	{ 0xff14507e, "blk_bio_list_merge" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x85bfc5f9, "__SCT__tp_func_block_rq_insert" },
	{ 0xc345137e, "__tracepoint_block_rq_insert" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdb82f71f, "sbitmap_init_node" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x8a439646, "blk_stat_enable_accounting" },
	{ 0xf513389e, "kobject_put" },
	{ 0x6f95bb84, "sbitmap_queue_init_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xead6c715, "kmem_cache_alloc_node_trace" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x56b17141, "elevator_alloc" },
	{ 0x40d349b6, "sbitmap_queue_resize" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x399eda0f, "sbitmap_add_wait_queue" },
	{ 0x7908cd65, "pv_ops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xc76f8048, "__sbitmap_queue_get" },
	{ 0x4f193cf2, "blk_mq_run_hw_queue" },
	{ 0xe8199ff8, "sbitmap_del_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1a9754cf, "sbitmap_queue_min_shallow_depth" },
	{ 0xef744bb5, "sbitmap_queue_clear" },
	{ 0x3db48927, "sbitmap_any_bit_set" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc79d2181, "sbitmap_queue_show" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x110107a1, "seq_printf" },
	{ 0xc4692eb1, "bpf_trace_run2" },
	{ 0xdb106a68, "bpf_trace_run3" },
	{ 0x1558d276, "bpf_trace_run7" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x1725b144, "trace_event_printf" },
	{ 0x303edd48, "trace_raw_output_prep" },
	{ 0xc6e89536, "trace_event_ignore_this_pid" },
	{ 0x19dc1d4, "event_triggers_call" },
	{ 0xe7853240, "trace_event_buffer_commit" },
	{ 0xc85c6407, "trace_event_buffer_reserve" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x96305c58, "perf_trace_run_bpf_submit" },
	{ 0x754d539c, "strlen" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19142DA812B1F7FA9DD7B17");
