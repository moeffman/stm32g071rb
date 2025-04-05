// © 2024 Oskar Arnudd

#include "../inc/utils.h"

char* utils_array_cpy_fixed(char* dst, char* src, uint8_t length)
{
    for(int i = 0; i < length; i++){
        if(!dst[i] || !src[i]){
            return "utils_array_cpy_fixed: Array length mismatch\r\n";
        }
        dst[i] = src[i];
    }
    return "";
}

bool utils_strings_match(const char* string1, const char* string2)
{
    uint32_t i = 0;
    for(; string1[i]; i++){
	if(string1[i] != string2[i]){
	    return false;
	}
    }
    if(string2[i]){
	return false;
    }
    return true;
}

uint32_t utils_string_to_number(const char* string)
{
    uint32_t result = 0;
    for(uint8_t i = 0; string[i]; i++){
	result = (result * 10) + (string[i] - 48);
    }
    return result;
}
