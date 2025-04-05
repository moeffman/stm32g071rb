// © 2024 Oskar Arnudd

#include "../inc/memorymap.h"

bool memorymap_is_valid_address(uint32_t address){
    return((address >= 0x40000000 && address <= 0x40000068) ||
	   (address >= 0x40000400 && address <= 0x40000468) ||
	   (address >= 0x40000800 && address <= 0x40000868) ||
	   (address >= 0x40001000 && address <= 0x4000102C) ||
	   (address >= 0x40001400 && address <= 0x4000142C) ||
	   (address >= 0x40002000 && address <= 0x40002068) ||
	   (address >= 0x40002800 && address <= 0x4000285C) ||
	   (address >= 0x40002C00 && address <= 0x40002C08) ||
	   (address >= 0x40003000 && address <= 0x40003010) ||
	   (address >= 0x40003800 && address <= 0x40003820) ||
	   (address >= 0x40003C00 && address <= 0x40003C20) ||
	   (address >= 0x40004400 && address <= 0x4000442C) ||
	   (address >= 0x40004800 && address <= 0x4000482C) ||
	   (address >= 0x40004C00 && address <= 0x40004C2C) ||
	   (address >= 0x40005000 && address <= 0x4000502C) ||
	   (address >= 0x40005400 && address <= 0x40005428) ||
	   (address >= 0x40005800 && address <= 0x40005828) ||
	   (address >= 0x40005C00 && address <= 0x40005C58) ||
	   (address >= 0x40006400 && address <= 0x40006500) ||
	   (address >= 0x40006800 && address <= 0x40006900) ||
	   (address >= 0x40006C00 && address <= 0x40006C0C) ||
	   (address >= 0x40007000 && address <= 0x4000704C) ||
	   (address >= 0x40007400 && address <= 0x4000744C) ||
	   (address >= 0x40007800 && address <= 0x40007814) ||
	   (address >= 0x40007C00 && address <= 0x40007C24) ||
	   (address >= 0x40008000 && address <= 0x4000802C) ||
	   (address >= 0x40008400 && address <= 0x4000842C) ||
	   (address >= 0x40008800 && address <= 0x40008828) ||
	   (address >= 0x40009400 && address <= 0x40009424) ||
	   (address >= 0x4000A000 && address <= 0x4000A038) ||
	   (address >= 0x4000A400 && address <= 0x4000A438) ||
	   (address >= 0x4000B000 && address <= 0x4000B03C) ||
	   (address >= 0x40010000 && address <= 0x400100FC) ||
	   (address >= 0x40010030 && address <= 0x40010034) ||
	   (address >= 0x40010080 && address <= 0x400100FC) ||
	   (address >= 0x40010200 && address <= 0x40010208) ||
	   (address >= 0x40012400 && address <= 0x40012708));
}
