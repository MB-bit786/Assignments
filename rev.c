//Write a program to print the number in reverse order.//
#include"header.h"
int main() {
    int n, i, rev = 0;
    printf("Enter a number: ");
    scanf(" %d ", &n);
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    printf("The reverse of the number is %d.\n", rev);
    return 0;
}