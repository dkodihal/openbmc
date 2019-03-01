FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
SRC_URI += "file://witherspoon.cfg"
SRC_URI += "file://0001-misc-Add-MCTP-LPC-driver-for-ASPEED-KCS-devices.patch"
SRC_URI += "file://0002-mctp-lpc-Emit-an-error-on-overrun.patch"
