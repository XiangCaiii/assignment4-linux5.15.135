cmd_mm/modules.order := {   cat mm/kfence/modules.order;   echo mm/hwpoison-inject.ko;   echo mm/z3fold.ko; :; } | awk '!x[$$0]++' - > mm/modules.order
