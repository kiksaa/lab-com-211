#include<stdio.h>
typedef struct{ //globals
		char name[20];
		int salary;
	}employee;
	//employee emp[3];
void display(employee e[]);
int main(){
	employee emp[3];
	int i;
	for(i=0;i<=2;i++){
		printf("Enter name[%d] = ",i+1);
		scanf("%s",emp[i].name);
		printf("Enter salary[%d] = ",i+1);
		scanf("%d",&emp[i].salary);		
	}
	display(emp);
	system("pause");
	return 0;
}
void display(employee e[]){
	int j;
	printf("\n-----------------------------\n");
	printf("Name \t Salary\n");
	printf("-----------------------------\n");
	for(j=0;j<=2;j++){
		printf("%s \t %d\n",e[j].name,e[j].salary);
	}
}
