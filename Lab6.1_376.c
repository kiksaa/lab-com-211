#include<stdio.h>
int main()
{
	int score[3],num;
	printf("Enter score std#1 = ");
	scanf("%d",&score[0]);
	printf("Enter score std#2 = ");
	scanf("%d",&score[1]);
	printf("Enter score std#3 = ");
	scanf("%d",&score[2]);
	printf("Choose Std. index# = ");
	scanf("%d",&num);
	printf("Std. index %d = %d\n",num,score[num]);
	system("pause");
	return 0;
}
