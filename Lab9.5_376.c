#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,ran;
	for(i=1;i<=10;i++){
		ran = rand()%1000;
		printf("%d \n",ran);
	}
	system("pause");
}
