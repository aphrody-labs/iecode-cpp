ifeq ($(strip $(DEVKITARM)),)
$(error DEVKITARM is not set; install devkitPro devkitARM and 3ds-dev)
endif

BUILD := build
TARGET := $(BUILD)/iecode_homebrew_3ds
SOURCES := source
INCLUDES := ../common/include
ARCH := -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft
CFLAGS := -g -Wall -Wextra -O2 -mword-relocations -ffunction-sections $(ARCH)
CFLAGS += -I../common/include -DARM11 -D_3DS
CXXFLAGS := $(CFLAGS) -fno-rtti -fno-exceptions
LDFLAGS := -specs=3dsx.specs -g $(ARCH) -Wl,-Map,$(notdir $*.map)
LIBS := -lctru

include $(DEVKITARM)/3ds_rules
