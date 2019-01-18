#include<stdio.h>
int main(){
	int m,n1,n2,r;
	printf("----menu----\n");
	printf("1.plus 2.minus 3.multiply 4.devide\n");
	printf("Enter number of menu = ");
	scanf("%d",&m);
	switch(m){
		case 1: printf("Enter number1 = ");
		        scanf("%d",&n1);
		        printf("Enter number2 = ");
		        scanf("%d",&n2);
		        r=n1+n2;
		break;
		case 2: printf("Enter number1 = ");
		        scanf("%d",&n1);
		        printf("Enter number2 = ");
		        scanf("%d",&n2);
		        r=n1-n2;
		break;
		case 3: printf("Enter number1 = ");
		        scanf("%d",&n1);
		        printf("Enter number2 = ");
		        scanf("%d",&n2);
		        r=n1*n2;
		break;
		case 4: printf("Enter number1= ");
	            scanf("%d",&n1);
	            printf("Enter number2 = ");
		        scanf("%d",&n2);
		        r=n1/n2;
		break;
		default:printf("Error\n");
	}          
	printf("Result = %d\n",r);
	
	system("pause");
	return 0;
}
