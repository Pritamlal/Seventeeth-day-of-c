#include<stdio.h>
#define size 3
int main()
{
	int a[size][size];
	int row,col;
	int isZero;
	printf("Enter the number::\n");
	for(row=0;row<=size;row++)
	{
		for(col=0;col<=size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	isZero=1;
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			if(col>row && a[row][col]!=0)
			{
				isZero=0;
			}
		}
	}
	if(isZero==1)
	{
	printf("It is lower triangular matrix");
	}
	else
	{
	printf("It is not lower triangular matrix");
	}
}
