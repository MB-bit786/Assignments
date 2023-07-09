/*Write a Program of Print a number and
 check the number is palindrome or not using recursive Function*/
#include<stdio.h>
int main()
{
  int n,r,sum=0,temp;
  printf("\n enter the number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }
  if(temp==sum)
  printf("\n Palindrome number");
  else
  printf("\n Not Palindrome");
}
