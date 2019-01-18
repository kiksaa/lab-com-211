#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int i,ran;
	srand(time(0));
	for(i=1;i<=10;i++){
		ran = rand()%1000;
		printf("%d \n",ran);
	}
	system("pause");
}
