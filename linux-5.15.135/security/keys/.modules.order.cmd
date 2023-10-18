cmd_security/keys/modules.order := {   cat security/keys/trusted-keys/modules.order;   cat security/keys/encrypted-keys/modules.order; :; } | awk '!x[$$0]++' - > security/keys/modules.order
