#include<stdio.h>
int main(){
	typedef struct{
		int x,y;
	}point;
	point p1,p2;
	printf("Enter rectangle data\n");
	printf("Point x left-down = ");
	scanf("%d",&p1.x);
	printf("Point y left-down = ");
	scanf("%d",&p1.y);
	printf("Point x right-up = ");
	scanf("%d",&p2.x);
	printf("Point y right-up = ");
	scanf("%d",&p2.y);
	int area;
	area=(p2.x-p1.x)*(p2.y-p1.y);
	printf("Area = %d\n",area);
	system("pause");
	return 0;
}
