#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptr;
	char s1,s2,s3;
	
	fptr=fopen("D:/lab com 211/textfile1.txt","r");
	if(fptr==NULL){
		printf("Can not open file\n");
	}else{
		printf("Can open file\n");
		fscanf(fptr,"%c %c %c",&s1,&s2,&s3); //1 ch abb &
		printf("%c %c %c\n",s1,s2,s3);
	
	}
	if(!fclose(fptr)){
		printf("Not close file\n");
		fclose(fptr);
		printf("close file\n");
	}else{
		printf("Error\n");
	}
	getch();
	return 0;
}
