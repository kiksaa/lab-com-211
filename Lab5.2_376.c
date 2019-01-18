#include<stdio.h>
int main(){
	int i=1,num;
	printf("Enter number = ");
	scanf("%d",&num);
	do{
		printf("%d * %d = %d\n",num,i,num*i);
		i++;
	}while(i<=12);
	system("pause");
	return 0;
}
