cmd_security/landlock/modules.order := {  :; } | awk '!x[$$0]++' - > security/landlock/modules.order
