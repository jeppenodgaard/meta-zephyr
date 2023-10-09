include zephyr-sample.inc


ZEPHYR_MAKE_OUTPUT = "zephyr_openamp_remote.elf"
ZEPHYR_MAKE_BIN_OUTPUT = "zephyr_openamp_remote.bin"
ZEPHYR_MAKE_EFI_OUTPUT = "zephyr_openamp_remote.efi"

ZEPHYR_SRC_DIR = "${ZEPHYR_BASE}/samples/subsys/ipc/openamp/remote"

COMPATIBLE_MACHINE = "(mimx8mq_evk_cm4)"
