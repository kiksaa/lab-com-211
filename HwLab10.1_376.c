#include<stdio.h>
#include<conio.h>
int main(){
	int n[5],i,num1,num2,num3,num4,num5;
	int *pt_n;
	for(i=0;i<=4;i++){
		printf("Enter number[%d] = ",i+1);
		scanf("%d",&n[i]);
	}
	pt_n=&n;
	num1=*(pt_n+4);
	num2=*(pt_n+3);
	num3=*(pt_n+2);
	num4=*(pt_n+1);
	num5=*(pt_n+0);
	printf("Reverse number = \n");
	printf("%d %d %d %d %d\n",num1,num2,num3,num4,num5);
	system("pause");
	return 0;
}
