#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int i,com,kon;
	srand(time(0));
	com = rand()%100;
	printf("Input your number(0-99) = ");
	scanf("%d",&kon);
	if(com>kon){
		printf("random(%d) > guess(%d)\n",com,kon);
	}else if(com<kon){
		printf("random(%d) < guess(%d)\n",com,kon);
	}else if(com==kon){
		printf("random(%d) = guess(%d)\n",com,kon);
	}	
	system("pause");
}
