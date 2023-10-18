cmd_samples/vfio-mdev/modules.order := {  :; } | awk '!x[$$0]++' - > samples/vfio-mdev/modules.order
