#include<stdio.h>
int main()
{
	char name[20],major[15],color[10];
	int ho,sec;
	printf("Enter your full-name = ");
	scanf("%[^\n]",name);
	printf("Enter your Dormitory = ");
	scanf("%d",&ho);
	printf("Enter your major = ");
	scanf("%s",major);
	printf("Enter your color = ");
	scanf("%s",color);
	printf("Enter your section = ");
	scanf("%d",&sec);
	printf("\n------------------------------------------\n");
	printf("Full-name = %s\n",name);
	printf("Dormitory = %d\nMajor = %s\n",ho,major);
	printf("Color = %s\nSection = %d\n",color,sec);
	system("pause");
	return 0;
}
