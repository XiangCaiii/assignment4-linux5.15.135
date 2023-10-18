cmd_security/keys/trusted-keys/modules.order := {  :; } | awk '!x[$$0]++' - > security/keys/trusted-keys/modules.order
