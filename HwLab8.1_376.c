#include<stdio.h>
void main(){
	int n1,n2,m,a;
	int n1,n2,m,a;
	printf("Enter number1 = ");
	scanf("%d",&n1);
	printf("Enter number2 = ");
	scanf("%d",&n2);
	printf("----menu----\n");
	printf("1. Plus\n2. Minus\n3. Multiply\n4. Division\n");
	printf("Choose menu number : ");
	scanf("%d",&m);
	printf("----Answer----\n");
	if(m==1){
		a=n1+n2;
		printf("%d + %d = %d",n1,n2,a);
	}else if(m==2){
		a=n1-n2;
		printf("%d - %d = %d",n1,n2,a);
	}else if(m==3){
		a=n1*n2;
		printf("%d * %d = %d",n1,n2,a);
	}else if(m==4){
		a=n1/n2;
		printf("%d / %d = %d",n1,n2,a);
	}else{
		printf("Error\n");
	}
}
