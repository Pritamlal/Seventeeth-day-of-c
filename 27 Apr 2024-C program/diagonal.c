#include<stdio.h>
#define size 3
int main()
{
	int a[size][size];
	int sum=0,row,col; 
	printf("Enter the numbers::\n\n");
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
			if(row==col)
			{
				sum+=a[row][col];
			}
		}
	}
	printf("\nAns is: %d",sum);
}
