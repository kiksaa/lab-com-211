#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptr;
	fptr=fopen("D:/lab com 211/textfile1.txt","r");//r=read
	if(fptr==NULL){
		printf("Can not open file\n");
	}else{
		printf("Can open file\n");
	}
	fclose(fptr);
	getch();
	return 0;
}
