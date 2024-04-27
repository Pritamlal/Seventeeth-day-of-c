#include<stdio.h>
#define size 3
int main()
{
	int a[size][size],isUpper,row,col;
	
	printf("Enter the numbers::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}	
	}
	isUpper=1;
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			if(col<row && a[row][col]!=0)
			{
				isUpper=0;
			}
		}
	}
	
	if(isUpper==1)
	{
		printf("\n The matrix is Upper triangular matrix");
	}
	else
	{
		printf("\n The matrix is not Upper Triangular matrix");
	}
}
