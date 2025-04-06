// © 2024 Oskar Arnudd

#ifndef UTILS_H
#define UTILS_H

#include <stdint.h>
#include <stdbool.h>

bool utils_array_cpy_fixed(char* dst, const char* src, uint8_t length);

bool utils_strings_match(const char* string1, const char* string2);

uint32_t utils_string_to_number(const char* string);

void utils_reverse_string(char* str, uint8_t length);

bool utils_dec_to_binarystring(uint32_t dec, char *arr, uint8_t length);

bool utils_dec_to_hexstring(uint32_t dec, uint8_t *arr);

uint32_t utils_hexstring_to_dec(const uint8_t* string);

bool utils_is_number(const char* string);

bool utils_is_number(const char* string);

uint32_t utils_strlen(const char* string);

uint32_t utils_pow(const uint32_t a, const uint32_t b);

#endif
