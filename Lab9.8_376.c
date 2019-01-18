#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int i,com,kon;
	srand(time(0));
	com = rand()%100;
	printf("Guess your number = ");
	scanf("%d",&kon);
	while(com!=kon){
	
		if(com>kon){
			printf("X > %d\n",kon);
		}else if(com<kon){
			printf("X < %d\n",kon);
		}
		printf("Guess your number = ");
		scanf("%d",&kon);			
	}
	printf("Answer = %d and Congratulation!!!\n",com);
	system("pause");
}
