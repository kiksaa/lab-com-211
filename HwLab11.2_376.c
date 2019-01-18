#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptn;
	char name[20],ch;
	int i;
	fptn=fopen("D:/lab com 211/textfile4.txt","w");
	if(fptn==NULL){
		printf("can not open file\n");
	}else{
		printf("can open file\n");
		do{
			printf("Enter you name = ");
			scanf("%s",name);
			fputs(name,fptn);
			printf("Continue or not<y/n>? = ");
			scanf("%c",&ch);
			ch=getchar();
		}
		while(ch=='y'||ch=='Y');
		printf("\n");
	}
	system("pause");
	return 0;
}
