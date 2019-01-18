#include<stdio.h>
int main(){
	int work[2][2];
	
	printf("Enter Work day#1 = ");
	scanf("%d",&work[0][0]);
	printf("Enter Salary#1 = ");
	scanf("%d",&work[0][1]);
	
	printf("Enter Work day#2 = ");
	scanf("%d",&work[1][0]);
	printf("Enter Salary#2 = ");
	scanf("%d",&work[1][1]);
	
	printf("All Work day = %d\n",work[0][0]+work[1][0]);
	printf("All Salary = %d\n",work[0][1]+work[1][1]);
	
	system("pause");
	return 0;
}
