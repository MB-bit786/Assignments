//Write a program to concatenate the two string using pointer.

#include"header.h"

void concatenateStrings(char* str1, char* str2, char* result) {
    while (*str1) {
        *result = *str1;
        str1++;
        result++;
    }
    
    while (*str2) {
        *result = *str2;
        str2++;
        result++;
    }
    
    *result = '\0';
}

int main() {
    char str1[100];
    char str2[100];
    char result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}
