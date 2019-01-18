#include<stdio.h>
int main(){
	char menu;
	printf("Enter menu character : ");
	scanf("%c",&menu);
	switch(menu){
		case 'a': printf("Withdraw\n");
		break;
		case 'A': printf("Withdraw\n");
		break;
		case 'b': printf("Deposit\n");
		break;
		case 'B': printf("Deposit\n");
		break;
		case 'c': printf("Open new account\n");
		break;
		case 'C': printf("Open new account\n");
		break;
		default:printf("Error\n");
	}
	system("pause");
	return 0 ;
}
