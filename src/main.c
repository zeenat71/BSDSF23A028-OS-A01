#include <stdio.h>
#include "../include/mystrfunctions.h"
#include "../include/myfilefunctions.h"

int main() {
    printf("--- Testing String Functions ---\n");
    char str1[50] = "Hello";
    char str2[50];
    mystrcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    printf("\n--- Testing File Functions ---\n");
    // Add file function tests later
    return 0;
}
