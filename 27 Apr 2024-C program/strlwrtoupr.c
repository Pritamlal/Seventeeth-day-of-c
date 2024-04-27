#include<stdio.h>
int main()
{
	char text[100];
	int i;
	printf("Enter the text::");
	gets(text);
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>='a' && text[i]<='z')
		{
			text[i]=text[i]-32;
		}
	}
	printf("Uppercase is %s",text);
	return 0;
}
