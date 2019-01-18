#include<stdio.h>
int main ()
{
	int num;
	printf("Enter number = ");
	scanf("%d",&num);
	if(num<=20){
		printf("Yes\n");
	}
	if(num<=10){
		printf("No\n");
	}
	
	system("pause");
	return 0;
}
