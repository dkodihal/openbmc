DESCRIPTION = "Linux kernel for Aspeed"
SECTION = "kernel"
LICENSE = "GPLv2"

PROVIDES += "virtual/kernel"

KCONFIG_MODE="--alldefconfig"

KSRC ?= "git://github.com/openbmc/linux;protocol=git;branch=${KBRANCH}"
SRC_URI = "${KSRC}"
SRC_URI += " file://defconfig"

SRC_URI += " file://0001-dt-bindings-misc-Add-Aspeed-XDMA-engine-binding-docu.patch"
SRC_URI += " file://0002-drivers-misc-Add-Aspeed-XDMA-engine-driver.patch"
SRC_URI += " file://0003-drivers-misc-xdma-Add-user-interface.patch"
SRC_URI += " file://0004-drivers-misc-xdma-Add-PCI-device-configuration-sysfs.patch"
SRC_URI += " file://0005-drivers-misc-xdma-Add-debugfs-entries.patch"
SRC_URI += " file://0006-ARM-dts-aspeed-Add-XDMA-engine.patch"
SRC_URI += " file://0007-ARM-dts-aspeed-wspoon-Enable-XDMA-engine.patch"
SRC_URI += " file://0008-test.patch"

FILESEXTRAPATHS_prepend_ast2400 := "${THISDIR}/ast2400:"
FILESEXTRAPATHS_prepend_ast2500 := "${THISDIR}/ast2500:"

LINUX_VERSION_EXTENSION ?= "-${SRCREV}"

PV = "${LINUX_VERSION}+git${SRCPV}"

inherit kernel
require recipes-kernel/linux/linux-yocto.inc

# From 4.16+ the COPYING file changed
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"
