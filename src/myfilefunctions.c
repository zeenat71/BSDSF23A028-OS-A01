#include "../include/myfilefunctions.h"
#include <stdlib.h>
#include <string.h>

int wordCount(FILE* file, int* lines, int* words, int* chars) {
    if(!file) return -1;
    int l=0, w=0, c=0;
    char ch;
    while((ch=fgetc(file)) != EOF) {
        c++;
        if(ch==' ' || ch=='\t') w++;
        if(ch=='\n') l++;
    }
    *lines = l; *words = w; *chars = c;
    return 0;
}

int mygrep(FILE* fp, const char* search_str, char*** matches) {
    // Simple placeholder logic
    return 0;
}
