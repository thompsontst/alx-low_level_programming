#ifndef _H_MAIN
#define _H_MAIN

#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

ssize_t read_textfile(const char *filename, size_t letters);
int creat_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
