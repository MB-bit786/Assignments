//Write a program to sort the array of 5 elements.


#include"header.h"
int main()
{
	int a[]={12,20,30,8,58,64};
	int i,j,temp;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n \n After sorting");
	for(i=0;i<6;i++)
	{
		printf("  %d ",a[i]);
	}

}
