#include<stdio.h>
#define size 3
int main()
{
	int a[size][size],b[size][size];
	int row,col,isIdentity;
	printf("Enter the numbers::\n");
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
			b[row][col]=a[row][col];
		}
	}
	
	isIdentity=1;
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			if(b[row][col]!=a[col][row])
			{
				isIdentity=0;
				break;
			}
		}
	}
	
	if(isIdentity==1)
	{
		printf("Yeah it is Symmetric matrix");
	}
	else
	{
		printf("Not yah it not Symmetric");
	}
}
