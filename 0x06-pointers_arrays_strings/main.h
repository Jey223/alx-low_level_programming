#ifndef MAIN
#define MAIN

/**
*file: main.h
*auth: Julie Udoh
*desc: Header file contains all prototypes used in 0x06-pointers_arrays_strings
*/

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *str, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);

#endif
