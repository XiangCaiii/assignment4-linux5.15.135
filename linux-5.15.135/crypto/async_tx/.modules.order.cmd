cmd_crypto/async_tx/modules.order := {   echo crypto/async_tx/async_tx.ko;   echo crypto/async_tx/async_memcpy.ko;   echo crypto/async_tx/async_xor.ko;   echo crypto/async_tx/async_pq.ko;   echo crypto/async_tx/async_raid6_recov.ko; :; } | awk '!x[$$0]++' - > crypto/async_tx/modules.order
