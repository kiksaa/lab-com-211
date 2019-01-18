#include<stdio.h>
int main(){
	int num,i,sum=1;
	printf("Enter number = ");
	scanf("%d",&num);
	printf(">>>");
	for(i=num;i>=1;i--){
		sum = sum * i;
		printf("\t%d",i);	
	}
	printf("\n\t%d! = %d\n",num,sum);
	system("pause");
	return 0;
}
