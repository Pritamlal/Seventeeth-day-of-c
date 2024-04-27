#include<stdio.h>
#define max_size 3
#define min_size 3
int main()
{
	int a[max_size][min_size],row,col,size,temp;
	
	printf("Enter the numbers::\n");
	for(row=0;row<max_size;row++)
	{
		for(col=0;col<min_size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	size=(max_size<min_size)?max_size:min_size;
	
	for(row=0;row<size;row++)
	{
		col=row;
		
		temp=a[row][col];
		a[row][col]=a[row][(size-col)-1];
		a[row][(size-col)-1]=temp;
	}
	
	printf("Matrix interchanged is ::\n");
	for(row=0;row<max_size;row++)
	{
		for(col=0;col<min_size;col++)
		{
			printf("%d ",a[row][col]);
		}
		printf("\n");
	}
	
}
