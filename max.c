#include"header.h"
int main()
{
	int a,b,c;
	printf("Enter the value of a,b & c");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
    {
      printf("a is Max");
    }
    if (b>a&&b>c)
    {
      printf("b is Max");
    }
    if (c>a&&c>b)
    {
      printf("c is Max");
    }
}