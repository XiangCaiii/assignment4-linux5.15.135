cmd_samples/trace_printk/modules.order := {   echo samples/trace_printk/trace-printk.ko; :; } | awk '!x[$$0]++' - > samples/trace_printk/modules.order
