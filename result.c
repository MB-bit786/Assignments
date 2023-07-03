/*• Write a program user enter the 5 subjects mark. You have to make a total and find the percentage.
a) percentage > 75 you have to print “Distinction”
b) percentage > 60 and percentage <= 75 you have to print “First class” 
c) percentage >50 and percentage <= 60 you have to print “Second class”
 d) percentage > 35 and percentage <= 50 you have to print “Pass class”
   e) Otherwise print “Fail”*/
#include"header.h"
int main() 
{
    int m1, m2, m3, m4, m5, total, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf(" %d %d %d %d %d ", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total * 100) / 500;
    if (percentage > 75)
        printf("Distinction");
    else if (percentage > 60 && percentage <= 75)
        printf("First class");
    else if (percentage > 50 && percentage <= 60)
        printf("Second class");
    else if (percentage > 35 && percentage <= 50)
        printf("Pass class");
    else
        printf("Fail");
    return 0;
}