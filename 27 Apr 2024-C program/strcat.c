#include<stdio.h>
#define max_size 100
int main()
{
	char str1[max_size],str2[max_size];
	char * s1=str1;
	char * s2=str2;
	printf("ENter first string::");
	gets(str1);
	printf("Enter second string::");
	gets(str2);
	
	while(*(++s1));
	
	while(*(s1++) == *(s2++));
	
	printf("Concatenated String= %s",str1);
	return 0;
}
