#include<stdio.h>
void togglecase(char *str);
int main()
{
	char str[100];

	printf("Enter the text::");
	gets(str);
	
	togglecase(str);
	
	printf("FINAL ANS is %s",str);
}

void togglecase(char *str)
{
	int i;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		i++;
	}
}
