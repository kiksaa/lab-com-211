#include<stdio.h>
float sum,x,y,z;
void calc(int num){
	sum = x*x*z+y/2*x;
	printf("Summary = %.2f\n",sum);
}
int main(){
	printf("Input x = ");
	scanf("%f",&x);
	printf("Input y = ");
	scanf("%f",&y);
	printf("Input z = ");
	scanf("%f",&z);
	calc(x);
	system("pause");
	return 0;
}
