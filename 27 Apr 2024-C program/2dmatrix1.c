#include<stdio.h>
#define size 3
int main()
{
	int a[size][size];
	int b[size][size];
	int c[size][size];
	int row,col;
	printf("Enter the numbers 1::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("Enter the numbers 2::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	

	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			
		}
		printf("\n");
	}
	
	printf("YOur answers is ::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d ",c[row][col]);
		}
		printf("\n");
	}
	return 0;
}
