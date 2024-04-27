#include<stdio.h>
#define size 3
int main()
{
	int a[size][size],b[size][size];
	int row,col;
	printf("Enter the nunber::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			b[row][col]=a[col][row];
		}
	}
	
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d ",b[row][col]);
		}
		printf("\n");
	}
	
}
