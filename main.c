/*
* File: main.c
* Author: mai farahat
*
* created on june 26, 2023, 4:11 AM
*/
#include"string.h"
#include<locale.h>
int main()
{
	/*
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char* ret;

	ret = memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);
	*/
	/*
	char str1[] = "MAI";
	char str2[] = "mai";
	int result = memcmp(str1, str2, 3);
	if (result == 0) {
		printf("str1 equal str2");
	}else if (result < 0) {
		printf("str1 is less than str2");
	}
	else {
		printf("str1 is greater than str2");
	}
	*/
	/*
	char str1[] = "MAIIII";
	char str2[] = "mooooo";
	printf("Before memmove: %s\n", str1, str2);
	memmove(str1, str2, 2);
	printf("After memmove: %s\n", str1, str2);
	*/
	/*
	char arr1[] = "Hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	*/
	/*
	char arr1[] = "Hello";
	char arr2[] = "world";
	strncat(arr1, arr2,3);
	printf("%s\n", arr1);
	*/
	/*
	const char* str = "Hello,world";
	char* result = strchr(str, 'w');
	if (result != NULL) {
		printf("%s\n", result);
	}
	else {
		printf("character not found\n");
	}
	*/
	/*
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strcmp(str1, str2);

	if (ret < 0) {
		printf("str1 is less than str2");
	}
	else if (ret > 0) {
		printf("str2 is less than str1");
	}
	else {
		printf("str1 is equal to str2");
	}
	*/
	/*char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strncmp(str1, str2, 4);

	if (ret < 0) {
		printf("str1 is less than str2");
	}
	else if (ret > 0) {
		printf("str2 is less than str1");
	}
	else {
		printf("str1 is equal to str2");
	}*/
	/*
	setlocale(LC_COLLATE, "");
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abc");
	strcpy(str2, "ABC");

	ret = strcoll(str1, str2);

	if (ret > 0) {
		printf("str1 is less than str2");
	}
	else if (ret < 0) {
		printf("str2 is less than str1");
	}
	else {
		printf("str1 is equal to str2");
	}
	*/
	/*
	char src[40] = "This is tutorialspoint.com";
	char dest[100];
	memset(dest, '\0', sizeof(dest));
	strcpy(dest, src);
	printf(" %s\n", dest);
	*/
	/*
	char src[40] = "This is tutorialspoint.com";
	char dest[12];
	strncpy(dest, src, 9);
	printf(" %s\n", dest);
	*/

	/*
	const char str1[] = "ABCDEF4960910";
   const char str2[] = "010";
	uint8_t len = strcspn(str1, str2);
   printf("First matched character is at %d\n", len +1);
   */
   /*
   int errcode = 1;
   char* message = strerror(errcode);
   printf("%s\n", message);
   */
   /*
   const char* str = "Hello World";
   size_t length = strlen(str);
   printf("Length of |%s| is |%d|\n", str, length);
   */
   /*
   const char* str1 = "Hello, World!";
   const char* str2 = "msnreo";
   char* result = strpbrk(str1, str2);
   if (result != NULL)
	   printf("Found: %c\n", *result);
   else
	   printf("No match found.\n");
   */
   /*const char* str1 = "Hello World";
   char* result = strrchr(str1, 'o');
   if (result != NULL) {
	   printf("%s\n", result);

   }
   else {
	   printf("not found");
   }
   */
   /*
   const char* str1 = "Hello World";
   const char* str2 = "He";
   uint8_t len = strspn(str1, str2);
   printf("length=%d\n", len);
   */
   /*
   const char* haystack = "Tutorials Point";
   const char* needle = "Point";

   char* ret = strstr(haystack, needle);
   if (ret != NULL) {
	   printf(" %s\n", ret);
   }
   else
   {
	   printf("not found");
   }
   */
	/*char str[80] = "This is - www.tutorialspoint.com - website";
	const char s[2] = "-";
	char* token;

	token = strtok(str, s);

	while (token != NULL) {
		printf(" %s\n", token);

		token = strtok(NULL, s);
	}*/
	/*
	char arr1[20];
	char arr2[20] = "ssssssssss";
	uint8_t len = strxfrm(arr1, arr2, 20);
	printf("Length of string |%s| is: |%d|", arr1, len);
	*/
}