cmd_firmware/rtlwifi/rtl8192cufw.bin.gen.o := /home/lee/firebrick/buildroot/output/host/usr/bin/x86_64-buildroot-linux-uclibc-gcc -Wp,-MD,firmware/rtlwifi/.rtl8192cufw.bin.gen.o.d  -nostdinc -isystem /home/lee/firebrick/buildroot/output/host/usr/lib/gcc/x86_64-buildroot-linux-uclibc/4.8.0/include -I/home/lee/firebrick/buildroot/output/build/linux-3.8.5/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/lee/firebrick/buildroot/output/build/linux-3.8.5/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/lee/firebrick/buildroot/output/build/linux-3.8.5/include/uapi -Iinclude/generated/uapi -include /home/lee/firebrick/buildroot/output/build/linux-3.8.5/include/linux/kconfig.h -D__KERNEL__  -D__ASSEMBLY__ -m64 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1          -c -o firmware/rtlwifi/rtl8192cufw.bin.gen.o firmware/rtlwifi/rtl8192cufw.bin.gen.S

source_firmware/rtlwifi/rtl8192cufw.bin.gen.o := firmware/rtlwifi/rtl8192cufw.bin.gen.S

deps_firmware/rtlwifi/rtl8192cufw.bin.gen.o := \

firmware/rtlwifi/rtl8192cufw.bin.gen.o: $(deps_firmware/rtlwifi/rtl8192cufw.bin.gen.o)

$(deps_firmware/rtlwifi/rtl8192cufw.bin.gen.o):
