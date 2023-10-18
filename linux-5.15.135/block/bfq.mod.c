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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xf513389e, "kobject_put" },
	{ 0xfd1947f1, "kmem_cache_destroy" },
	{ 0x57be80c1, "kmem_cache_alloc_node" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0xaab90d8d, "blk_mq_run_hw_queues" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x6be0b84b, "blkcg_policy_register" },
	{ 0x110107a1, "seq_printf" },
	{ 0xb35c63a5, "wbt_enable_default" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xad46b56a, "elv_rb_latter_request" },
	{ 0xfeb362b1, "bdi_dev_name" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x24799668, "blkg_conf_prep" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd648e64, "elv_rqhash_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7908cd65, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0x7fbb556e, "elv_rb_del" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x840bab38, "elv_rb_find" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x847a5b9c, "bio_associate_blkg_from_css" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x788306d6, "blk_mq_sched_try_insert_merge" },
	{ 0x2d32fd8d, "blkg_prfill_rwstat" },
	{ 0x56b17141, "elevator_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf36cd71b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x59130756, "elv_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaa77e660, "blkg_conf_finish" },
	{ 0x98e257b0, "kmem_cache_free" },
	{ 0xbdacc3bb, "elv_rqhash_add" },
	{ 0xc345137e, "__tracepoint_block_rq_insert" },
	{ 0x755f2721, "of_css" },
	{ 0x3626580e, "__SCK__tp_func_block_rq_insert" },
	{ 0xb6f5bc02, "ioc_lookup_icq" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf6cc5953, "elv_register" },
	{ 0x619180fd, "__blkg_prfill_rwstat" },
	{ 0xead6c715, "kmem_cache_alloc_node_trace" },
	{ 0x1a504860, "blk_mq_free_request" },
	{ 0x19edd064, "blkg_rwstat_exit" },
	{ 0x3c45f5b, "elv_bio_merge_ok" },
	{ 0xf5af34f0, "__trace_note_message" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7de6cc23, "io_cgrp_subsys_on_dfl_key" },
	{ 0xcb599812, "blkcg_policy_unregister" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x493697d3, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7cf8811, "blkcg_deactivate_policy" },
	{ 0xeaa699c4, "__blkg_prfill_u64" },
	{ 0xd287bd3c, "blkcg_print_blkgs" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x1a9754cf, "sbitmap_queue_min_shallow_depth" },
	{ 0x7fcdee02, "kernfs_path_from_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x97e483ab, "elv_rb_former_request" },
	{ 0xca9360b5, "rb_next" },
	{ 0x6a351127, "wbt_disable_default" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0xe4bbb2e3, "blk_mq_sched_try_merge" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x30fc87cc, "blkcg_activate_policy" },
	{ 0x941c4dc5, "blkg_rwstat_recursive_sum" },
	{ 0x56f922a6, "elv_rb_add" },
	{ 0x85bfc5f9, "__SCT__tp_func_block_rq_insert" },
	{ 0xaf0b6ba7, "blkg_rwstat_init" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2211A78A48530C654283120");
