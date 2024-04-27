#include<stdio.h>
int main()
{
	char text[100];
	int i,count=0;
	
	printf("Enter the word::");
	gets(text);
	
	for(i=0;text[i]!='\0';i++)
	{
		count++;
	}
	
	printf("Count is %d",count);
}
