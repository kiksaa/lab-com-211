#include<stdio.h>
int main ()
{
	float n1,n2,n3,r1,r2,r3;
	printf("Enter num1 = ");
	scanf("%f",&n1);
	printf("Enter num2 = ");
	scanf("%f",&n2);
	printf("Enter num3 = ");
	scanf("%f",&n3);
	r1=n1*n2*n3;
	r2=r1*r1;
	r3=r1*r2;
	printf("\n--------------------------\n"); 
	printf("Result1 = %.4f\n",r1);
	printf("Result2 = %.4f\n",r2);
	printf("Result3 = %.4f\n",r3);
	system("pause");
	return 0;
}
