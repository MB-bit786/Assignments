// Write a program to make a square and cube of number.//
#include"header.h"
int main()
{
    int num, square, cube;
    printf("Enter a number: ");
    scanf(" %d ", &num);
    square = num * num;
    cube = num * num * num;
    printf("The square of %d is %d\n", num, square);
    printf("The cube of %d is %d\n", num, cube);
    return 0;
}