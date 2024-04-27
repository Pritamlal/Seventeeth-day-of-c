#include<stdio.h>
#define size 3
int main()
{
	int a[size][size];
	int isIdentity,row,col;
	printf("Enter the numbers::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	isIdentity=1;
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			if(row==col && a[row][col]!=1)
			isIdentity=0;
			else if(row!=col && a[row][col]!=0)
			isIdentity=0;
		}
	}
	
	if(isIdentity==1)
	printf("It is Identity matrix");
	else
	printf("It is Non-Identity Matrix");
}
