# ================================
# Library Configuration
# ================================
LIBRARY      = build/libstm32g071rb.a
LIB_SRC_DIR  = src
LIB_INC_DIR  = inc
LIB_BUILD_DIR = build
STARTUP      = $(LIB_SRC_DIR)/startup_stm32g071rb.c
SYSCALLS     = $(LIB_SRC_DIR)/syscalls.c

# ================================
# Toolchain
# ================================
CC           = arm-none-eabi-gcc
AR           = arm-none-eabi-ar
CFLAGS       = -mcpu=cortex-m0plus -mthumb -nostdlib -nostartfiles -g -Wall -Wpedantic -fstack-usage -I$(LIB_INC_DIR) -specs=nosys.specs -specs=nano.specs

# ================================
# Source Files and Objects
# ================================
LIB_SRCS     = $(filter-out $(STARTUP) $(SYSCALLS), $(wildcard $(LIB_SRC_DIR)/*.c))
LIB_OBJS     = $(patsubst $(LIB_SRC_DIR)/%.c,$(LIB_BUILD_DIR)/%.o,$(LIB_SRCS))

# ================================
# Build Rules
# ================================
all: $(LIBRARY)

# Create library build directory
$(LIB_BUILD_DIR):
	@mkdir -p $(LIB_BUILD_DIR)

# Compile library source files
$(LIB_BUILD_DIR)/%.o: $(LIB_SRC_DIR)/%.c | $(LIB_BUILD_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Compiling $<...

# Archive the object files into a static library
$(LIBRARY): $(LIB_OBJS)
	@$(AR) rcs $@ $^
	@echo Library $(LIBRARY) created!

# Clean all
clean:
	@rm -rf $(LIB_BUILD_DIR) $(LIBRARY)
	@echo Cleaned up library build files.

# Mark phony targets
.PHONY: all clean
