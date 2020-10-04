#pragma once

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/io.h>
#include <sys/mman.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <wctype.h>

enum { START_CONST = 10 };

void Print_Result(char **p, int n);
int cmp(char *a, char *b);
void QuickSort(char **p, int left, int right);
void My_Qsort(char **p, int n);
char *File_Mapping(const char *file_name);
char **Pointers_Reading(char *text_pointer, size_t *i);
void Reset_File(char *text_pointer_tmp, size_t size);