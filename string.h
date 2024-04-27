/*
* File: string.h
* Author: mai farahat
*
* created on june 26, 2023, 4:11 AM
*/
#ifndef STRING_h
#define STRING_h
#include"Types.h"
#include<stdio.h>
void* memchr(const void* str, uint8_t c, uint8_t n);
int memcmp(const void* str1, const void* str2, uint8_t n);
void* memmove(void* str1, const void* str2, uint8_t n);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, uint8_t n);
char* strchr(const char* str, uint8_t c);
int strcmp(const char* str1, const char* str2);
int strncmp(const char* str1, const char* str2, uint8_t n);
int strcoll(const char* str1, const char* str2);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, uint8_t n);
uint8_t strcspn(const char* str1, const char* str2);
char* strerror(int errnum);
uint8_t strlen(const char* str);
char* strpbrk(const char* str1, const char* str2);
char* strrchr(const char* str, uint8_t c);
uint8_t strspn(const char* str1, const char* str2);
char* strstr(const char* haystack, const char* needle);
char* strtok(char* str, const char* delim);
uint8_t strxfrm(char* dest, const char* src, uint8_t n);


#endif