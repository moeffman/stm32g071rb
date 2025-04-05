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
