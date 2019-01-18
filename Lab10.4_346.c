#include<stdio.h>
#include<conio.h>
int main(){
	char str[100];
	char *pstr;
	int i=0;
	puts("Enter your string = ");
	gets(str);
	pstr=&str;
	while(*pstr){
		i++;
		pstr++;
	}
	printf("Length of string = %d\n",i);
	puts("Reverse of string = ");
	while(i>=0){
		printf("%c",*pstr);
		i--;
		pstr--;
	}
	printf("\n");
	system("pause");
	return 0;
}
