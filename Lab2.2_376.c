#include<stdio.h>
int main()
{
	int num;
	printf("Enter number = ");
	scanf("%d",&num);
	if(num<=50){
		printf("Low\n");
	}
	else{
		printf("High\n");
	}
	
	system("pause");
	return 0;
}
