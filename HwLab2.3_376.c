#include<stdio.h>
int main(){
	int month;
	printf("Enter number of month : ");
	scanf("%d",&month);
	printf("\n");
	if (month==1){
		printf("Month January\n");
	}else if(month==2){
		printf("Month Febuary\n");
	}else if(month==3){
		printf("Month March\n");
	}else if(month==4){
		printf("Month April\n");
	}else if(month==5){
		printf("Month May\n");
	}else if(month==6){
		printf("Month June\n");
	}else if(month==7){
		printf("Month July\n");
	}else if(month==8){
		printf("Month August\n");
	}else if(month==9){
		printf("Month September\n");
	}else if(month==10){
		printf("Month October\n");
	}else if(month==11){
		printf("Month November\n");
	}else if(month==12){
		printf("Month December\n");
	}else{
		printf("Error\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
