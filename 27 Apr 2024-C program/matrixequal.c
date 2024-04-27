#include<stdio.h>
#define size 3
int main()
{
	int a[size][size],b[size][size];
	int row,col,isEqual;
	printf("Enter the numbers::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("Enter the number::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	
	isEqual=1;
	
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			if(a[row][col]!=b[row][col])
			{
				isEqual=0;
				break;
			}
		}
	}
	
	if(isEqual==1)
	printf("It is equal yah");
	else 
	printf("It is not equal yah");
	
}
