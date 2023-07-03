//Write a program you have to print the Fibonacci series up to user given number//
#include"header.h"
int main()
{
  int n1,n2,n,n3,i=2;
  n1=0;
  n2=1;
  printf("enter a number");
  scanf("%d",&n);
  printf("\n %d %d",n1,n2);
  while(i<n)
  {
    n3=n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
    i++;
  }
}