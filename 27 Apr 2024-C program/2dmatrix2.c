#include<stdio.h>
#define size 3
int main()
{
	int a[size][size];
	int num,row,col;
	printf("Enter the numbers::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("Enter the number::\n");
	scanf("%d",&num);
	
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			a[row][col]=num*a[row][col];
		}
	}
	
	printf("Your Answer is::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d ",a[row][col]);
		}
		printf("\n");
	}
}
