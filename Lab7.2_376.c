#include<stdio.h>
int main (){
	int a[2][2]={3,2,1,0};
	int b[2][2]={1,4,2,2};
	int sum[2][2];
	
	sum[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
	sum[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	sum[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
	sum[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	
	printf("sum[0][0] = %d\n",sum[0][0]);
	printf("sum[0][1] = %d\n",sum[0][1]);
	printf("sum[1][0] = %d\n",sum[1][0]);
	printf("sum[1][1] = %d\n",sum[1][1]);

	system("pause");
	return 0;
}
