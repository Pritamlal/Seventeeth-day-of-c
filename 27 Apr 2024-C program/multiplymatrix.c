#include<stdio.h>
#define size 3
int main()
{
	int a[size][size],b[size][size],c[size][size];
	int row,col,i;
	int sum;
	
	printf("Enter the number::\n");
	for(row=1;row<=size;row++)
	{
		for(col=1;col<=size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("Enter the number::\n");
	for(row=1;row<=size;row++)
	{
		for(col=1;col<=size;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	
	for(row=1;row<=size;row++)
	{
		for(col=1;col<=size;col++)
		{
			sum=0;
			for(i=1;i<=size;i++)
			{
				sum+=a[row][i]*b[i][col];
			}
			c[row][col]=sum;
		}
	}
	
	printf("Product of the matrix::\n");
	for(row=1;row<=size;row++)
	{
		for(col=1;col<=size;col++)
		{
			printf("%d ",c[row][col]);
		}
		printf("\n");
	}
}
