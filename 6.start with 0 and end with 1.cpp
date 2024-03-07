#include<stdio.h>
#include<string.h>
int main()
{
	int flag,validity,i, length;
	char s[100];
	printf("enter the string to be checked: ");
	scanf("%s", &s);
	length = strlen(s);
	if(s[0] != '0' || s[length - 1] != '1' ) {
		flag = 1;
	}
    for(i=0;i<length;i++){
    	if(s[i]!=0 || s[i] != 1){
    		validity = 1;
    		break;
		}
	}
	if(flag == 1 && validity == 1){
		printf("the given string does not belong to the language defined by a Context Free Grammar.");
	}
	else{
			printf("the given string belongs to the language defined by a Context Free Grammar.");		
	}
}

