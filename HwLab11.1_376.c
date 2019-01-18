#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fpta;
	char text[50];
	int i=0;
	fpta=fopen("D:/lab com 211/textfile3.txt","r");
	if(fpta==NULL){
		printf("Can not open file\n");
	}else{
		printf("Can open file\n");
		fscanf(fpta,"%s",text);
		while(*(text+i)){
   			if(i%10==0){
    			printf("\n");
   			}
   		printf("%c",*(text+i));
   		i++;
  		}
	}
	fclose(fpta);
	getch();
	return 0;
}
