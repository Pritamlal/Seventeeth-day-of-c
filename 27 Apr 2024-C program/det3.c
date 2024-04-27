#include<stdio.h>
#define size 3
int main()
{
	int mat[size][size];
	int row,col;
	long det;
	int a,b,c,d,e,f,g,h,i;
	printf("Enter the numbers::\n");
	
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&mat[row][col]);
		}
	}
	
	a=mat[0][0];
	b=mat[0][1];
	c=mat[0][2];
	d=mat[1][0];
	e=mat[1][1];
	f=mat[1][2];
	g=mat[2][0];
	h=mat[2][1];
	i=mat[2][2];
	
	det=(a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));
	
	printf("The determinat is %ld",det);
}
