#include<stdio.h>
int main(){
	int ch;
	printf("Enter Christian Year = ");
	scanf("%d",&ch);
	if(ch%4==0&&(ch%100!=0||ch%400==0)){
		printf("leap year\n");
   }else{
	printf("No leap year\n");
	}
system("pause");
return 0;
}
