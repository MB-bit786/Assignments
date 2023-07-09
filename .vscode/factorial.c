//Write a program to find out the factorial of given number using function.
#include"header.h"
int main()
{
  int n,f=1;
  printf("enter the value");
  scanf("%d",&n);
  while(n>=1)
  {
    f=f*n;
    n--;
  }
   printf("\nfactorial of number is %d \n",f);
}
