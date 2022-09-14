#ifndef _H_MAIN
#define _H_MAIN

#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

ssize_t read_textfile(const char *filename, size_t letters);
int creat_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
