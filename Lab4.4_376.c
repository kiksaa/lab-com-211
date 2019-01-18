#include<stdio.h>
int main(){
	int i=1,num;
	printf("Enter number = ");
	scanf("%d",&num);
	for(i=1;i<=12;i++){
		printf("%d * %d = %d\n",num,i,num*i);
	}
	system("pause");
	return 0;
}
