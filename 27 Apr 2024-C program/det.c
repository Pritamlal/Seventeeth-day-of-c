#include<stdio.h>
#define size 2
int main()
{
	int a[size][size];
	int row,col,det;
	printf("Enter the number of box1::\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	printf("%d",det);
}
