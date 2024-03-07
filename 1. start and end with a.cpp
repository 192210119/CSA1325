#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int n;
	printf("enter a string:");
	scanf("%s",string);
	n=strlen(string);
	if(string[0]=='a'&&string[n-1]=='a')
	{
		printf("string is accepted\n");
	}
	else{
		printf("string is not accepted\n");
	}
}
