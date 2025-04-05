// © 2024 Oskar Arnudd

#ifndef SYSCFG_H
#define SYSCFG_H

#include "memorymap.h"

// TODO: Change to use same struct-implementation as the rest of the library modules

#define SYSCFG_BASE_OFFSET      (0x10000)
#define SYSCFG_BASE             (APB_BASE + SYSCFG_BASE_OFFSET)
#define SYSCFG_CFGR1_OFFSET     (0x00)
#define SYSCFG_CFGR1            M32(SYSCFG_BASE + SYSCFG_CFGR1_OFFSET)

#endif
