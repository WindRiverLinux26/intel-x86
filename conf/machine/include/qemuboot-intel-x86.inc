QB_MEM ?= "-m 2048"
IMAGE_CLASSES += "qemuboot"

QB_SYSTEM_NAME:intel-x86-64 = "qemu-system-x86_64"
QB_CPU:intel-x86-64 = "-cpu Nehalem"
QB_CPU_KVM:intel-x86-64 = "-cpu Skylake-Client -machine q35,i8042=off"

QB_AUDIO_DRV = "alsa"
QB_AUDIO_OPT = "-device AC97 -device ES1370"
QB_KERNEL_CMDLINE_APPEND = "oprofile.timer=1"
QB_OPT_APPEND = "-device usb-mouse -usb -device usb-tablet -device usb-kbd"
