.SECONDARY: # this prevents object files from being removed
.DEFAULT_GOAL := all

JD_CORE = jacdac-c
JD_STM = jacdac-stm32x0

_IGNORE0 := $(shell test -f Makefile.user || cp sample-Makefile.user Makefile.user)
_IGNORE1 := $(shell test -f $(JD_STM)/stm32/cmsis_device_g0/README.md || git submodule update --init --recursive 1>&2)

include Makefile.user

DROP_TARGETS ?= acme-corp-button


include $(JD_STM)/build.mk
