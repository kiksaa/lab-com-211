#include<stdio.h>
int main()
{
	int age;
	printf("Enter number age : ");
	scanf("%d",&age);
	if(age>0&&age<=20){
		printf("Ovantin Milk\n");
	}else if(age>=21&&age<=30){
		printf("Bear Milk\n");
	}else if(age>=31&&age<=40){
		printf("Cat Milk\n");
	}else if(age>=41&&age<=50){
		printf("Dog Milk\n");
	}else if(age>=50&&age<=69){
		printf("Sheep Milk\n");
	}else if(age>70){
		printf("Cow Milk\n");
	}else{
		printf("Error\n");
	}
	system("pause");
	return 0;
}
