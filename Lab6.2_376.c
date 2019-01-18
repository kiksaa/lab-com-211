#include<stdio.h>
int main(){
	int num[5],sum=0;
	float avg;
	printf("Student No.1 = ");
	scanf("%d",&num[0]);
	printf("Student No.2 = ");
	scanf("%d",&num[1]);
	printf("Student No.3 = ");
	scanf("%d",&num[2]);
	printf("Student No.4 = ");
	scanf("%d",&num[3]);
	printf("Student No.5 = ");
	scanf("%d",&num[4]);
	sum = num[0]+num[1]+num[2]+num[3]+num[4];
	printf("Total = %d\n",sum);
	avg = sum/5;
	printf("Average = %f\n",avg);
system("pause");
return 0;
}
