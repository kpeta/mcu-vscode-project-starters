BUILD_DIR = build

C_SOURCES =  \
$(wildcard src/*c) \
$(wildcard src/hal/*c) \
$(wildcard src/ll/*c) \

C_INCLUDES =  \
-I inc/  \
-I inc/cmsis/ \
-I inc/hal/ \
-I inc/ll/ \
-I inc/hal/Legacy/ \

# C defines
C_DEFS =  \
-DSTM32F407xx \
-DUSE_HAL_DRIVER \
-DUSE_FULL_LL_DRIVER \
-DHSE_VALUE=8000000 \
#external osc = 8 MHz for STM32F4 Discovery board



PREFIX = arm-none-eabi-
CC = $(PREFIX)gcc
AS = $(PREFIX)gcc -x assembler-with-cpp
CP = $(PREFIX)objcopy
SZ = $(PREFIX)size
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S

CPU = -mcpu=cortex-m4
FPU = -mfpu=fpv4-sp-d16
FLOAT-ABI = -mfloat-abi=hard
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)

CFLAGS= -c $(MCU) $(C_DEFS) $(C_INCLUDES) -std=gnu11 -Og -Wall -g
# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"
LDFLAGS= $(MCU) --specs=nano.specs -T stm32f407xx.ld -Wl,-Map=./build/final.map,--cref 

OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))

all: build $(BUILD_DIR)/final.elf $(BUILD_DIR)/final.hex $(BUILD_DIR)/final.bin

testvar:
	echo $(OBJECTS)

build:
	mkdir build

$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/final.elf: $(OBJECTS) 
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	$(SZ) $@

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf
	$(HEX) $< $@
	
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf
	$(BIN) $< $@

clean:
	rm -rf $(BUILD_DIR)

flash: all
	openocd -f interface/stlink.cfg -f target/stm32f4x.cfg -c "program ./build/final.elf verify reset exit"
