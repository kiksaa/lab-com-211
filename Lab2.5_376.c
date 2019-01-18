#include<stdio.h>
int main(){
	int n1,n2,n3,n4,sum=0;
	printf("Enter number a = ");
	scanf("%d",&n1);
	printf("Enter number b = ");
	scanf("%d",&n2);
	printf("Enter number c = ");
	scanf("%d",&n3);
	printf("Enter number d = ");
	scanf("%d",&n4);
	sum=n1+n2+n3+n4;
	if(sum>50){
		printf("%d > 50\n",sum);
	}else{
		printf("%d < 50\n",sum);
	}
	system("pause");
	return 0;
}
