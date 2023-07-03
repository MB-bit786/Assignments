#include"header.h"
int main()
{
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter the principal amount: ");
    scanf(" %f ", &principal);
    printf("Enter the rate of interest: ");
    scanf(" %f ", &rate);
    printf("Enter the time period: ");
    scanf(" %f ", &time);
    simple_interest = principal * rate * time / 100;
    compound_interest = principal * (pow(1 + rate / 100, time)) - principal;
    printf("The simple interest is %f.\n", simple_interest);
    printf("The compound interest is %f.\n", compound_interest);
    return 0;
}