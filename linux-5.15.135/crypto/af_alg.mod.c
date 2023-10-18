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
	{ 0xc7143b23, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xac9cda6f, "kmalloc_caches" },
	{ 0x94d6bc55, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x35d7c4, "put_devmap_managed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0x7683cdd5, "iov_iter_revert" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x5e5969b1, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x130e4b40, "_copy_from_iter" },
	{ 0xc8082580, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0x93ec61dc, "alloc_pages" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x59722e26, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xfcd873f9, "sock_no_mmap" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8f591f9e, "sock_no_recvmsg" },
	{ 0xd6232915, "sock_no_socketpair" },
	{ 0x54e89a6a, "sk_alloc" },
	{ 0xf36cd71b, "current_task" },
	{ 0x3600f38c, "lock_sock_nested" },
	{ 0xc06abf3, "iov_iter_get_pages" },
	{ 0xdebed47, "sock_no_listen" },
	{ 0x813dacf, "sock_wake_async" },
	{ 0x95c7e755, "sk_free" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xb4e12045, "sock_kfree_s" },
	{ 0x75d03dfb, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x596b68da, "module_put" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xf2b34d4e, "proto_register" },
	{ 0xc00291c, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xefe3252d, "sock_register" },
	{ 0x38f47976, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa731b047, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe7597e8d, "kmem_cache_alloc_trace" },
	{ 0xc64a8c3b, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x11f2a8c, "sock_no_sendmsg" },
	{ 0x764487fb, "sock_kzfree_s" },
	{ 0xca02e50b, "iov_iter_advance" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x17f298b1, "__put_page" },
	{ 0x64ee503b, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6670AEEAD9116012651EDD8");
