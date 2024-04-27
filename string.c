/*
* File: string.c
* Author: mai farahat
*
* created on june 26, 2023, 4:11 AM
*/
#include"string.h"
void* memchr(const void* str, uint8_t c, uint8_t n) {
	uint8_t* tempstr = str;
	for (uint8_t i = 0; i < n; ++i) {
		if (*tempstr == c) {
			return(void*)tempstr;
		}
		++tempstr;
	}
	return NULL;

}
int memcmp(const void* str1, const void* str2, uint8_t n) {
	uint8_t* tempstr1 = str1;
	uint8_t* tempstr2 = str2;
	for (uint8_t i = 0; i < n; ++i) {
		if (*tempstr1 != *tempstr2) {
			return *tempstr1 - *tempstr2;
		}
		++tempstr1;
		++tempstr2;
	}
	/*if (NULL == tempstr1 || NULL == tempstr2) {
		printf("error");
	}
	else if (tempstr1 == tempstr2){}
	else {
		while (n--) {
			return *tempstr1++ - *tempstr2++;
		}
	}*/
}
void* memmove(void* str1, const void* str2, uint8_t n) {
	uint8_t* tempstr1 = str1;
	uint8_t* tempstr2 = str2;
	if (NULL == tempstr1 || NULL == tempstr2) { printf("error"); }
	else if(tempstr1==tempstr2){}
	else if(tempstr1<tempstr2) {
		while (n--) {
			*tempstr1++ = *tempstr2++;
		}

	}
	else {
		for (uint8_t i = n; i > 0; --i) {
			tempstr1[i - 1] = tempstr2[i - 1];
		}
	}
	return str1;
}
char* strcat(char* dest, const char* src) {
	char* tempdest = dest;
	char* tempsrc = src;
	while (*tempdest!='\0') {
		tempdest++;
	} 
	while (*tempsrc!='\0') {
		*tempdest++ = *tempsrc++;
	}
	*tempdest = '\0';
	return dest;
}
char* strncat(char* dest, const char* src, uint8_t n) {
	char* tempdest = dest;
	char* tempsrc = src;
	while (*tempdest) {
		tempdest++;
	}
	while (*tempsrc && n--) {
		*tempdest++ = *tempsrc++;
	}
	*tempdest = '\0';
	return dest;


}
char* strchr(const char* str, uint8_t c) {
	while (*str != '\0') {
		if (*str == c) {
			return (char*)str;
		}
		str++;
	}
	return NULL ;
}
int strcmp(const char* str1, const char* str2) {
	while (*str1 && (*str1 == *str2)) {
		str1++;
		str2++;
	}
	return*(uint8_t*)str1 - *(uint8_t*)str2;
}
int strncmp(const char* str1, const char* str2, uint8_t n) {
	while (n && *str1 && (*str1 == *str2)) {
		str1++;
		str2++;
		n--;
	}
	if (n == 0) {
		return 0;
	}
	else {
		return*(uint8_t*)str1 - *(uint8_t*)str2;
	}
}
int strcoll(const char* str1, const char* str2) {
	while (*str1 && (*str1 == *str2)) {
		str1++;
		str2++;
	}
	return*(uint8_t*)str1 - *(uint8_t*)str2;
}
char* strcpy(char* dest, const char* src){
	char* tempdest = dest;
	char* tempsrc = src;
	while (*tempsrc )
	{
		*tempdest++ = *tempsrc++;

	}
	return dest;
}
char* strncpy(char* dest, const char* src, uint8_t n) {
	char* tempdest = dest;
	char* tempsrc = src;
	while (*tempsrc && n--)
	{
		*tempdest++ = *tempsrc++;
		
	}

	while (n--)
	{
		*tempdest++ = '\0';
		
	}

	return dest;

}
uint8_t strcspn(const char* str1, const char* str2) {
	const char* tempstr1, * tempstr2;
	uint8_t count = 0;
	for (tempstr1 = str1; *tempstr1 != '\0'; tempstr1++) {
		for (tempstr2 = str2; *tempstr2 != '\0'; tempstr2++) {
			if (*tempstr1 == *tempstr2) {
				return count;
			}
		}
		count++;
	}
	return count;


}
char* strerror(int errnum) {
	static char unknown_error[] = "unknown error";
	static char* error_messages[] = {
		"no error","operation not permitted","no such file or directory",
	};
	static int num_errors = sizeof(error_messages) / sizeof(error_messages[0]);
	if (errnum < 0 || errnum >= num_errors) {
		return unknown_error;
	}
	return error_messages[errnum];

}
uint8_t strlen(const char* str) {
	const char* tempstr = str;
	while (*tempstr!='\0') {
		++tempstr;
	}
	return tempstr - str;
}
char* strpbrk(const char* str1, const char* str2) {
	const char* tempstr1 = str1;
	const char* tempstr2;

	while (*tempstr1 != '\0') {
		tempstr2 = str2;
		while (*tempstr2 != '\0') {
			if (*tempstr1 == *tempstr2)
				return (char*)tempstr1;
			tempstr2++;
		}
		tempstr1++;
	}

	return NULL;
}
char* strrchr(const char* str, uint8_t c)
{
	const char* lastchar = NULL;
	while (*str != '\0') {
		if (*str == c) {
			lastchar = str;
		}
		str++;
	}
	return (char*)lastchar;
}
uint8_t strspn(const char* str1, const char* str2) {
	uint8_t count = 0;
	int ret;
	while (*str1) {
		ret = 0;
		while (*str2) {
			if (*str1 == *str2) {
				ret = 1;
				break;
			}
			str2++;
		}
		if (ret == 0) {
			break;
		}
		count++;
		str1++;
	}
	
	return count;
}
char* strstr(const char* haystack, const char* needle){
	if (*needle == '\0') {
		return (char*)haystack;
	}
	while (*haystack) {
		const char* temph = haystack;
		const char* tempn = needle;
		while (*temph && *tempn && (*temph == *tempn)) {
			temph++;
			tempn++;
		}
		if (*tempn == '\0') {
			return (char*)haystack;
		}
		haystack++;
	}
	return NULL;

	}
char* strtok(char* str, const char* delim) {
	static char* next_tok = NULL;
	if (str != NULL) {
		next_tok = str;
	}
	else if (next_tok == NULL) {
		return NULL;
	}

	char* current_tok = next_tok;
	char* delim_match = strpbrk(next_tok, delim);

	if (delim_match != NULL) {
		*delim_match = '\0';
		next_tok = delim_match + 1;
	}
	else {
		next_tok = NULL;
	}

	return  current_tok;
}
uint8_t strxfrm(char* dest, const char* src, uint8_t n) {
	uint8_t i;
	for ( i = 0; i < n && *src != '\0'; i++) {
		*dest++ = *src++;
	}
	*dest = '\0';
	return i;
}