#include "../include/mystrfunctions.h"
#include <stdio.h>

int mystrlen(const char* s) {
    int len = 0;
    while(s[len] != '\0') len++;
    return len;
}

int mystrcpy(char* dest, const char* src) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return 0;
}

int mystrncpy(char* dest, const char* src, int n) {
    int i;
    for(i=0; i<n && src[i]!='\0'; i++)
        dest[i] = src[i];
    for(; i<n; i++)
        dest[i] = '\0';
    return 0;
}

int mystrcat(char* dest, const char* src) {
    int i=0, j=0;
    while(dest[i]!='\0') i++;
    while(src[j]!='\0') {
        dest[i] = src[j];
        i++; j++;
    }
    dest[i] = '\0';
    return 0;
}
