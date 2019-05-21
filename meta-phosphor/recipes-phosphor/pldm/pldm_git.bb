SUMMARY = "Phosphor Pldm"
DESCRIPTION = "Phosphor Pldm is an object which facilitates \
communication between two managed systems like host and \
bmc or bmc and bmc."
PR = "r1"
PV = "1.0+git${SRCPV}"

inherit autotools pkgconfig
inherit obmc-phosphor-systemd

require pldm.inc

DEPENDS += "autoconf-archive-native"
DEPENDS += "systemd"
DEPENDS += "phosphor-logging"
DEPENDS += "phosphor-dbus-interfaces"

S = "${WORKDIR}/git"

SYSTEMD_SERVICE_${PN} += "pldmd.service"
