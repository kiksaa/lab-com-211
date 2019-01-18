#include<stdio.h>
int main(){
	char m;
	float area,pi=3.14,r,b,h,l,w;
    printf("-----Area Calculator------\n");
    printf("-----a. Circle-----\n");
    printf("-----b. Triangle-----\n");
    printf("-----c. Rectangle-----\n");
    printf("Select menu : ");
    scanf("%c",&m);
    switch(m){
    
		case 'a': printf("Enter radian = ");
		          scanf("%f",&r);
		          area=pi*r*r;
		break;
		case 'b': printf("Enter base = ");
		          scanf("%f",&b);
		          printf("Enter high = ");
		          scanf("%f",&h);
		          area=0.5*b*h;
        break;
        case 'c': printf("Enter width = ");
                  scanf ("%f",&w);
                  printf("Enter length = ");
                  scanf("%f",&l);
                  area=w*l;
        break;
        default:printf("Error\n");
    }
    printf("Area of Circle = %.2f\n",area);
    system("pause");
    return 0;
}
