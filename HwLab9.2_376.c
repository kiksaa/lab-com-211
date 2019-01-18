#include<stdio.h>
#include<math.h>
int main(){
	float deg,sum,cot,pi=3.14,rad;
	printf("Please enter degree : ");
	scanf("%f",&deg);
	rad = (deg*pi)/180;
	cot = cos(rad)/sin(rad);
	sum = 2*sin(2*rad)+cot-1;
	printf("The Result is %.4f\n",sum);
	getch();
	return 0;
}
