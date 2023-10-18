cmd_samples/modules.order := {   cat samples/vfio-mdev/modules.order;   cat samples/trace_printk/modules.order;   cat samples/ftrace/modules.order; :; } | awk '!x[$$0]++' - > samples/modules.order
