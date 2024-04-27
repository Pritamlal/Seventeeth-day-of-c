#include<stdio.h>
#define size 3
int main()
{
	int a[size][size];
	int row,col,total;
	printf("Enter the numbers::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	total=0;
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			if(a[row][col]==0)
			{
				total++;
			}
		}
	}
	
	if(total >= (row*col)/2)
	{
		printf("It is scalar Triangular Matrix\n");
	}
	else
	{
		printf("It is not scalar Triangular Matrix\n");
	}
}
