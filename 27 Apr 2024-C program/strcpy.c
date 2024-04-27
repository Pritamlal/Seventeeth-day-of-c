#include<stdio.h>
int main()
{
	char text1[100],text2[100];
	int i;
	printf("Enter the text::");
	gets(text1);
	
	for(i=0;text1[i]!='\0';i++)
	{
		text2[i]=text1[i];
	}
	printf("Your text is %s",text2);
}
