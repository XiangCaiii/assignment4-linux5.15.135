cmd_security/integrity/modules.order := {   cat security/integrity/ima/modules.order;   cat security/integrity/evm/modules.order; :; } | awk '!x[$$0]++' - > security/integrity/modules.order
