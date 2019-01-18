#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
	char N[15],S[20];
	printf("----String.h----\n");
	puts("Enter your String1 = ");
	gets(N);
	strlen(N);
	printf("String1 length  = %d\n",strlen(N));
	
	puts("Enter your String2 = ");
	gets(S);
	strlen(S);
	printf("String2 length = %d\n",strlen(S));
	
	strcat(N,S);
	printf("String1 + String2 = %s\n",strcat(N,S));
	
	strcpy(N,S);
	printf("Strcopy = %s\n",strcpy(N,S));
	
	strcmp(N,S);
	printf("Strcompare = %d\n",strcmp(N,S));
	
		printf("----Math.h----\n");
	int x,y;
	float n1,n2,num,r,pi=3.14;	
		printf("Enter your number = ");
		scanf("%d",&x);
		y = sqrt(x);
		printf("Square root of number = %d\n",y);
		printf("------------------\n");

		printf("Enter your number1 = ");
		scanf("%f",&n1);
		printf("Enter your number2 = ");
		scanf("%f",&n2);
		ceil(n1);
		printf("Ceil = %.2f\n",ceil(n1));
		floor(n2);
		printf("Floor = %.2f\n",floor(n2));
	    printf("------------------\n");

		printf("Enter your degree = ");	
		scanf("%f",&num);
		r=(num*pi)/180;
		sin(r);
		printf("sin<%.2f> = %.2f\n",num,sin(r));
		cos(r);
		printf("cos<%.2f> = %.2f\n",num,cos(r));
		tan(r);
		printf("tan<%.2f> = %.2f\n",num,tan(r));
	system("pause");
	return 0;
}
