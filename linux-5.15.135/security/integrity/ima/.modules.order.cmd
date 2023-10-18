cmd_security/integrity/ima/modules.order := {  :; } | awk '!x[$$0]++' - > security/integrity/ima/modules.order
