#include<stdio.h>
int main(){
	char Name[20];
	int Unit;
	float Price,Amount,Total,Discount;
	printf("Enter Product Name : ");
	scanf("%s",Name);
	printf("Enter Price : ");
	scanf("%f",&Price);
	printf("Enter Unit : ");
	scanf("%d",&Unit);
	Total=Price*Unit;
	printf("\n");
	if(Total>=1&&Total<=100){
		Discount=(Total*5)/100;
		printf("Product : %s\n",Name);
		printf("Discount : 5 percen\n");
		printf("Amount : .2%f\n",Total-Discount);
	}else if(Total>=101&&Total<=500){
		Discount=(Total*10)/100;
		printf("Product : %s\n",Name);
		printf("Discount : 10 percen\n");
		printf("Amount : .2%f\n",Total-Discount);
	}else if(Total>=500&&Total<=1000){
		Discount=(Total*15)/100;
		printf("Product : %s\n",Name);
		printf("Discount : 10 percen\n");
		printf("Amount : .2%f\n",Total-Discount);	
	}else if(Total>=1001){
		Discount=(Total*20)/100;
		printf("Product : %s\n",Name);
		printf("Discount : 20 percen\n");
		printf("Amount : .2%f\n",Total-Discount);
	}else{
		printf("Error!!!");
	}
	printf("\n\n");
	printf("<<<<[[[[Thanks For Using Our Service & See You Next Time]]]]>>>>\n");
	system("pause");
	return 0;
}
