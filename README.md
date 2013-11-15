FIREBrick Remote
---

A version of the open source write-blocker with no LCD screen and WiFi, allowing you to remote into the box via SSH 

---

Software for the open source hardware write-blocker/imager.
This version has no LCD screen and contains WiFi, allowing you to remote into the box via SSH.

FIREBrick Remote features:
*Autonomous disk imaging at speeds of up to 5Gb per minute (disk dependent)
*FireWire write blocker function
*Stand-alone version supports storage mirroring and encryption
*VERY Portable – fits in a MINI-ITX M/B case
*Free, open source firmware
*Can be fully customized to the needs of specific departments
*Adheres to NIST Computer Forensic Tool Testing protocols
*Automatic RAID storage detection
*Control the device using SSH over WiFi!

To build a FIREBrick you need:

*ASRock E350M1 Motherboard
*1Gb DDR3 Desktop RAM (1333 or 1066)
*Dynamode PCIX3FW 3-Port Firewire PCIe
*WiFi dongle - we are using a Belkin N150 http://www.belkin.com/us/F7D1102-Belkin/p/P-F7D1102
*E-MINI series 3016 case - http://www.minicase.net/product_E-3016.html

Note: If you want to use RAID storage, you will also need two equal-sized HDDs. 

For more info visit http://digitalfire.ucd.ie/?page_id=1011

Lee Tobin - leetobin@gmail.com

Address 
Room A1.10
UCD School of Computer Science
University College Dublin
Belfield, Dublin 4, Ireland

dfire@ucd.ie
@dfirelabs


To get developing:
---
Firstly, you'll need a dev environment. Any linux distro with a good set of build tools will do (make, gcc, g++, etc...).

Clone the repo
	git clone https://github.com/leetobin/firebrickRemote.git 
	(this should create a "firebrick" directory containing the source files)

Build buildroot et al.
	cd firebrick/buildroot
	make (and wait about 15-20 mins)

Make an ELF payload from the kernel+filesystem
	cd (../../)firebrick/extraFiles
	./mkelfImage --append="console=ttyS0,115200" ../buildroot/output/images/bzImage ../linux.elf

Build coreboot with the firebrick kernel+filesystem as payload
	cd (../../)firebrick/coreboot
	make (and wait about 2 mins)

To use FIREBrick OS:
---

You can create a bootable USB device with the FIREBrick OS on it. That way you can use it to flash your BIOS (if it fits in the BIOS chip! Otherwise you'll have to use the USB key).

1. Create a bootable USB.
Syslinux works well for this: http://www.syslinux.org/wiki/index.php/The_Syslinux_Project

Install syslinux to your key and create a simple config file like this one:
	
	SYSLINUX.CFG:
		default firebrick

		label firebrick
			linux /bzImage

2. Copy the bzImage and coreboot.rom files from the repo to your USB key.
https://github.com/leetobin/firebrickRemote/blob/master/buildroot/output/images/bzImage

3. Boot into the FIREBrick OS, using the USB key.

Disclaimer:
--
This system is in development, any loss of data/evidence or any related problems are not the fault of this project or DigialFIRE. We're confident in this project, but we're only human. Also, we're adding functionality to the FIREBrick all the time, so again, test your FIREBrick lots (particularly if you've developed new functionality).
