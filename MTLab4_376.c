#include<stdio.h>
int main()
{
    float w,h,b;
    printf("----------BMI Calculator----------\n");
    printf("Input weight(kg): ");
    scanf("%f",&w);
    printf("Input height(cm): ");
    scanf("%f",&h);
    printf("-------------------------------------\n");
    b=(w)/((h/100)*(h/100));
    if(b<20.00){
    	printf("BMI=%.2f\n",b);
		printf("You are underweight\n");
    }else if(b>=20.00&&b<=23.00){
    	printf("BMI=%.2f\n",b);
    	printf("You are healthy\n");
    }else if(b>=23.01&&b<=24.99){
    	printf("BMI=%.2f\n",b);
    	printf("You are overweight\n");
    }else if(b>=25.00&&b<=29.99){
    	printf("BMI=%.2f\n",b);
    	printf("You are obese level 1\n");
    }else if(b>30.00){
    	printf("BMI=%.2f\n",b);
    	printf("You are obese level 2\n");
    }else{
    	printf("error\n");
    }
    printf("---------------------------------------\n");
	system("pause");
	return 0;
}
