#include<stdio.h>
int main(){
	int m=25,n=60;
	int *pt_m,*pt_n;
	int x,y;
	pt_m=&m;
	pt_n=&n;
	x=*pt_m;//25
	y=*pt_n;//60
	printf("Value m = %d and n = %d\n",m,n);
	printf("Address of m = %p and n = %p\n",&m,&n);
	printf("Value of pt_m -> m = %p and pt_n -> n = %p\n",pt_m,pt_n);
	printf("Address of pt_m = %p and pt_n = %p\n",&pt_m,&pt_n);
	printf("Value of X = %d and Y = %d\n",x,y);//no x,y --> *pt_m,*pt_n
	system("pause");
	return 0;
}
