ZEPHYRTESTS:remove = "fifo fpu_sharing lifo mbox mem_heap mem_pool \
    mem_protect mem_slab msgq mutex pipe profiling sched semaphore \
    stack threads tickless timer workq"

# Exclude tests which does not build for various reasons
ZEPHYRTESTS:remove = "gen_isr_table spinlock smp mp"

# Exclude tests that are not currently compiling
ZEPHYRTESTS:remove:96b-avenger96 = "common device poll queue sleep"
ZEPHYRTESTS:remove:96b-nitrogen = "common device poll queue sleep"
ZEPHYRTESTS:remove:arduino-nano-33-ble = "common device poll queue sleep"
ZEPHYRTESTS:remove:nrf52840dk-nrf52840 = "common device poll queue sleep"
ZEPHYRTESTS:remove:qemu-x86 = "common device interrupt poll queue sleep"
ZEPHYRTESTS:remove:stm32mp157c-dk2 = "common device poll queue sleep"

# test_context will fail because QEMU for ARM does not emulate CortexM3 BASEPRI register
#ZEPHYRTESTS:remove:arm = ""

# test_critical never finishes in an unpatched QEMU either
#ZEPHYRTESTS:remove:arm = ""

#Remove ARM specific tests
#ZEPHYRTESTS:remove:x86 = ""

#Remove tests not intended for Nios2
#ZEPHYRTESTS:remove:nios2 = ""

# List of all available kernel tests
ZEPHYRTESTS = " \
    common \
    context \
    device \
    early_sleep \
    fifo \
    fpu_sharing \
    gen_isr_table \
    interrupt \
    lifo \
    mbox \
    mem_heap \
    mem_pool \
    mem_protect \
    mem_slab \
    mp \
    msgq \
    mutex \
    pending \
    pipe \
    poll \
    profiling \
    queue \
    sched \
    semaphore \
    sleep \
    smp \
    spinlock \
    stack \
    threads \
    tickless \
    timer \
    workq \
    xip \
    "
