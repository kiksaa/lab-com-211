#include<stdio.h>
int main(){
	struct student{
		char name[20];
		int age;
	}s[10]; // array student 10
	int i;
	for(i=0;i<=9;i++){
		printf("Student[%d]\n",i+1);
		printf("Name = ");
		scanf("%s",s[i].name);
		printf("Age = ");
		scanf("%d",&s[i].age);
	}
	printf("\n-----Student of age >= 20-----\n");
	for(i=0;i<=9;i++){
		if(s[i].age>=20){
			printf("%s and %d\n",s[i].name,s[i].age);
		}
	}
	system("pause");
	return 0;
}
