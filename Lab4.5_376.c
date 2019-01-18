#include<stdio.h>
int main(){
	int i=1,num;
	printf("Enter number = ");
	scanf("%d",&num);
	while(i<=12){
		printf("%d * %d = %d\n",num,i,num*i);
		i=i+1;
	}
	printf("End While\n");
	system("pause");
	return 0;
}
