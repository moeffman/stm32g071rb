// © 2024 Oskar Arnudd

#include "../inc/utils.h"

bool utils_array_cpy_fixed(char* dst, const char* src, uint8_t length)
{
    for(int i = 0; i < length; i++){
        if(!dst[i] || !src[i]){
            return false;
        }
        dst[i] = src[i];
    }
    return true;
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

void utils_reverse_string(char* str, uint8_t length)
{
    uint8_t left = 0;
    uint8_t right = length - 1;

    while(left < right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

bool utils_dec_to_binarystring(uint32_t dec, char* arr, uint8_t length)
{
    uint8_t index = 0;

    for(int i = 0; i < length; i++){
        if(dec > 0){
            arr[index++] = (dec % 2) + 48;
            dec /= 2;
        }else{
            arr[index++] = 48;
        }
    }
    arr[index] = '\0';

    utils_reverse_string(arr, index);

    return true;
}

bool utils_dec_to_hexstring(uint32_t dec, uint8_t* arr)
{
    uint32_t remainder;
    int32_t index = 7;
    arr[index+1] = '\0';

    while(dec > 0 || index >= 0){
	remainder = dec % 16;
	dec /= 16;

	if(remainder > 9){
	    arr[index] = remainder + 55; // 65-70 is ASCII A-F
	}
	else{
	    arr[index] = remainder + 48; // 48-57 is ASCII 0-9
	}
	index--;
    }
    return true;
}

uint32_t utils_hexstring_to_dec(const uint8_t* string)
{
    uint8_t i = 0;
    uint32_t result = 0;
    uint32_t hexlen = utils_strlen((char*) string) - 1;

    while(string[i]){
	if(string[i] >= '0' && string[i] <= '9'){
	    result += (string[i] - 48) * utils_pow(16, hexlen);
	}else if(string[i] >= 'a' && string[i] <= 'f'){
	    result += (string[i] - 87) * utils_pow(16, hexlen);
	}else if(string[i] >= 'A' && string[i] <= 'F'){
	    result += (string[i] - 55) * utils_pow(16, hexlen);
	}else{
	    return 0;
	}
	i++;
	hexlen--;
    }
    return result;
}

bool utils_is_number(const char* string)
{
    uint32_t i = 0;
    while(string[i]){
	if(string[i] < 48 || string[i] > 57){
	    return false;
	}
	i++;
    }
    return true;
}

uint32_t utils_strlen(const char* string)
{
    uint32_t i = 0;
    while(string[i]){
	i++;
    }
    return i;
}

uint32_t utils_pow(uint32_t a, uint32_t b)
{
    if(b == 0){
	return 1;
    }else{
	return utils_pow(a, b-1) * a;
    }
}
