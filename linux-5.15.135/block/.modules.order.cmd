cmd_block/modules.order := {   cat block/partitions/modules.order;   echo block/kyber-iosched.ko;   echo block/bfq.ko; :; } | awk '!x[$$0]++' - > block/modules.order
