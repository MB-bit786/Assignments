//Write a Program to check the given year is leap year or not.//
#include"header.h"
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year %d",year);
	}
	else
	{
		printf("Not a leap year %d",year);
	}	
}
