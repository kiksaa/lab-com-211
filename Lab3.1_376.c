#include<stdio.h>
int main(){
	int M;
	printf("Enter month# = ");
	scanf("%d",&M);
	switch(M){
		case 1: printf("Junuary\n");
		break;
		case 2: printf("Febuary\n");
		break;
		case 3: printf("March\n");
		break;
		case 4: printf("April\n");
		break;
		case 5: printf("May\n");
		break;
		case 6: printf("June\n");
		break;
		case 7: printf("July\n");
		break;
		case 8: printf("August\n");
		break;
		case 9: printf("September\n");
		break;
		case 10: printf("October\n");
		break;
		case 11: printf("November\n");
		break;
		case 12: printf("Desember\n");
		break;
		default:printf("Error\n");
	}
	system("pause");
	return 0 ;
}
