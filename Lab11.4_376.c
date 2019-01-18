#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptr;
	char name[20],job[20];
	int i;
	fptr=fopen("D:/lab com 211/textfile2.txt","w");//w=write
	if(fptr==NULL){
		printf("Can not open file\n");
	}else{
		printf("Can open file\n");
		for(i=1;i<=3;i++){
			printf("Enter name[%d] = ",i);
			scanf("%s",name);
			printf("Enter name[%d] = ",i);
			scanf("%s",job);
			fprintf(fptr,"Name[%d] = %s and Job[%d] = %s\n",i,name,i,job);
		}
	}
	fclose(fptr);
	getch();
	return 0;
}

