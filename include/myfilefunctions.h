#ifndef MYFILEFUNCTIONS_H
#define MYFILEFUNCTIONS_H

#include <stdio.h>

int wordCount(FILE* file, int* lines, int* words, int* chars);
int mygrep(FILE* fp, const char* search_str, char*** matches);

#endif
