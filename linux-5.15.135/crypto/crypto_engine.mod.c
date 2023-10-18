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
	{ 0xf9a482f9, "msleep" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x6da16d6d, "sched_set_fifo" },
	{ 0xd6841950, "crypto_dequeue_request" },
	{ 0xcd2aaf7e, "kthread_destroy_worker" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x61ffc8c5, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9f926483, "_dev_err" },
	{ 0x7b272a75, "crypto_enqueue_request_head" },
	{ 0xa1e824f9, "crypto_enqueue_request" },
	{ 0xc28841a5, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb045f723, "kthread_queue_work" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x76043d21, "devm_kmalloc" },
	{ 0xd4eb09b3, "kthread_create_worker" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "289CA5684C185668D366803");
