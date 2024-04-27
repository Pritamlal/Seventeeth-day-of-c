#include<stdio.h>
#include<string.h>
#define max_size 1000
int indexof(const char *str,const char tofind);
int main()
{
	char str[max_size];
	char tofind;
	int index;
	
	printf("Enter the string::");
	gets(str);
	printf("Enter the character to search::");
	tofind=getchar();
	
	index=indexof(str,tofind);
	
	if(index==-1)
	printf("Index %c is not found",tofind);
	else
	printf("Index %c is found %d",tofind,index+1);
	
	return 0;
}

int indexof(const char *str,const char tofind)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i] == tofind)
		return i;
		i++;
	}
	return -1;
}
