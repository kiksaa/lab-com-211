#include<stdio.h>
void calc(int);//prototype
int main(){
	int number;
	printf("Enter your number = ");
	scanf("%d",&number);
	calc(number);
	system("pause");
	return 0;
} 
void calc(int n){
	int total;
	total=n*n*n;
	printf("Multipe is %d\n",total);
}
