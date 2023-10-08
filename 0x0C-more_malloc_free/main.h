#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int put_s (char *s);
int str_len(char *s);
void error(void);
int mul_strings(char *s1, char *s2, int *res);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
