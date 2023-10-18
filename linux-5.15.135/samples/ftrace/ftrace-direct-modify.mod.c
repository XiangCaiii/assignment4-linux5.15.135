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
	{ 0x1000e51, "schedule" },
	{ 0xd1cac7bf, "unregister_ftrace_direct" },
	{ 0x824f4e64, "kthread_stop" },
	{ 0xcf51ddc5, "wake_up_process" },
	{ 0xbc09c45c, "kthread_create_on_node" },
	{ 0x29366b61, "register_ftrace_direct" },
	{ 0xb1e25684, "__trace_bputs" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6e00fcfb, "modify_ftrace_direct" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf36cd71b, "current_task" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9EE27A76EDF5C3AC91C9624");
