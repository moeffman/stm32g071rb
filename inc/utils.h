// © 2024 Oskar Arnudd

#ifndef UTILS_H
#define UTILS_H

#include <stdint.h>
#include <stdbool.h>

char* utils_array_cpy_fixed(char* dst, char* src, uint8_t length);

bool utils_strings_match(const char* string1, const char* string2);

uint32_t utils_string_to_number(const char* string);

#endif
