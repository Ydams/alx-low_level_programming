#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fontl.h>
#include <unistd.h>

int _putchar(char c);
size_t read textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_t letters);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);

#endif
