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
	{ 0x248b5d76, "trace_event_raw_init" },
	{ 0xf4a5b680, "trace_event_reg" },
	{ 0x824f4e64, "kthread_stop" },
	{ 0x9f8dc2c0, "trace_array_destroy" },
	{ 0xcf51ddc5, "wake_up_process" },
	{ 0xbc09c45c, "kthread_create_on_node" },
	{ 0xa2e1b3ef, "trace_printk_init_buffers" },
	{ 0x779af2b4, "trace_array_get_by_name" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xee869ce4, "trace_array_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xff829abc, "trace_array_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf36cd71b, "current_task" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xda35ca25, "trace_array_set_clr_event" },
	{ 0xc4692eb1, "bpf_trace_run2" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x1725b144, "trace_event_printf" },
	{ 0x303edd48, "trace_raw_output_prep" },
	{ 0xc6e89536, "trace_event_ignore_this_pid" },
	{ 0x19dc1d4, "event_triggers_call" },
	{ 0xe7853240, "trace_event_buffer_commit" },
	{ 0xc85c6407, "trace_event_buffer_reserve" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x96305c58, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4417FEA038FEA2FF0D7276E");
